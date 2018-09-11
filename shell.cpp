void shell(int list[], int size){
    int len, i, aux;
    len = size/2;
    while(len >= 1){
        for(i=0; i<size-len; i++){
            if(list[i] > list[i+len]){
                aux = list[i];
                list[i] = list[i+len];
                list[i+len] = aux;
            }
        }
        len /= 2;
    }
}
