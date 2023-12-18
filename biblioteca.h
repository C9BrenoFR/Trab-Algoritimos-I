#include <iostream>

using namespace std;

void lermatriz(char matriz[10][10])
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cin >> matriz[i][j];
        }
    }
}

void imprimirmatriz(char matriz[10][10])
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout << matriz[i][j];
        }
        cout << endl;
    }
}