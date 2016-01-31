#include <stdio.h>
#include <stdlib.h>
#include <string.h>

# include "str.h"

//char reverse_string (char *str,int length);

int main()
{
//    printf("Hello world!\n");
char stringg[] ="This is a string";
char string2[]="some NUMbers12345";
char string3[]="Does it reverse \n\0\t correctly?";
int len =strlen(stringg);

//printf("\r\n length of string is %d",len);


printf("\r\n input string is %s",stringg);

char ret= reverse_string (stringg,len);


if(ret==0)
    printf("\r\n SUCCESS");
else
    printf("\r\n fail");

    printf("\r\n after reversal string is %s",stringg);


printf("\r\n input string is %s",string2);
len =strlen(string2);
ret= reverse_string (string2,len);


if(ret==0)
    printf("\r\n SUCCESS");
else
    printf("\r\n fail");

    printf("\r\n after reversal string is %s",string2);


printf("\r\n input string is %s",string3);
len =strlen(string3);
ret= reverse_string (string3,len);



if(ret==0)
    printf("\r\n SUCCESS");
else
    printf("\r\n fail");

    printf("\r\n after reversal string is %s",string3);




    return 0;
}

/*
char reverse_string (char *str,int length)


{
int i ;
 char temp;

if(length < 0)
    return 1;

for (i=0;i<length/2;i++)
{
     temp=*(str+i);

     *(str+i)=*(str+length-1-i);
     *(str+length-1-i)=temp;


}
    return 0;
}
*/
