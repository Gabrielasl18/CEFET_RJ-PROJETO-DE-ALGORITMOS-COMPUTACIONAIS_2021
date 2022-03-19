#include <iostream>
using namespace std;

struct Pessoa{
int idade;
int grauFormacao;
}dados[7];

int somaIdade(struct Pessoa dados[]){

int somaId[7],i=10;
int quantEscolaridade[7];

for(i=0;i<7; i++){
somaId[i] = 0;
quantEscolaridade[i] = 0;
}
for(i=0;i<7;i++){
somaId[dados[i].grauFormacao-1] += dados[i].idade;
quantEscolaridade[dados[i].grauFormacao-1]++;
}
for(i=0;i<7;i++){
if(somaId[i]>0 && quantEscolaridade[i]>0){
cout << "a media das idades da escolaridade " << i << " -> " << somaId[i]/quantEscolaridade[i] << endl;
}

}
return 0;
}
int main(){

dados[0].idade = 20;
dados[0].grauFormacao = 1;
dados[1].idade = 36;
dados[1].grauFormacao = 2;
dados[2].idade = 33;
dados[2].grauFormacao = 1;
dados[3].idade = 24;
dados[3].grauFormacao = 7;
dados[4].idade = 31;
dados[4].grauFormacao = 2;
dados[5].idade = 15;
dados[5].grauFormacao = 7;
dados[6].idade = 54;
dados[6].grauFormacao = 3;
somaIdade(dados);

return 0;
}
