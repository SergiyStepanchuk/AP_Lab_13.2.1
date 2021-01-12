#pragma once

#define Z 4
#define MODULE(x) x<0?x*(-1):x 
#define LOGIC(z) z > 3
#define STEPEN(x, y) pow(x, y)
#define SQRT(x) sqrt(x)
#define MAX(y,z) ((y)>(z))?(y):(z) // макрос як умовний вираз
#define MIN(y,z) ((y)<(z))?(y):(z)
#define PRINTI(w) puts("control output"); \
	printf(#w"=%d\n",w)
 // використовується символ продовження макроса '\'
// символ '#' використовується для об’єднання рядків
 // виведення повідомлення та значення дійсного числа
#define PRINTR(w) puts ("rezult :"); \
 printf (#w"=%f\n",(float)w)
