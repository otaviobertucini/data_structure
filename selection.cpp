void selection(int list[], int size){
    int i, j, p_smaller, aux;
    for(i=0; i<size; i++){
        j = i+1;
        p_smaller = i;
        for(j; j<size; j++){
            if(list[j] < list[p_smaller]){
                p_smaller = j;
            }
        }
        aux = list[i];
        list[i] = list[p_smaller];
        list[p_smaller] = aux;
    }
}
