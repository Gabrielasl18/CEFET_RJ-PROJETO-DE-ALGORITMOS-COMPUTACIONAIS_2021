#include <iostream>

using namespace std;

int maiorDivisor(int x){

int i,resto,maiorD = 1;

for (i=1;i<=x;i++){
    resto = x % i;
    if (resto == 0){
         if (i>maiorD && i!=x)
            {
          maiorD = i;
        }
    }
}
return maiorD;
}
int primo(int x){
        if (x != 1 && x != 0 && maiorDivisor(x) == 1){
            return 1;
        }
return 0;
}
int main(){

int x,i,soma=0;
   
for(i=1;i<=10;i++){
   cout<< "insira um numero inteiro:" << endl;
   cin >> x;
    if(primo(x)){
       soma +=x;
    }
}
    cout << "a soma de todos os primos:" << soma << endl;
return 0;
}























































// #include <iostream>

// using namespace std;

// int maiorDivisor(int x){

// int j,i,resto,maiorD;

// for (i=1;i<=x;i++){
//   resto = x % i;
//     if (resto==0 && i>maiorD && i!=x){
//           maiorD = i;
//     }
// }
// return maiorD;
// }
// int primo(int x){

// int i,soma,total;

// for (i=1; i <=10; i++){
//     cout << "por favor,digite um numero:" << endl;
//     cin >> x;
// }
//         if (x !=1 && x !=0 && maiorDivisor(x)==1){
//            soma +=x;
//            total=soma;
// }
// cout << "a soma dos primos: " << total << endl;
// return 0;
// }
// int main ()
// {
// int x;
// cout << primo(x) << endl;
// return 0;
// }
