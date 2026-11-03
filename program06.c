#include <stdio.h>

int mystrchr(char str[],char ch){

        int i = 0,count = 0;

        while(str[i] != '\0'){

                if(str[i] == ch){

			count++;

		}

		i++;

        }

        return count;

}

void main(){

        char str[20];
	char ch;

        printf("Enter string : ");
        scanf("%s",str);

	getchar();

	printf("Enter character : ");
	scanf("%c",&ch);

        printf("output : %d\n",mystrchr(str,ch));

}
