/*
lanchonete que analisa a forma de pagamento,da troco. 
*/
#include <iostream>

using namespace std;

int processaTickets(int quantTic){
float valorpagoT=0;
float valorTic=0;

for(int i=1;i<=quantTic;i++){
    cout << "digite o valor do TICKET -- " << i << "-- > ";
    cin >> valorTic;
    valorpagoT+=valorTic;
    cout << endl;
}
return valorpagoT;
}
int main(){
int j=0;
int formaPag;
int quantTic=0;
float valorPago=0;
float despesa=0;
float troco=0;

for(j=1;j<=2;j++){
do{
cout << "digite o valor da despesa >> ";
cin >> despesa;
cout << endl;
cout << "-- digite a forma de pagamento -- <<\n 1 para cartão de débito / 2 para cartão de crédito / 3 para dinheiro / 4 para ticket" << endl;
cin >> formaPag;
cout << endl;
    if(formaPag==1){
        cout << "Pagamento efetuado com sucesso, nao ha troco! \n";
        despesa=0;
    }
    if(formaPag==2){
        cout << "Pagamento efetuado com sucesso, nao ha troco! \n";
        despesa=0;
    }
    if(formaPag==3){
    cout << "digite o valor que sera pago em dinheiro >> ";
    cin >> valorPago;
        if(valorPago>despesa){
        troco = valorPago-despesa;
        cout << "seu troco de >> " << troco << "pagamento efetuado com sucesso\n"; 
        }
        despesa = valorPago-despesa;
        if(despesa==0){
        cout << "Pagamento efetuado com sucesso!\n";
        }
    }
    if(formaPag==4){
    cout << "digite a quantidade de tickets >> ";
    cin >> quantTic;
    valorPago = processaTickets(quantTic);
        if(valorPago>despesa){
        troco = valorPago - despesa;
        cout << "seu troco de >> " << troco << "pagamento efetuado com sucesso!"<<"\n";
        }
        despesa = valorPago - despesa;
        if(despesa==0){
        cout << "Pagamento efetuado com sucesso!\n";
        }
    }
}while(despesa!=0 && j!=2);
}
return 0;
}