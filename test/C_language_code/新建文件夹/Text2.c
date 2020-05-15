#include <stdio.h>
#include   <string.h> 
#include   <conio.h> 
#include   <dos.h> 
main()
{
unsigned long a=2147483648;
printf("sizeof(char)%d\n",sizeof(char));
printf("sizeof(int)%d\n",sizeof(int));
printf("sizeof(unsigned int)%d\n",sizeof(unsigned int));
printf("sizeof(unsigned short)%d\n",sizeof(unsigned short));
printf("sizeof(unsigned long)%d\n",sizeof(unsigned long));
printf("%d",a);
}
