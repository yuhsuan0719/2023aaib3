//week05-4.c
#include <stdio.h> // step01: scanf()
#include <ctype.h> //step02: cout
#include <string.h> // step03: tolower() find()
int main()
{
	//step06: keyboard keys string
	char s[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	
	char c;//Step01: Input
	while( scanf("%c", &c) == 1)//step01: Input
	{
		c = tolower(c); //step03: tolower(c)
		
		if(c==' '|| c=='\n') printf("%c",c);
		else
		{
			c = *(strchr(s,c)-2);// step04: find()
			printf("%c",c);
		}
	}
}