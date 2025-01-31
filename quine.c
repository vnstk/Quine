// Vainstein K 07jan2024

#include <stdio.h>

int main () {

const char *a[] = {
"Z"
"5{"												// int main () {
"1*a[]="											// const char *a[] =
"{q0q,q1q,q2q,q3q,q4q,q5q,q6q,q7q,q8q,q9q,};"		// <Initialize the array.>
"4(a[!2]);"											// puts(a[2]);
"1*p=*a;"											// const char *p = *a;
"6(*++p){1x=*p;"									// while (*++p) {const char x = *p;
"7(x=='!!')3(*++p);"									// if (x == '!') putchar(*++p);
"87(x>='!0'&&x<='!9')f4(a[x-'!0'],9);"					// else if (x >= '0' && x <= '9') fputs(a[x - '0'], stdout);
"87(x=='!q')3('q');"									// else if (x == 'q') putchar('"');
"83(x);"												// else putchar(x);
"}}",												// }}
	"const char ",			// 1
	"#include <stdio.h>",	// 2
	"putchar",				// 3
	"puts",					// 4
	"int main()",			// 5
	"while",				// 6
	"if",					// 7
	"else ",				// 8
	"stdout",				// 9
};

	puts(a[2]);

	const char *p = *a;
	while (*++p) {
		const char x = *p;
		if (x == '!')
			putchar(*++p);
		else
		if (x >= '0' && x <= '9')
			fputs(a[x - '0'], stdout);
		else
		if (x == 'q')
			putchar('"');
		else
			putchar(x);
	}
}
