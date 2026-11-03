#include <stdio.h>

void mystrcpy(char str1[],char str2[]){

	int i = 0;

	while(str1[i] != '\0'){

		str2[i] = str1[i];
		i++;

	}

}

void main(){

	char str1[20],str2[20];

	printf("Enter string : ");
	scanf("%s",str1);

	mystrcpy(str1,str2);

	printf("output : %s\n",str2);

}
