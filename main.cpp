#include <iostream>
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main()
{ string nombre[120];
 string dato;
 int i=0;
 cin>>dato;
 system("cls");
 ofstream alazar ("Texto.txt", ios::app);
  alazar <<dato<<" ";
  alazar.close();
  ifstream ingresar("Texto.txt");
  while(!ingresar.eof()){
        ingresar>>nombre[i];
        if(!ingresar.eof()){
    i=i+1;
    }}
    for(int z=0;z<120;z=z+1){
        if(nombre[z]!=""){
            cout<<nombre[z]<<"\n";
        }
    }


}
