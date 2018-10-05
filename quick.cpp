#include <iostream>
using std::cout;
using std::endl;

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

int main() {
    int i, size=10;
    int list[10] = {8, 1, 3, 6, 4, 2, 10, 9, 5, 7};
    quick(list, 0, 9);
    for(i=0; i<size; i++)
        cout << list[i] << endl;
    return 0;
}
