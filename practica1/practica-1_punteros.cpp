#include <iostream>
#include <string>
using namespace std;
int main{
    //punteros
    int tam = 15;
    char A[15] = {' ', ' ','c', '+', '+', ' ',' ', 'j','a','v','a',' ',' ',' ', ' '};
    int espacios = 0;
    char *p = A+tam-1;

    while(*p == ' '){
        espacios++;
        *(p--);
    }
    cout << espacios << endl;


    for(char* p = A+tam-espacios;p >= A; p--){
        *(p+espacios) = *p;
        *p = ' ';
        cout << *p << ',';
    }
    cout << endl;

    for(char* p=A; p < A+tam; p++){
        cout << *p << ';';
    }
    cout << endl;
}
// Created by María Gracia Calderón Zevallos on 16/03/26.
//