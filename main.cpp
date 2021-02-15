#include <iostream>
using namespace std;
#include<string.h>
#include <fstream>
void ingresoValores();
void burbuja();
int busqueda(int arreg[], int t, int dato);
int solicitarNumero();

/////////////////////////////////////////
int main() {
 
  int op;
   do
  {
  cout<<endl<<"\t\tTRABAJO EN GRUPO"<<endl;
  cout<<"ALGORITMOS Y ESTRUCTURA DE DATOS"<<endl<<endl;
  cout<<"SELECCIONE UNA OPCION DEL MENU"<<endl;
  cout<<"1. Intercambiar posiciones de un vector"<<endl;
  cout<<"2. Ordenamiento de un vector"<<endl;
  cout<<"3. Cuenta de Ahorros virtual del Banco de Pichincha"<<endl;
  cout<<"4. Salir"<<endl;
  cout<<"Escoje una opcion: ";
  cin>>op;
  switch(op)
  {
    case 1:
    {
      ingresoValores();
       cout<<endl;
      break;
    }
    case 2:
    {
      burbuja();
      cout<<endl;
      break;
    }
    case 3:
    {
      ofstream c;
c.open("cuenta.txt",ios::out);
c<<"cuenta\n";
      cout<<"Registro de dinero ingresado en cada mes [1] [12]\n";
   cout<<"mes 1: 20\n";
     cout<<"mes 2: 30\n";
       cout<<"mes 3: 35\n";
         cout<<"mes 4: 40\n";
           cout<<"mes 5: 45\n";
             cout<<"mes 6: 50\n";
               cout<<"mes 7: 55\n";
                 cout<<"mes 8: 60\n";
                   cout<<"mes 9: 65\n";
                     cout<<"mes 10: 70\n";
                       cout<<"mes 11: 75\n";
                         cout<<"mes 12: 80\n";


  int a[12]={20,30,35,40,45,50,55,60,65,70,75,80};
  //cout<<"**"<<busqueda(a,5,4)<<endl;
  
  int dato=solicitarNumero();
  
  if(busqueda(a,5,dato)==3)
  {
    cout<<"Dinero no encontrado";
  }
  else 
  {
    cout<<"Dinero encontrado en el mes: "<<busqueda(a,12,dato);
    c<<busqueda(a,12,dato)<<endl;
  }
    c.close();
      break;
    }
    case 4:
    {
      cout<<"Adios"<<endl;
      break;
    }
  }
  }while (op!=4);

  return 0;
}
//////////////////////////////////////////////
void ingresoValores()
{
ofstream archivo;
archivo.open("intercambiar.txt",ios::out);
archivo<<"INTERCAMBIAR\n";
int arr[6];
int i;
for(i=0 ; i<6; i++)
{  
  cout<<"Introduzca el elemento "<<i+1<<":";
 cin>>arr[i];
    }
  cout<<"El nuevo Arreglo es: { ";
  for(i=5;i>=0;i--)
  {
 archivo<<arr[i]<<endl;
  cout<<" "<<arr[i];
  }
    cout<<"}";
 archivo.close();
}
////////////////////()

void burbuja(){
ofstream b;
b.open("ordenamiento.txt",ios::out);
b<<"Ordenar\n";
int n,aux;
cout<<"Ingrese la cantidad de numeros:";
cin>>n;
int V[n];
for(int i=0;i<n;i++){
 cout<<"Numero "<<i+1<<" = ";
 cin>>V[i];
}
for(int i=0;i<n;i++){
 for(int j=i+1;j<n;j++){
 if(V[j]<V[i]){
 aux=V[i];
 V[i]=V[j];
 V[j]=aux;

 }
 }
}
cout<<"Los numeros ordenados son:"<<endl;
for(int i=0;i<n;i++){
b<<V[i]<<" ";
 cout<<V[i]<<" ";

}
 b.close();





}

int busqueda(int arreg[], int t, int dato)
{
  int i;

  for( i=0 ; i<12 ; i++)
  {
      
    if(arreg[i]==dato)
    {
      return i+1;
    }
  }
  
  return 3;
}

int solicitarNumero()
{
  int n;
  cout<<"Ingresa el dinero que desea buscar en los meses:";
  cin>>n;
  return n;
}