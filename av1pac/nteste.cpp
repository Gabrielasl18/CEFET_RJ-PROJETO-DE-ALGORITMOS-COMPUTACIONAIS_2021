#include <iostream>

using namespace std;

int maiorDivisor(int x)
{
    int i,resto,maiorD = 1;

for (i=1;i<=x;i++)
{
    resto = x % i;
    if (resto == 0)
    {
         if (i>maiorD && i!=x)
            {
          maiorD = i;
        }
    }
}
return maiorD;
}
int primo(int x)
{
  int soma = 0;
        if (x != 1 && x != 0 && maiorDivisor(x) == 1)
        {
        for (int i=1;i<=10;i++){
           soma +=x;
            cout << soma;
        }
        }
        else {
            return 0;
      
     }
return 0;
}
// int main()
// {
//     int x;
//     for (int i=1;i<=10;i++){
//     cin >> x;
//   }
// cout << "por favor, entre com um numero:"<< endl;
// cout << maiorDivisor(x) << " e o maior divisor de: " << x << endl;
// cout << primo(x)<< endl;
// return 0;
// }
// #include <iostream>

// using namespace std;

// int primo(int x){

// int i,j,soma=0,total=0,maiorD=0,resto,prim;

// for (i=1; i <=10; i++){
//     cout << "por favor,digite um numero:" << endl;
//     cin >> x;
// for (j=1;j<=x;j++){
//   resto = x % j;
//     if (resto==0 && j>maiorD && j!=x){
//           maiorD = j;
//     }
//   }
// }         
// for (i=1; i <=x; i++){ 
//        if (x!=1 && x!=0 && maiorD==1){
//           soma+=x;
//           total=soma;
//             cout << "primo" << endl;
//   }
// }
// cout << "a soma dos primos: " << total << endl;
// return 0;
// }
// int main ()
// {
//   int x;
// cout << primo(x) << endl;
// return 0;
// }
#include <stdio.h>

int isPrimo(int numero){
	int i;						//Variável de controle do Loop
	if(numero > 1){				//Caso a var número for 0 ou 1 retornamos 0(falso)
		for(i=2;i<numero;i++)	//Loop de iteração
		{
			if(numero%i == 0)	//Caso o resto da divisão de numero/i=0 o número não é primo
					return 0;
		}
					return 1;	//Caso contrário o número é primo e retornamos 1(verdadeiro)
	}else
	return 0;
}

int main(){
	int numeros[10];
	int i;
	int soma=0;

	for (i=0;i<10;i++){
	printf("\n\n Digite um numero: ");
	scanf("%d",&numeros[i]);
		if(isPrimo(numeros[i]))
			soma+= numeros[i];	
	}
		printf("Soma: %d\n",soma);
}