#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //transformar tudo em segundos
    //dividir os segundos para conseguir minutos
    //dividir minutos para horas
    int s, m, h, t;
    int s_total, ss, mm, hh;
    hh = 0;
    mm = 0;
    ss = 0;
    cin >> h;
    cin >> m;
    cin >> s;
    cin >> t;
    s_total = h*3600 + m*60 + s + t;
    ///consegue a quantidade de minutos
    while(s_total >= 60)
    {
        s_total = (s_total-60);
        mm++;
    }
    ss = s_total;
    //test
    ///consegue quantidade de horas
    while(mm >= 60)
    {
        mm = mm-60;
        hh++;
    }
    ///formata as horas
    while(hh >= 24)
    {
        hh = hh-24;
    }
    cout << hh << endl << mm << endl << ss << endl;
    return 0;
}
