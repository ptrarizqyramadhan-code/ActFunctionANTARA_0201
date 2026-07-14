#include <iostream>
using namespace std;

int panjang,lebar;

void input ()
{
    cout << "Masukkan panjang : ";
    cin >> panjang;
    cout << "Masukkan lebar : ";
    cin >> lebar;       
}

int luaspersegi ()
{
    return panjang * lebar;
}
void output()
{
    cout << "Hasilnya : " << luaspersegi();
}

int main()
{
    input();
    output();
}