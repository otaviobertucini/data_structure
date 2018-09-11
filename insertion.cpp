void insertion(int list[], int size){
    int i, n, j;
    for(i=1; i<size; i++){
        n = list[i];
        j = i-1;
        while(j >= 0 && n < list[j]){
            list[j+1] = list[j];
            j--;
        }
        list[j+1] = n;
    }
}
