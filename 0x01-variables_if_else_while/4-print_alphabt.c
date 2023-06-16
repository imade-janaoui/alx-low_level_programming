#include <stdio.h>

int main(void)
{
	char alphabet ='a';

	while (alphabet <= 'z')
	{
		if(alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	}
	printf("\n");
	return 0;
}
