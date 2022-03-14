#include <iostream>

using namespace std;

int stringInvertida(char string[]){
int numCaracteres=0;

while(string[numCaracteres] !=0 ){
      ++numCaracteres;  
}
for(int i=numCaracteres;i>=0;i--){
cout << string[i];
}
cout << "\n";

return 0;
}
int main(){
int numCaracteres=0;
char string[40];

cout << "digite aqui o que desejar >> ";
cin.getline(string,40);
cout << "a string escrita de/ tras para frente -> " << stringInvertida(string);
return 0;
}