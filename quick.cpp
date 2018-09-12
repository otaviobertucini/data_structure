void quick(int list[], int begin, int end){
    int i=begin, j=end, aux;
    int pivot = list[(begin+end)/2];
    while(i<j){
        while(list[i] < pivot)
            i++;
        while(list[j] > pivot)
            j--;
        if(i<=j){
          aux = list[i];
          list[i] = list[j];
          list[j] = aux;
          i++;
          j--;
        }
    }
    if(begin < j)
        quick(list, begin, j);
    if(i < end)
        quick(list, i, end);
}
