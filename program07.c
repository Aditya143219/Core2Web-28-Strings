#include <stdio.h>

char* replace(char str1[],char ch1,char ch2){

	int i = 0;

	while(str1[i] != '\0'){

		if(str1[i] == ch1){

			str1[i] = ch2;

		}

		i++;

	}

	return str1;

}

void main(){

	char str1[20];
	char ch1,ch2;

	printf("Entyer string : ");
	scanf("%s",str1);

	getchar();

	printf("Character to replace : ");
	scanf("%c",&ch1);

	getchar();

	printf("Character to replace : ");
	scanf("%c",&ch2);

	printf("output : %s\n",replace(str1,ch1,ch2));

}
