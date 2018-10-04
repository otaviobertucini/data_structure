#define N 10
#include <stddef.h>
#include <iostream>
using std::cout;
using std::endl;

struct stack{
    int array[N]; //array hava a imutable number of positions
    int first, last; /*first is the base of the stack and last is the top
                      and the number of elements added*/
};

void start(stack *stack){
    stack->first = stack->last = 0;
}

int empty(stack *stack){
    if(stack->first == stack->last)
        return 1;
    return 0;
}

void add(stack *stack, int e){
    if(stack->last >= N)
        return;

    stack->array[stack->last] = e;
    stack->last = stack->last + 1;
}

int size(stack *stack){
    return stack->last;
}

void list(stack *stack){
    for(int i = size(stack)-1; i >= 0; i--)
        cout << stack->array[i] << endl;
}

int pop(stack *stack){
    int x = stack->array[stack->last-1];
    stack->last = stack->last - 1;
    return x;
}

int main(){
    stack s;
    start(&s);
    add(&s, 1);
    add(&s, 2);
    add(&s, 3);
    add(&s, 4);
    pop(&s);
    pop(&s);
    list(&s);
}
