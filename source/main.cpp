#include "khupho.h"

void displayScreen()
{
    cout << "1.Nhap Thong Tin Moi"; cout << endl;
    cout << "2.Tim Kiem Theo So Nha"; cout << endl;
    cout << "3.Tim Kiem Theo Ten"; cout << endl;
    cout << "4.Hien Thi Toan Bo Ho Dan"; cout << endl;
    cout << "5.Thoat Chuong Trinh"; cout << endl;
}
void displayChoice()
{
    cout << "1.Nhap Thong Tin Cho Khoi A"; cout << endl;
    cout << "2.Nhap Thong Tin Cho Khoi B"; cout << endl;
    cout << "3.Nhap Thong Tin Cho Khoi C"; cout << endl;
    cout << "4.Thoat Chuong Trinh"; cout << endl;
}
void ClearScreen()
{
    cout << string( 6, '\n');
}

int main ( int argc, char **argv )
{
    KhuPho phoAnDuong;
    uint menuChoice;
    uint soNha;
    string hoTen;
    bool working = true;
    HoDan newHoDan;
    do
    {
        ClearScreen();
        displayScreen();
        menuChoice = 0;
        cin >> menuChoice;
        ClearScreen();
        switch (menuChoice)
        {
        case 1:
            phoAnDuong.input(newHoDan);
            break;
        case 2:
            cout << "- Nhap So Nha Can Tim Kiem: " << endl;
            cin >> soNha;
            phoAnDuong.findSoNha(soNha);
            break;
        case 3:
            cin.ignore();
            cout << "- Nhap Ho Ten Can Tim Kiem: " << endl;
            getline(cin, hoTen);
            phoAnDuong.findTen(hoTen);
            break;
        case 4:
            phoAnDuong.output();
            break;
        case 5:
            working = false;
            break;
        default:
            working = false;
            break;
        }
        cin.ignore();
        cout << "- Enter to continue... ";
        cin.get();
        ClearScreen();
        cout << " ======================\n";
    }
    while(working);

    return 0;
}