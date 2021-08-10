#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

char* input()
{
	char *str="";
	int len=0;
	char c=' ';
	int i=0;
	int r=0;
	str=(char*)calloc(1,sizeof(char));
	str[0]='1';
	while(1)
	{
		str=(char*)realloc(str,((i+2)*sizeof(char)));
		c=getchar();
		str[i]=c;
		i++;
		if(str[i-1]=='\n')
		{
			str[i-1]='\0';

			break;
		}
	}
	
	return str;
}


int main()
{
	char *eng;int i;
	int len=0;int l=0;
	eng=input();

	len=sizeof(eng)/sizeof(char);
	printf("%s\n",eng);
	printf("%d\n",len);
}
