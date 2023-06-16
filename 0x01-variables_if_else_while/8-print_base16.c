#include <stdio.h>



int main(void)
{
    int i;
    char alphabet;
    for (i=0;i<10;i++)
	    putchar((i%10)+'0');

    for (alphabet='a';alphabet <= 'f' ;alphabet++)
	    putchar(alphabet);
    putchar('\n');

    return 0;
}
