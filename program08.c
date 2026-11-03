#include <stdio.h>

int check(char str1[]){

	int flag = 0,i = 0;

	while(str1[i] != '\0'){

		if(str1[i] >= '0' && str1[i] <= '9'){

			flag = 0;

		}else{
			
			flag = 1;
			break;

		}

		i++;

	}

	if(flag == 0){

		return 1;

	}else{

		return 0;

	}

}

void main(){

	char str1[20];

	printf("Enter string : ");
	scanf("%s",str1);

	if(check(str1)){

		printf("The given string contains only digit\n");

	}else{

		printf("The given string doesn't contain only digits\n");

	}

}
