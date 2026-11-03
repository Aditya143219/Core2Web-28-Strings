#include <stdio.h>
#include <string.h>

char* toggle(char str1[]){

        int i = 0;
        char x[20];

        while(str1[i] != '\0'){

                str1[i] = str1[i] - 32;
                i++;

        }

        return str1;

}

void main(){

        char str1[20],str2[20];

        printf("Enter string : ");
        scanf("%s",str1);

        strcpy(str2,toggle(str1));

        printf("output : %s\n",str2);

}
