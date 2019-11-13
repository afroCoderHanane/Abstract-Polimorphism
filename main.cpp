#include <iostream>
#include <string>
#include"Ugrad.h"
using namespace std;
// virtual polimorphism

int main() {
 // Ugrad k1;
    Ugrad *k1= new Ugrad(3.5, "CS", "123", "Paul");
    k1->print();
}