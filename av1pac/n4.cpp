#include <iostream> 

using namespace std; 

 

int maiorDivisor(int x){ 

int i,resto,maiorD = 1; 

for (i=1;i<=x;i++){ 
    
     resto = x % i; 

          if (resto == 0 && i>maiorD && i!=x){ 

                 maiorD = i; 

          } 

} 

return maiorD; 

} 

int primo(int x){ 

if (x != 1 && x != 0 && maiorDivisor(x) == 1){ 

    cout << "primo" << endl; 

return 1; 

} 

else { 

return 0; 

} 

return 0; 

} 

int main(){ 

int x; 

cout << "por favor, entre com um numero:"<< endl; 

cin >> x; 

cout << maiorDivisor(x) << " e o maior divisor de: " << x << endl; 

cout << primo(x)<< endl; 

return 0; 

} 