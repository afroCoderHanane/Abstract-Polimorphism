#include <iostream>
#include <string>
#include"Ugrad.h"
using namespace std;
// virtual polimorphism

int main() {
    Ugrad k1(3.5, "CS", "123", "Paul");
   
    k1.print();

    //another way to print 
    cout<<"--------------------------------"<<endl;
    cout<<"Here is another way to print"<< endl;
    cout<<"--------------------------------"<<endl;
    Ugrad *k2= new Ugrad(3.6, "CSC", "1234", "Pauline");
    k2->print();
}