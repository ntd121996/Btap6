#ifndef _H_Person_H
#define _H_Person_H
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string hoTen;
public:
    Person(/* args */);
    ~Person();
    void input();
    void output();
    string getHoten();
};








#endif // _H_Person_H