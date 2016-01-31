#include  "str.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
