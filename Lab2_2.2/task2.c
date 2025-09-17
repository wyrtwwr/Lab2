#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int N = 23;  //часы
    int K = 30;  //минуты


    printf("часы = %d минуты = %d\n", N, K);

    printf("Сейчас %d часов %d минут\n", N, K);

    // Исправлено: до полуночи осталось (23 - N) часов и (60 - K) минут
    printf("До полуночи осталось %d часов и %d минут\n", 23 - N, 60 - K);

    printf("С 8:00 прошло %d секунд\n", ((N - 8 + 24) % 24) * 3600 + K * 60);

    printf("Текущий час = %f суток и текущая минута = %f часа\n", N / 24.0, K / 60.0);

    
}