#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int N = 23;  //����
    int K = 30;  //������


    printf("���� = %d ������ = %d\n", N, K);

    printf("������ %d ����� %d �����\n", N, K);

    // ����������: �� �������� �������� (23 - N) ����� � (60 - K) �����
    printf("�� �������� �������� %d ����� � %d �����\n", 23 - N, 60 - K);

    printf("� 8:00 ������ %d ������\n", ((N - 8 + 24) % 24) * 3600 + K * 60);

    printf("������� ��� = %f ����� � ������� ������ = %f ����\n", N / 24.0, K / 60.0);

    
}