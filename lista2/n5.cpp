#include <iostream>

using namespace std;


int empresa(int quant_funcionarios){

float i,maiorsalarioDep=0,salariototalDep=0,salariototalEmp=0,salarioDep;

for(i=1;i<=quant_funcionarios;i++){
 cout << "digite aqui seu salario:\n";
        cin >> salarioDep;
}
   if(salarioDep>=maiorsalarioDep){
      maiorsalarioDep = salarioDep;   
salariototalDep=salarioDep++;
}
 cout << "o maior salario do departamento : " << maiorsalarioDep << "\n";   
      cout << "salario total do departamento : " << salariototalDep<< "\n";


//    salariototalDep+=salarioDep onde eu coloco?;
  // cout << "o salario total do departamento " << salariototalDep << "\n";  
  // cout << "o salario total da empresa: " << salariototalEmp << "\n";

return 0;
}

int main(){

int quant_departamento = 1;
int i=1,j=3,matricula,sexo,quant_funcionarios=1;
float salarioDep,maiorsalarioDep,salariototalDep=0,salariototalEmp=0;


  while(quant_departamento<=j){
  cout <<  "digite a quantidade de funcionarios no departamento " << quant_departamento << " da empresa\n";
                 
  cin >> quant_funcionarios;
      while(i<=quant_funcionarios){
        cout << "digite aqui sua matricula:\n";
        cin >> matricula;
        cout << "digite aqui seu sexo:\n" << "(1 - feminino 2 - masculino)\n";
        cin >> sexo;
        cout << empresa(quant_funcionarios);
      }
    quant_departamento++;
  }




return 0;
}
// #include <iostream>

// using namespace std;


// int empresa(int quant_departamento){

// int i,j,matricula,sexo,quant_funcionarios;
// float salarioDep,maiorsalarioDep,salariototalDep=0,salariototalEmp=0;

// for(i=1;i<=quant_departamento;i++){

//   cout <<  "digite a quantidade de funcionarios no departamento " << i << " da empresa\n";
//   cin >> quant_funcionarios;

//     for(j=1;j<=quant_funcionarios;j++){

//         cout << "digite aqui sua matricula:\n";
//         cin >> matricula;
//         cout << "digite aqui seu sexo:\n" << "(1 - feminino 2 - masculino)\n";
//         cin >> sexo;
//         cout << "digite aqui seu salario:\n";
//         cin >> salarioDep;
//                     salariototalEmp+=salarioDep;

//             if(salarioDep>=maiorsalarioDep){

//                  maiorsalarioDep = salarioDep;
//                  cout << "o maior salario do departamento " << i << " : " << maiorsalarioDep <<     "\n";     

//             }
//         }
//     }    

// //    salariototalDep+=salarioDep onde eu coloco?;

//   cout << "o salario total do departamento " << salariototalDep << "\n";  
//   cout << "o salario total da empresa: " << salariototalEmp << "\n";

// return 0;
// }

// int main(){

// int quant_departamento = 2;

// cout << empresa(quant_departamento)<< "\n";

// return 0;
// }