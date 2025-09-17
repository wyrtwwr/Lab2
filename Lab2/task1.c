//task1
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    printf("123\n");

    printf("1\n2\n3\n");

    printf("1\n\t2\n\t\t3");

    printf("\n\%10.5f\n ", 12.234657);

    printf("\nОстаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5);

    printf("%g разделить %e равно %f\n ", 5., 2000000., 5. / 2000000);

    printf("%d разделить %d равно %d\n", 5., 2000000., 5. / 2000000);

    printf("%f разделить %f равно %f\n", 5., 2000000., 5. / 2000000);

    printf("%g разделить %g равно %g\n", 5., 2000000., 5. / 2000000);

    printf("%e разделить %e равно %e\n", 5., 2000000., 5. / 2000000);

}