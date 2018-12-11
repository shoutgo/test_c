/* main.c */ 

#include <stdio.h>
#include <unistd.h>

#include "mytool1.h" 
#include "mytool2.h" 

int main(int argc, char **argv) { 
	mytool1_print(33,66,7); 
	mytool2_print("world");
	sleep(1);
	printf("\033[1;33;44m%s\033[0m\n","hello world");
	int i;
	for (i=0;i<10;i++)
		printf("%d",i);
        printf("\n");
	return 0; 
} 
