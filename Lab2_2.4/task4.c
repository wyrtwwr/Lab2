//task4
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main() {

    setlocale(LC_ALL, "RUS");

    int A = 300;
    int B = 1000;
    int C = 500;
    int D = 1300;

    printf("цена перчаток: %dp\n", A);
    printf("цена портфель: %dp\n", B);
    printf("цена галстук: %dp\n", C);
    printf("цена исходная сумма: %dp\n", D);

    printf("Сдача: %dp\n", D - (A + B + C));


}
