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

    printf("\n������� �� ������� %d �� %d ����� %d\n ", 7, 5, 7 % 5);

    printf("%g ��������� %e ����� %f\n ", 5., 2000000., 5. / 2000000);

    printf("%d ��������� %d ����� %d\n", 5., 2000000., 5. / 2000000);

    printf("%f ��������� %f ����� %f\n", 5., 2000000., 5. / 2000000);

    printf("%g ��������� %g ����� %g\n", 5., 2000000., 5. / 2000000);

    printf("%e ��������� %e ����� %e\n", 5., 2000000., 5. / 2000000);

}