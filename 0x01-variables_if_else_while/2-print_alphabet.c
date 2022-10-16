#include <stdio.h>

int main(void)
{
char ch = 'a';

	while (ch <= 'z'){
		putchar("%c",ch);
		ch++;
	}
	putchar("\n");
	return (0);

}
