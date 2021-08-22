#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int _Consumo;

    cin >> _Consumo;
    if((_Consumo >= 0) && (_Consumo <= 10))
        cout << 7 << endl;
    else
    if((_Consumo > 10) && (_Consumo <= 30))
        cout << 7 + _Consumo - 10 << endl;
    else
    if((_Consumo > 30) && (_Consumo <= 100))
        cout << 27 + ((_Consumo - 30) * 2) << endl;
    else
    if(_Consumo > 100)
        cout << 167 + ((_Consumo - 100) * 5) << endl;

    return 0;
}
