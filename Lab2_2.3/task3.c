#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "RUS");

    printf("Дано:\n");
    printf("\t%10d\n", 2);
    printf("\t%10d\n", 1323);
    printf("Ответ: ____________\n");
    printf("\t%+10.7f\n", 2.0 / 1323); 

}
