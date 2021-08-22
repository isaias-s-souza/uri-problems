#include<bits/stdc++.h>
using namespace std;
int main(){
    int _HoraInicial, _MinutoInicial, _HoraFinal, _MinutoFinal;

    cin >> _HoraInicial >> _MinutoInicial >> _HoraFinal >> _MinutoFinal;

    if((_HoraInicial == _HoraFinal) && (_MinutoInicial == _MinutoFinal))
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    else
    if((_HoraFinal == _HoraInicial) && (_MinutoFinal > _MinutoInicial))
        cout << "O JOGO DUROU 0 HORA(S) E " << _MinutoFinal - _MinutoInicial << " MINUTO(S)" << endl;
    else
    if((_HoraFinal == _HoraInicial) && (_MinutoFinal < _MinutoInicial))
        cout << "O JOGO DUROU 23 HORA(S) E " << 60 - (_MinutoInicial - _MinutoFinal) << " MINUTO(S)" << endl;
    else
    if((_MinutoInicial == _MinutoFinal) && (_HoraFinal > _HoraInicial))
        cout << "O JOGO DUROU " << _HoraFinal - _HoraInicial << " HORA(S) E 0 MINUTO(S)" << endl;
    else
    if((_MinutoInicial == _MinutoFinal) && (_HoraFinal < _HoraInicial))
        cout << "O JOGO DUROU " << 24 - (_HoraFinal - _HoraInicial) << " HORA(S) E 0 MINUTO(S)" << endl;
    else
    if((_HoraFinal > _HoraInicial) && (_MinutoFinal > _MinutoInicial))
        cout << "O JOGO DUROU " << _HoraFinal - _HoraInicial << " HORA(S) E " << _MinutoFinal - _MinutoInicial << " MINUTO(S)" << endl;
    else
    if((_HoraFinal > _HoraInicial) && (_MinutoFinal > _MinutoInicial))
        cout << "O JOGO DUROU " << _HoraFinal - _HoraInicial << " HORA(S) E " << _MinutoFinal - _MinutoInicial << " MINUTO(S)" << endl;
    else
    if((_HoraFinal > _HoraInicial) && (_MinutoFinal < _MinutoInicial))
        cout << "O JOGO DUROU " << _HoraFinal - _HoraInicial - 1 << " HORA(S) E " << 60 - (_MinutoInicial - _MinutoFinal) << " MINUTO(S)" << endl;
    else
    if((_HoraFinal < _HoraInicial) && (_MinutoFinal > _MinutoInicial))
        cout << "O JOGO DUROU " << 24 - _HoraInicial + _HoraFinal << " HORA(S) E " << _MinutoFinal - _MinutoInicial << " MINUTO(S)" << endl;
    else
    if((_HoraFinal < _HoraInicial) && (_MinutoFinal < _MinutoInicial))
        cout << "O JOGO DUROU " << 24 - _HoraInicial + _HoraFinal - 1 << " HORA(S) E " << 60 - (_MinutoInicial - _MinutoFinal) << " MINUTO(S)" << endl;

    return 0;
}
