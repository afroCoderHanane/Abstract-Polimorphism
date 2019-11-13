#pragma once
#include<iostream>
#include<string>
#include "Student.h"
using namespace std;
class Ugrad :public Student
{
  private:
    double gpa;
    string major;
  public:
    Ugrad(double gpa,string major, string id, string name);//): Student(id)//
  
    virtual void print();


};