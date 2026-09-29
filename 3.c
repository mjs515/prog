#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main(void)
{ 
    char host[100];
    gethostname(host, 100);
    printf("Владислав\t{%d}\n"
	 "ИС-641	\t%s	\t{%d}\n",
	10,	
	host,
	8 + strlen(host));
   return 0;
} 
