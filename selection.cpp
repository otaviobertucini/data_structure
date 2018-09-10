#include <iostream>
using std::cout;
using std::endl;

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

int main() {
    int i, size=10;
    int list[size] = {8, 1, 3, 6, 4, 2, 10, 9, 5, 7};
    selection(list, size);
    for(i=0; i<size; i++)
        cout << list[i] << endl;
    return 0;
}
