/*
a cada registro vai ter que mostrar a media entre p1 e p2 e vai preencher o campo situação com APROVADO(MEDIA>6),REPROVADO(MEDIA<6)
*/
#include <iostream>
#include <string.h>

using namespace std;

struct Aluno{
char situacao[10];
char nome[40];
float p1;
float p2;
}aluno[5];

float situacao(struct Aluno aluno[]){
float media=0;
int i;

for(i=0;i<=4;i++){
media = (aluno[i].p1+aluno[i].p2)/2;

    if(media < 6){
    strcpy(aluno[i].situacao,"reprovado\n");
    cout << aluno[i].situacao;
    }
    if(media >= 6 ){
    strcpy(aluno[i].situacao,"aprovado\n");
    cout << aluno[i].situacao;
    }
}
return 0;
}
int main(){

strcpy(aluno[0].nome,"gabriela");
aluno[0].p1 = 3.2;
aluno[0].p2 = 4.2;
strcpy(aluno[1].nome,"pedro");
aluno[1].p1 = 7.5;
aluno[1].p2 = 9.7;
strcpy(aluno[2].nome,"maria");
aluno[2].p1 = 10;
aluno[2].p2 = 9.9;
strcpy(aluno[3].nome,"ana");
aluno[3].p1 = 4.5;
aluno[3].p2 = 5.0;
strcpy(aluno[4].nome,"alice");
aluno[4].p1 = 9.0;
aluno[4].p2 = 8.1;

situacao(aluno);


return 0;
}