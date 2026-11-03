#include <stdio.h>

char* trim(char str[]){

	int x = 0,i = 0;

	while(str[i] != '\0'){

		if(str[i] != ' '){

			str[x] = str[i];
			x++;

		}

		i++;

	}

	return str;

}

void main(){

	char str[20];

	printf("Enter string : ");
	scanf("%s",str);

	printf("output : %s\n",trim(str));

}
