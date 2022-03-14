//ler 10 numeros inteiros e imprimir o MAIOR.
#include <iostream>

using namespace std;

int main(){
int inteiro,i,maior=0;

for(i=1; i<=10 ;i++){
cout << "por favor, digite 10 numeros inteiros >> ";
cin >> inteiro;
cout << "\n";
  if(inteiro > maior){
  maior = inteiro;
  }
}

cout << "o maior numero inteiro foi >> " << maior << "\n"; 

return 0;
}