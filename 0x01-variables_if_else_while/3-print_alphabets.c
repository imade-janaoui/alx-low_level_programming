#include <stdoi.h>

int main(void){
	char letter ='a';
	char _letter = 'A';

	while(letter <= 'z')
	{
		putchar(letter);
	}
	while(_letter <= 'Z')
	{
		putchar(_letter);
	}
	putchar('\n');

	return 0;
}
