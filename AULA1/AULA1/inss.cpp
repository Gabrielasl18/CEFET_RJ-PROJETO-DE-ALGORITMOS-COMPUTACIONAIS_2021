#include <iostream>

using namespace std;

int main() {

	float salario, salarioLiquido,inss;

	cout << "Digite aqui seu salário:";
	cin >> salario;

	 if (salario <= 1100){

		inss = salario * 0.075;
	 }
	 else {
		   if (salario <= 2.203,48){

		    inss = salario * 0.09;
		
		       if (salario <= 3.305, 22){


		        inss = salario * 0.12;
   
			       if (salario <= 6.433, 57){

				    inss = salario * 0.14;

		  	       }
		       }
		   
		   }

	 }
	 salarioLiquido = salario - inss;
	cout << salario - salarioLiquido;
}