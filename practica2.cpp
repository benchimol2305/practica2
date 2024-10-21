#include<iostream>
#include<string>
using namespace std;
struct datospersona
{
int id_register;
char nombre [50];
char cedula[15];
int edad;
float peso;
float altura;
string genero;      
};
 int main(){
int numero_personas;
cout << "ingrese el numero de personas";
cin >> numero_personas;
datospersona personas[numero_personas];
    for (int i = 0; i < numero_personas; i++)
    {
       cout<< "persona"<< i+1<<".\n";
       cout<< "id del registro";
       cin>>personas[i].id_register;
       cout<< "nombre";
       cin.ignore();
       cin.getline(personas[i].nombre,50);
       cout<< "cedula";
       cin.getline(personas[i].cedula,15);
       cout<< "edad";
       cin>> personas[i].edad;
       cout<< "peso";
       cin>> personas[i].peso;
       cout<< "altura";
       cin>> personas[i].altura;
       cout<< "genero 'M o F' ";
       cin>> personas[i].genero;
       }
       
    
