#include <iostream>

using namespace std;


int maiorDivisor(int x)
{
    int i,resto,maiorD = 1;

for (i=1;i<=x;i++){
    resto = x % i;
    if (resto == 0 && i>maiorD && i!=x){
          maiorD = i;
    }
}
return maiorD;
}
int main()
{
    int x;
cout << "por favor, entre com um numero" << endl;
cin >> x;
cout << maiorDivisor(x) << " e o maior divisor de: " << x << endl;
cout << "Fim" << endl;
return 0;
}