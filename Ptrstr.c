#include <stdio.h>

int length(char *ptr) 
{
    int len = 0;
    for(len=0;*ptr!='\0';ptr++)
      {
        len++;
      }
    return len;
}

int main() 
{
    char str[100];
    
    printf("Enter any string: ");
    gets(str);
    
    int len = length(str);
  
    printf("The length of the string is: %d\n", len);
    return 0;
}
