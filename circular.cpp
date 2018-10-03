#include <stddef.h>
#include <iostream>
using std::cout;
using std::endl;

class Node{
private:
    Node* next;
    Node* prev;
    int data;
public:
    Node* getNext(){return next;}
    Node* getPrev(){return prev;}
    int getData(){return data;}
    void setNext(Node* n){next = n;}
    void setPrev(Node* p){prev = p;}
    void setData(int d){data = d;}
};

class Circular{
private:
    Node* first;
    Node* last;
    int size;
public:
    Circular(){first=NULL; last=NULL; size=0;}
    ~Circular(){}
    void insert(int e){
        Node* newn = new Node;
        newn->setData(e);
        if(first == NULL){
            first = newn;
            first->setNext(newn);
            last = newn;
            first->setPrev(newn);
        }
        else{
            last->setNext(newn);
            newn->setPrev(last);
            last = newn;
            last->setNext(first);
            first->setPrev(last);
        }
    }
    void list(){
        Node* aux = first;
        while(aux != last){
            cout << aux->getData() << endl;
            aux = aux->getNext();
        }
        cout << aux->getData() << endl;
    }
};

int main(){
    Circular cir;
    cir.insert(5);
    cir.insert(6);
    cir.insert(7);
    cir.insert(8);

    cir.list();
}
