#include <iostream>

using namespace std;

float media_final(float nota1,float nota2){

float media=0;
media = ((nota1+nota2)/2);

return media;
}
int main(){
float mediaprova=0,mediatrabalho=0,prov1,prov2,trab1,trab2;
int matricula;

cout << "digite sua matricula:\n";
cin >> matricula;
cout << "digite a nota da primeira prova:\n";
cin >> prov1;
cout << "digite a nota da segunda prova:\n";
cin >> prov2;
cout << "digite a nota do primeiro trabalho:\n";
cin >> trab1;
cout << "digite a nota do segundo trabalho:\n";
cin >> trab2;

cout << "matricula:" << matricula << "\n";
cout << "media dos trabalhos: " << media_final(trab1,trab2) << "\n";
cout << "media das provas" << media_final(prov1,prov2) << "\n";
cout << "sua media final" << (media_final(trab1,trab2) + media_final(prov1,prov2))/2 << "\n";

return 0;
}