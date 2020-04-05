#include "person.h"

Person::Person(/* args */)
{
    this->hoTen = "";
}

Person::~Person()
{
}
void Person::input()
{
    cin.ignore();
    cout << "- Nhap Ho Ten: " << endl;
    fflush(stdin);
    getline(cin, this->hoTen);
}
void Person::output()
{
    cout << "- Ho Ten: " << this->hoTen << endl;
}
string Person::getHoten()
{
    return this->hoTen;
}
