#pragma once
#include<iostream>
#include<string>
using namespace std;
class Person
{
  public:
   Person(string name);
    virtual void print()=0;
     string getName();
  
  private:
    string name ;
  
};