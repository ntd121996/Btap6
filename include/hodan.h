#ifndef _H_Ho_Dan_H
#define _H_Ho_Dan_H
#include "person.h"
#include <list>
class HoDan
{
private:
    uint   soNha;
    uint   soThanhVien;
    list<Person> thanhVien;
public:
    HoDan(/* args */);
    ~HoDan();
    void input();
    void output();
    uint getSoNha();
    bool findThanhVien(string hoten);
};







#endif // _H_Ho_Dan_H