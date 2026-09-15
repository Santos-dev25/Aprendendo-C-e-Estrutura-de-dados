#include <iostream>

// Em C (com ponteiros):
void dobrar_C(int *num) {
    *num = *num * 2;
}

// Em C++ (com referências - mais limpo e seguro):
void dobrar_CPP(int &num) {
    num = num * 2; // Altera o original direto, sem usar asterisco!
}