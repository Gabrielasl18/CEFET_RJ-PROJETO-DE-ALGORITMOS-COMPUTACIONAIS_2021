#include <iostream>

using namespace std;

struct banco{

int saldo;
int numConta=1;

}cadastroCliente[2];

int exibe(struct banco cadastroCliente[],int quantClientes,float saldoMedio){

for(int i=1;i<=quantClientes;i++){
    if(cadastroCliente[i].saldo>saldoMedio){
    cout << "seu saldo esta acima do saldo medio do banco!\n";
    }  
    if(cadastroCliente[i].saldo<saldoMedio){
    cout << "seu saldo esta abaixo do saldo medio do banco!\n";
    }
    if(cadastroCliente[i].saldo==saldoMedio){
    cout << "seu saldo esta igual ao saldo medio do banco!\n";
    }
}
return 0;
}
int main(){
int quantClientes=2;
float saldoMedio=2110;

for(int i=1;i<=quantClientes;i++){
    while(cadastroCliente[i].numConta!=0){
    cout << "digite o numero da conta :: ";
    cin >> cadastroCliente[i].numConta;
    cout << "agora digite seu saldo :: ";
    cin >> cadastroCliente[i].saldo;
    }
}
exibe(cadastroCliente,quantClientes,saldoMedio);
return 0;
}
