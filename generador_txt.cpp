#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

char nombre [50];
char correo [50];
int cedula, n;
cout<< "ingrese la cantidad de registros";
cin>>n;
cin.ignore();

ofstream archivo("archivo.txt");
if (archivo.is_open())
{
    for ( int i = 0; i < n; i++)
    {
        cout<< "ingrese el nombre de la persona"<< i+1<<": ";
        cin.getline(nombre,50);
        cout<< "ingrese la cedula de la persona"<< i+1<<": ";
        cin>> cedula;
        cout<< "ingrese el correo de la persona"<< i+1<<": ";
        cin>> correo;
        archivo<<nombre<<" "<<cedula<<" "<<correo<<" "<<endl;
    }
    
    archivo.close();
}
else{
    cout<< "no se pudo abrir el archivo";
    return 1;
}
ifstream leerArchivo("archivo.txt");
if (leerArchivo.is_open())
{
    while(leerArchivo>>nombre>>cedula>>correo) {
            cout<<"mi nombre es: "<<nombre <<", mi cedula es: "<<cedula<<", mi correo es: "<<correo<<endl;
}
leerArchivo.close();
}else{
    cout<< "no se pudo abrir el archivo de lectura"<<endl;
}
return 0;
}