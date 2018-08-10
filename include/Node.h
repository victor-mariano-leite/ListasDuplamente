#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class Node{
    public:
        int value;
        Node *next,*prev;
        Node(){
        int value =NULL;
        next=prev=NULL;
        }

};

#endif // NODE_H
