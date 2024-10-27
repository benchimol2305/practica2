#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct datospersona
{
int id_register;
char nombre [50];
char cedula[15];
int edad;
float peso;
float altura;
char genero [2];      
};
 int main(){
  ifstream archivo_binario("persona.dat", ios:: in | ios:: binary);
  if(!archivo_binario.is_open()){
    cout<< "no se puede abrir el archivo\n";
    return 1;
  }
  archivo_binario.seekg(0, ios::end);
  int fileSize= archivo_binario.tellg();
  archivo_binario.seekg(0, ios :: beg);
  int numPersonas= fileSize/sizeof(datospersona);

  datospersona*personas= new datospersona[numPersonas];
  archivo_binario.read(reinterpret_cast<char*>(personas),fileSize);
  archivo_binario.close();
  
  for (int i = 0; i < numPersonas; i++)
  {
    cout << "Persona " << i + 1 << ":\n";
        cout << "id del registro: " << personas[i].id_register << "\n";
        cout << "Nombre: " << personas[i].nombre << "\n";
        cout << "Cedula: " << personas[i].cedula << "\n";
        cout << "Edad: " << personas[i].edad << "\n";
        cout << "Peso: " << personas[i].peso << "\n";
        cout << "Altura: " << personas[i].altura << "\n";
        cout << "Genero: " << personas[i].genero << "\n";
        cin.ignore(100,'\n');

   delete[] personas;
   return 0; 
  }
  
 }
