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

    printf("���� ��������: %dp\n", A);
    printf("���� ��������: %dp\n", B);
    printf("���� �������: %dp\n", C);
    printf("���� �������� �����: %dp\n", D);

    printf("�����: %dp\n", D - (A + B + C));


}
