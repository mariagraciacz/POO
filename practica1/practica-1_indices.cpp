#include <iostream>
#include <string>
using namespace std;

//practica 1
//ejercicio 1
/*Cree un array en stack de tamaño “n” lleno de caracteres con espacios entre palabras.
//Luego alinee los caracteres al lado derecho en el array.
//El programa debe imprimir el array original y el array alineado.
//Realice la implementación utilizando sólo punteros. No use índices. */
int main()
{
  //indices
  int tam = 11;
  char A[11] = {'c', '+', '+', ' ', 'j','a','v','a',' ',' ',' '};

  int i = tam-1;
  int espacios = 0;
  while( A[i] == ' '){
      espacios++;
      i--;
  }
  cout << espacios << endl;
  for(int i = tam-1-espacios; i>=0; i--){
      A[i+espacios] = A[i];
      A[i] = ' ';
      cout << A[i] << ",";
  }
  cout << endl;

  for(int i = 0; i<tam; i++){
    cout << A[i] << ",";
  }
  cout << endl;


}//
// Created by María Gracia Calderón Zevallos on 16/03/26.
//