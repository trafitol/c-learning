#include <stdio.h>

int my_strlen(const char*s)

{
int count =0;
for (int i=0;s[i]!='\0';i++){
	count++;
}
return count;
}

int main (void)
{
    char text1[]="hello world"; 
    char text2[]="a";
    char text3[]="";

    printf("Length of '%s': %d\n", text1, my_strlen(text1));
    printf("Length of '%s': %d\n", text2, my_strlen(text2));
    printf("Length of '%s': %d\n", text3, my_strlen(text3));

return 0;
}
