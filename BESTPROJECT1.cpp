﻿#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x = 0;
	printf("Добрый день! Пожалуйста, введите целое число: ");
	char proverka = '\n';
	while (scanf_s("%d%c", &x, &proverka, 1) != 2 || proverka != '\n')
	{
		printf("Вы выбрали неверный пункт меню!\n");
		while (getchar() != '\n');
	}
	printf("Куб данного числа равен %d", x*x*x);
	return 0;
}
