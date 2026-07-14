#include <stdio.h>



int my_strlen(const char *s){
int count = 0;
for (int i=0;s[i]!='\0';i++){
	count++;
}
return count;
}


int main (void)
{
char txt1[] = "palindrome";
char txt2[] = "firetruck"; 
char txt3[] = "apple";
{
int len=my_strlen(txt1);
printf("count palindrome = %d\n", len);
}
{
int len=my_strlen(txt2);
printf("count firetruck = %d\n", len);
}
{
int len=my_strlen(txt3);
printf("count apple = %d\n", len);
}
return 0;
}


