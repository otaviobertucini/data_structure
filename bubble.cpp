void bubble(int list[], int size){
    int t=-1, i, aux;
    int len = size;
    while(t != 0){
        t = 0;
        for(i=0; i<size-1; i++){
            if(list[i] > list[i+1]){
                aux = list[i];
                list[i] = list[i+1];
                list[i+1] = aux;
                t++;
            }
        }
        len--;
    }
}
