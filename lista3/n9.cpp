#include <iostream>

using namespace std;

int inicializa(int vetor_idade[]){

for(int i=0;i<=2;i++){
  vetor_idade[i]=0;
}
return 0;
}
int exibe(int vetor_idade[]){

int maisVelho=0;
int i=0;
  for(i=0;i<=2;i++){
    if(vetor_idade[i]>maisVelho){
        maisVelho = vetor_idade[i];
    }
  }
cout << "a pessoa mais velha do departamento tem > ";
return maisVelho;
}
int main(){

int i=0,j=0;
int codDep;
int vetor_idade[3];
for(j=0;j<=5;j++){
    cout << "digite o codigo do seu departamento >";
    cin >> codDep;
    cout << endl;
for(i=0;i<=2;i++){
    cout << "diga sua idade > ";
    cin >> vetor_idade[i];
    cout << endl;
}
    cout << exibe(vetor_idade) << endl;
}
 

return 0;
}