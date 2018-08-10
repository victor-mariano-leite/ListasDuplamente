#include <iostream>
#include "Node.h"
#include "Lista.h"
using namespace std;

int main(){
Lista a;
a.push_back(10);
a.push_front(20);
a.push_back(30);
a.push_back(40);
a.push_back(50);
a.delete_front();
a.print_list();







    return 0;
}
