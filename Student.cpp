#include "Student.h"
 
 Student::Student(string id, string name):Person(name)
 {
   this->id =id;
 }
 void  Student :: print()
 {
   cout <<"Id number: "<< id << endl;
   cout << "Name: "<<Person::getName()<<endl;
 }