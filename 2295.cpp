#include<bits/stdc++.h>
using namespace std;
int main(){
    double _PrecoAlcool, _PrecoGasolina, _RendAlcool, _RendGasolina;

    cin >> _PrecoAlcool >> _PrecoGasolina >> _RendAlcool >> _RendGasolina;
    if((_RendAlcool / _PrecoAlcool) > (_RendGasolina / _PrecoGasolina))
        cout << "A" << endl;
    else
    if((_RendGasolina /_PrecoGasolina ) >= (_RendAlcool / _PrecoAlcool))
        cout << "G" << endl;

    return 0;
}
