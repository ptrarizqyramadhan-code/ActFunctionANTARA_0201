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