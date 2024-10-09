//week05-4.cpp
#include <stdio.h> // step01: scanf()
#include <iostream> //step02: cout
#include <string> // step03: tolower() find()
using namespace std;
int main()
{
	//step06: keyboard keys string
	string s="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	
	char c;//Step01: Input
	while( scanf("%c", &c) == 1)//step01: Input
	{
		c = tolower(c); //step03: tolower(c)
		
		if(c==' '|| c=='\n') cout << c;
		else
		{
			int i = s.find(c); // step04: find()
			cout << s[i-2]; // step05: Output s[i-2]
		}
		//printf("%c",c);//Step02: Output
	}
}