#include <iostream>

using namespace std;

void quantAsterisco(int numeroVezes)
{
    for(int i=0; i<numeroVezes; i++)
    {
        cout << "*";   
    }
}

void inicializa(int v[])
{
    for(int i=0; i<=10; i++)
    {
        v[i] = 0;
    }
}

void exibe(int v[])
{
    for(int i=0; i<=10; i++)
    {
        cout << "Nota " << i << ":";
        quantAsterisco(v[i]);
        cout << endl;
    }
}

int main()
{
    int nota;
    int contador[11];
    inicializa(contador);
    for(int i=0; i<10; i++)
    {
        cin >> nota;
        contador[nota]++;
    }
    exibe(contador);
    return 0;
}