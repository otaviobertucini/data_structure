void quick(int list[], int begin, int end){
    int i=begin, j=end, aux;
    int pivot = list[(end+begin)/2];
    while(i<j){
        while(pivot < list[j])
            j--;
        while(list[i] < pivot)
            i++;
        if(i<=j){
            aux = i;
            i = j;
            j = aux;
            i++;
            j--;
        }
    }
    if(i < end)
        quick(list, i, end);
    if(j > begin)
        quick(list, begin, j);
}
