#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct datospersona
{
char id_register[50];
char nombre [50];
char cedula[15];
int edad;
float peso;
float altura;
char genero [2];      
};
 int main(){
int numero_personas;
cout << "ingrese el numero de personas: ";
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
       cin.getline(personas[i].genero,2);
       cin.ignore(100,'\n');
	
       }

    fstream archivo_binario("personas.dat", ios::out | ios::binary);

     if (archivo_binario.is_open())
     {
       archivo_binario.write(reinterpret_cast<char*>(personas), numero_personas*sizeof(datospersona));
       archivo_binario.close();
       cout<< "datos guardados en el archivo 'personas.dat' \n";
     } else{
       cout<< "no se pudo abrir el archivo";

  delete[] personas;    
 return 0;

     }
 }

       
       
    

