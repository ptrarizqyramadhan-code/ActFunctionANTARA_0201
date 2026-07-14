#include <iostream>
using namespace std;

float HitungRerataBerparameter(float x, float y){
    return (x + y) / 2;
}

string CekstatusBerparameter(float a){
    if(a >= 60){
        return "Lulus";
    } else {
        return "Tidak Lulus";
    }
}

int main()
{
    float Ujian1, Ujian2;

    cout << "Masukkan nilai Ujian 1 : ";
    cin >> Ujian1;
    cout << "Masukkan nilai Ujian 2 : ";
    cin >> Ujian2;

    cout << "status Kelulusan : "
     << CekstatusBerparameter(HitungRerataBerparameter(Ujian1, Ujian2));
}