//programa con matriz
#include <iostream>

using namespace std;

int main (){
int matriz [100][100];
double matriz_promedio [100];
double alumnos;
double conceptos;
int suma;
double promedio;
int contador=0;

cout<<"BIENVENIDO";
cout<<"\nIngrese el numero de alumnos: ";
cin>>alumnos;
cout<<"\nIngrese el numero de notas: ";
cin>>conceptos;

//Almacenando calificaciones
for (int i=0; i<alumnos;i++){
    for (int j=0; j<conceptos;j++){
        cout<<"\nDigite la calificacion del alumno "<<i+1<<" en el concepto " << j+1<<": ";
        cin>>matriz[i][j];

    }
}

for (int i=0; i<alumnos;i++){
    for (int j=0; j<conceptos;j++){
        suma=suma+ matriz[i][j];
    }
    matriz_promedio[i] = (double)suma/conceptos;
    suma=0;
}

for (int x=0; x<alumnos;x++){
        cout<<"\nlos promedios del alumno"<<x+1<<" es" << ": "<<matriz_promedio[x];
        promedio += matriz_promedio[x];
        contador++;
    } 

cout<<"\nEl promedio total es:  "<<promedio/contador;
if (promedio>=6){  
           cout<<endl;  
           cout<<"APROBADO! tu calificacion es : "<<promedio;  
      }  
      else  
      {  
           cout<<endl;  
           cout<<"REPROBADO! tu calificacion es : "<<promedio;  
      }  
      return 0;
}