/*
RETORNA O VALOR A SER PAGO AO GARÇOM
*/
#include <iostream>

using namespace std;

double valor_garcom(double valor_gasto) {

double pagar;
pagar = ((valor_gasto * 10/100) + valor_gasto);

return pagar;
}
int main() {

double valor_gasto;
cout << "digite o valor que foi gasto: " <<endl;
cin >> valor_gasto;
cout <<"o valor gasto foi: R$" << valor_gasto << " e o valor gasto + o valor a ser pago ao garcom eh de: R$"<< valor_garcom(valor_gasto) << endl;cout << endl << "###################################FIM###################################"<<endl;

return 0;
}