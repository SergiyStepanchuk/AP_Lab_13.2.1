#include <stdio.h>
#include <conio.h>
#include <math.h>

#include "main.h"

void main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	
	char ch;
	do
	{
		int x, y, num;
		// то шукаємо максимум з трьох чисел
		puts("define maximum of two numbers");
		puts("Input 2 integer numbers");
		scanf("%d", &x);// введення числа
		PRINTI(x); // макрос виведення числа
		scanf("%d", &y);
		PRINTI(y);
#if Z > 3
		num = MIN(STEPEN(x + y, 2), STEPEN(x - Z, 2));
#else // Z <= 3
		num = MAX(x * y + y * Z, STEPEN(Z * x + y * Z, 2));
#endif
		PRINTI(num);
		puts("Repeat? y /n "); ch = getch();
	} while (ch == 'y');
}