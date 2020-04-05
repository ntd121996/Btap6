#ifndef _H_KHU_PHO_H
#define _H_KHU_PHO_H
#include "hodan.h"

class KhuPho
{
private:
    list<HoDan> HoGiaDinh;
public:
    KhuPho(/* args */);
    ~KhuPho();
    void input(HoDan hodan);
    void output();
    void findSoNha(uint sonha);
    void findTen(string hoten);
};







#endif // _H_KHU_PHO_H