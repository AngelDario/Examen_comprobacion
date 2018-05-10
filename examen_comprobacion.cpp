#include <iostream>
#include <math.h>

using namespace std;

int entero(char l[]){
  int aux=0;
  for(int i=0; l[i]!='\0'; i++){
    if(l[i]=='.'){
      continue;
    }
    aux=aux*10+(l[i]-'0');
  }
  return aux;
}

int potencia(char l[]){
  int potencia;
  int potencia2=0;
  for(int i=0; l[i]!='\0'; i++){
    if(l[i]=='.'){
      potencia=i;
    }
  }
  for(int i=potencia+1; l[i]!='\0'; i++){
    potencia2++;
  }
  return potencia2;
}

float convertir(char l[]){
  for (int i=0; l[i]!='\0'; i++){
    if(l[i]=='.'){
      return entero(l)/pow(10, potencia(l));
    }
  }
  return entero(l);
}

int main(){
  char lista[]="1.21334";
  cout<<convertir(lista);
  return 0;
}
