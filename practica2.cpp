#include<iostream>
#include<string>
using namespace std;
struct datospersona
{
int id_register;
char nombre [100];
int cedula;
int edad;
float peso;
float altura;
string genero;      
};
 int main(){
const int numero_personasmax= 100;
datospersona personas[numero_personasmax];
    int numPersonas = 0;
    char continuar; 
    do 
    {
     if (numPersonas >= numero_personasmax) {
            cout << "Se ha alcanzado el máximo número de personas permitidas." << endl;
            break;
     cout<<"ingrese el id del registro";
     cin>>personas[numPersonas].id_register;   
     cout<<"ingrese el nombre de la persona";
     cin>>personas[numPersonas].nombre;
     cout<<"ingrese la cedula de la persona";
     cin>>personas[numPersonas].cedula;
     cout<<"ingrese la edad de la persona";
     cin>>personas[numPersonas].edad;
     cout<<"ingrese el peso de la persona";
     cin>>personas[numPersonas].peso;
     cout<<"ingrese la altura de la persona";
     cin>>personas[numPersonas].altura;
     cout<<"ingrese el genero de la persona, 'M' o 'F'";
     cin>>personas[numPersonas].genero;
    } while (continuar== 's'|| continuar=='S');
    







 }
