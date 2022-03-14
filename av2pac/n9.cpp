/*
informa se a matriz 10x10 é triangular superior/triangular inferior ou nao é triangular. 
*/
#include <iostream>

using namespace std;

int matrizTriangular(){
int matriz[10][10]={{3,0,0,0,0,0,0,0,0},{8,7,0,0,0,0,0,0,0},{5,4,1,0,0,0,0,0,0},{8,5,6,2,0,0,0,0,0},{1,8,8,9,7,0,0,0,0,0},{5,4,6,7,2,8,0,0,0,0},{0,5,2,4,8,7,6,0,0,0},{0,7,8,9,5,4,5,5,0,0},{0,1,1,2,2,8,4,7,5},{0,5,4,6,5,2,7,8,9,1}};;
int i=4,j=1,k=0,k2=0,coluna=0,h=0,cs=0,ci=0,ls=0,li=0;

for(i=0;i<10;i++){
    cout << endl;
      for(j=0;j<10;j++){
        cout << matriz[i][j] << ' ';
      }
}
cout << endl;
for (li=0; li<10;++li){
    for (ci=0;ci<10;++ci){
        if (li>ci && matriz[li][ci]!=0){//compara os numeros da matriz principal com os numeros debaixo.
            k++; 
        }
    }    
}
for (ls=0; ls<10;++ls){
    for (cs=0;cs<10;++cs){
        if (ls<cs && matriz[ls][cs]!=0){//compara os numeros da matriz principal com os numeros de cima.
            k2++;
        }
    }
}

if(k==0){
    cout << "matriz triangular inferior! ";
}
if(k2==0){
    cout << "matriz triangular superior! ";
}
else{
    cout << "matriz nao triangular! ";
}
cout << endl;

return 0;
}
int main(){

matrizTriangular();

return 0;
}