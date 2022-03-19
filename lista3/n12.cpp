#include <iostream>
using namespace std;

struct SPC{

int CPF;
int quantMeses;

}dados[2];

int busca(struct SPC dados[],int cpfProcurado,int quantInadimplentes){

for(int i=0;i<2;i++){
    if(cpfProcurado==dados[i].CPF){
    cout << "CPF encontrado na " << i << "° posicao!\n" << endl;
    return 0;
    }
        if(cpfProcurado!=dados[i].CPF){
        return -1;
        }
}
return 2;
}

int leitura_SPC(struct SPC dados[]){

int quantInadimplentes=0;
for(int j=0;j<2;j++){
cout << "digite o CPF dos que se encontram com o nome no SPC -> ";
cin >> dados[j].CPF;
cout << "digite por quanto tempo esse CPF esta inadimplente :: ";
cin >> dados[j].quantMeses;
cout << endl;
quantInadimplentes++;
}

return quantInadimplentes;
}
int vendasLoja(){

int j=0;
int cpfCliente,quantInadimplentes,inandimplentes;
int codProduto,quantProdutos,precoUnitario,totalVenda=0;
quantInadimplentes = leitura_SPC(dados);

for(j=0;j<2;j++){

cout << "digite o CPF do cliente > ";
cin >> cpfCliente;
cout << "digite o codigo do produto -> ";
cin >> codProduto;
cout << "diga a quantidade de produtos que serao comprados -> ";
cin >> quantProdutos;
cout << "digite o preco unitario -> ";
cin >> precoUnitario;
cout << endl;

totalVenda = precoUnitario * quantProdutos;

 if(busca(dados,cpfCliente,quantInadimplentes)==-1){
cout << "o valor total da venda foi :: " << totalVenda << "\n";
cout << endl;
}
    else{
    cout << " -- VENDA CANCELADA -- cliente inamdimplente por " << dados[j].quantMeses  << " meses " << "\n";
    cout << endl;
    }
}
return 0;
}

int main(){

vendasLoja();

return 0;
}