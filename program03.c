#include <stdio.h>

int mystrtoint(char str1[]){

	int temp = 0,i = 0,x = 10,j;

	while(str1[i] != '\0'){

		j = str1[i] - 48;
		temp = temp*x + j;
		i++;

	}

	return temp;

}

void main(){
	
	char str1[20];
	int str2;
	
	printf("Enter number string : ");
	scanf("%s",str1);

	str2 = mystrtoint(str1);

	printf("---------------------\n");

	printf("%d\n",str2);

}
