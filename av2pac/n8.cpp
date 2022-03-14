/*
dizer se a matriz 10x10 e simetrica ou nao simetrica.
*/
#include <iostream>

using namespace std;

int Simetria(){
int j=0,i=0,k=0;
int matriz[10][10]={{0,1,2,2,3,4,1,2,8},{6,0,4,5,5,4,6,2,1,0},{2,4,0,6,5,4,2,1,9,7},{3,5,6,0,6,8,7,5,2},{5,8,8,9,7,8,9,5,1,4},{3,4,6,7,2,8,1,6,4,9},{1,5,2,4,8,7,6,2,0,1},{1,7,8,9,5,4,5,5,0,0},{0,0,1,1,2,2,8,4,7,5},{5,5,4,6,5,2,7,8,9,1}};
int a[4][4]={0},b[4][4];

for(i=0;i<10;i++){
cout << endl; 
    for(j=0;j<10;j++){
    matriz[i][j];
    a[i][j]=matriz[i][j];
    cout << a[i][j] << ' '; 
   }
}
for(j=0;j<10;j++){
    if(a[0][j]!=a[j][0]){
    k++;
    }
}
if(k>0){
cout << "\nantissimetrica! ";
}
else{
cout << "\nsimetrica! ";
}
return 0;
}
int main(){

Simetria();

return 0;
}