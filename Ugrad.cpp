#include "Ugrad.h"
Ugrad::Ugrad(double gpa,string major, string id, string name): Student(id, name)
{
  this->major=major;
  this->gpa=gpa;
}
void Ugrad::print()
{
  Student::print();
  cout<<"GPA"<<gpa<<endl;
  cout<<"major"<<major<<endl;
}