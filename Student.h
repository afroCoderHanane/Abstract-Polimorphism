#pragma once
#include<iostream>
#include<string>
#include "Person.h"
using namespace std;
class Student: public Person
{
  private:
    string id;
  public:
    Student(string id, string name); //:Person(name);
    virtual void print(); 
};