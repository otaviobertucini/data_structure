//List must be sorted
void binary(int array[], int e, int begin, int end){
    int middle = (begin + end)/2;
    if(array[middle] == e){
        cout << "Elemento na posição: " << middle << endl;
        return;
    }
    if(begin == end){
        cout << "Elemento não encontrado!" << endl;
        return;
    }
    if(array[middle] < e)
        return binary(array, e, middle+1, end);
    return binary(array, e, begin, middle-1);
}
