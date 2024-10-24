#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

struct datospersona
{
  char name[100];
  int ced;
  float weight;
};


int main(){
   
    datospersona x;
    fstream FILE("personas.dat",ios::in| ios::binary);

    FILE.seekg( sizeof(datospersona) * 2 , ios::beg );

    cout<<FILE.tellg()<<endl;
    
    FILE.read(reinterpret_cast<char *>(&x), sizeof(datospersona));

   cout<<x.name<<" "<<x.weight<<endl;
    
   
    FILE.close();
    return 0;
}