// quantidade de digitos numa string.
#include <iostream>

using namespace std;

int quantCaracteres(char string[]){
int numCaracteres=0;

while(string[numCaracteres] !=0){
      ++numCaracteres;
}
return numCaracteres;
}
int main(){
int contador=0;
char string[40];

cout << "digite seu nome -> ";
cin.getline(string,40);
cout << "\n";
cout << "nome -> " << string << "\n";
cout << "a quantidade de digitos informados na string >> " << quantCaracteres(string) << "\n";

return 0;
} 
