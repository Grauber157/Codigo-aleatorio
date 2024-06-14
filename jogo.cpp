#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int valor[n];

    ///LEITURA
    for(int x=0; x < n*n; x++)
    {
        cin >> valor[n];
    }
    cout << endl;
    for(int x=0; x < n; x++)
    {
        for(int x=0; x < n; x++)
        {
            cout << valor[n];
        }
        cout << endl;
    }



    ///Q
    for(int z=0; z < q; z++)
    {
        ///N
        //X
        for(int x=0; x < n; x++)
        {
            //Y
            //for(int y=0; y < n; y++)
            //{
            //
            //    cout << valor[y];
            //}
            //cout << endl;
        }
        //quebra de linha
        cout << endl;
    }


    return 0;
}
