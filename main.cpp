#include <iostream>
#include <string>
#include"Ugrad.h"
using namespace std;
// virtual polimorphism

int main() {
    Ugrad k1(3.5, "CS", "123", "Paul");
   
    k1.print();

    //another method to print 
    cout<<"Here is another method to print"<< end;
    Ugrad *k1= new Ugrad(3.5, "CS", "123", "Paul");
    k1->print
}