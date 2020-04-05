#include "khupho.h"

KhuPho::KhuPho(/* args */)
{
}

KhuPho::~KhuPho()
{
}
void KhuPho::input(HoDan hodan)
{
    cout << "- Nhap Thong Tin Ho Dan: " << endl;
    hodan.input();
    this->HoGiaDinh.push_back(hodan);
}
void KhuPho::output()
{
    cout << "- Thong Tin Ho Dan: \n==========" << endl;
    for( list<HoDan>::iterator it = HoGiaDinh.begin(); it != HoGiaDinh.end(); it++)
    {
        it->output();
        cout << "\n===============\n";
    }
}
void KhuPho::findSoNha(uint sonha)
{
    list<HoDan>::iterator it;
    bool isFinded = false;
    for( it = HoGiaDinh.begin(); it != HoGiaDinh.end(); it++)
    {
        if( sonha == it->getSoNha())
        {
            isFinded = true;
            break;
        }
    }
    if(isFinded)
    {
        it->output();
    }
    else
    {
        cout << " Khong Tim Thay ";
    }
    
}
void KhuPho::findTen(string hoten)
{
    list<HoDan>::iterator it;
    bool isFinded = false;
    for( it = HoGiaDinh.begin(); it != HoGiaDinh.end(); it++)
    {
        if( it->findThanhVien(hoten))
        {
            isFinded = true;
            break;
        }
    }
    if(isFinded)
    {
        it->output();
    }
    else
    {
        cout << " Khong Tim Thay ";
    }
}