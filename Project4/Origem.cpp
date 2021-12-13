#include <iostream>

using namespace std;

int main()
{

	float salario, valorIR, salarioLiquido;

	cin >> salario;


	if (salario < 1903.99)
	{
		// Aliquota de 0% com 0 de deducao
		valorIR = 0;
	}
	else
	{
		if (salario < 2826.66)
		{
			valorIR = salario * 0.075 - 142.80;

			// Aliquota de 7.5% com 142.80 de deducao

		}
		else
		{
			if (salario < 3751.06)
			{
				valorIR = salario * 0.15 - 354.80;
				// Aliquota de 15% com 354.80 de deducao
			}
			else
			{
				if (salario < 4664.68)
				{
					valorIR = salario * 0.225 - 636.13;
					// Aliquota de 22.5% com 636.13 de deducao
				}
				else
				{
					valorIR = salario * 0.275 - 869.36;
					// Aliquota de 27.5% com 869.36 de deducao
				}
			}
		}
	}

	salarioLiquido = salario - valorIR;
	cout << "Salario Bruto: " << salario << endl;
	cout << "Imposto de Renda Retido: " << valorIR << endl;
	cout << "Salario Liquido: " << salario - valorIR << endl;



}