#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "Node.h"

class Lista{
    public:
        Node *head;
        Node *tail;
        Lista(){
            head=tail=NULL;
        }
//Metodos

//Imprimir a lista
void print_list(){
    Node *aux = head;
    if (!head){
        cout<<"Não existe lista"<< "\n";
    }else{
    while (aux){
        cout<<aux->value<<"\n";
        aux=aux->next;
    }
    }
}
//Encontrar elemento
bool find(int x){
Node *aux = head;
if (!head){
    cout<<"Não existe lista"<< "\n";
    return false;
}else{
    while (aux){
        if (aux->value==x){
            return true;
        }
  aux=aux->next;
    }
   return false;
}

}
//Inserindo atras
void push_back(int x){
    Node *novo = new Node();
    novo->value=x;
    if(head==NULL){
        head=novo;
        tail=novo;
    }else{
    tail->next=novo;
    novo->prev=tail;
    tail=novo;

    }
}
//Inserindo na frente
void push_front(int x){
    Node *novo=new Node();
    novo->value=x;
    if (!head){
       head=novo;
       tail=novo;
    }else{
    novo->next=head;
    head->prev=novo;
    head=novo;
    }
}
//Deletando atras
bool delete_back(){
    if(!head){
        return false;
    }else{
        tail=tail->prev;
        tail->next=NULL;
        return true;
    }
}
//Deletando na frente
bool delete_front(){
    if(!head){
        return false;

    }else{
    head=head->next;
    head->prev=NULL;
    return true;
    }

}
//Deletando Elemnetos igual a x
bool delete_elemt(int x){
    if(!find(x)){
        return false;
    }
    while(head->value==x){
        delete_front();
    }
    while(tail->value==x){
        delete_back();
    }
    if(!head){
        return false;
    }else{
    Node *pointer=head;
          while(pointer){
            if(pointer->value==x){

           (pointer->prev)->next=pointer->next;
           (pointer->next)->prev=pointer->prev;
        }
        pointer=pointer->next;
        }
    }
    return true;
    }
//Inserção intermediaria
void push_after_aleatory(int x, Node *p){
        Node *novo=new Node();
        novo->value=x;
    if(!head){
        cout<<"Não existe lista"<< "\n";
    }else if (tail==p){
        push_back(x);
    }else{
        novo->next=p->next;
        novo->prev=p;
        p->next->prev=novo;
        p->next=novo;
    }
}

//Remoção intermediaria
void delete_after_aleatory(Node *p){
    if(!head){
        cout<<"Não existe lista"<< "\n";
    }else if (tail==p){
        delete_back();
    }else if(head==p){
        delete_front();
    }else{
        (p->prev)->next=p->next;
        (p->next)->prev=p->prev;
         p->next=p->prev=NULL;
         delete p;
    }
}









};

#endif // LISTA_H
