
#include "hodan.h"
HoDan::HoDan()
{

}
HoDan::~HoDan()
{

}
void HoDan::input()
{
    cout << "- Nhap So Nha: " << endl;
    cin >> this->soNha;
    cout << "- Nhap So Thanh Vien: " << endl;
    cin >> this->soThanhVien;
    thanhVien.resize(soThanhVien);
    for( list<Person>::iterator it = thanhVien.begin(); it != thanhVien.end(); it++)
    {
        it->input();
    }
}
void HoDan::output()
{
    cout << "- So Nha: " << this->soNha << endl;
    cout << "- Thanh Vien: " << this->soThanhVien << endl;
    thanhVien.resize(soThanhVien);
    for( list<Person>::iterator it = thanhVien.begin(); it != thanhVien.end(); it++)
    {
        it->output();
    }
}
uint HoDan::getSoNha()
{
    return this->soNha;
}
bool HoDan::findThanhVien(string hoten)
{
    for( list<Person>::iterator it = thanhVien.begin(); it != thanhVien.end(); it++)
    {
        if( hoten == it->getHoten())
        {
            return true;
        }
    }
    return false;
}