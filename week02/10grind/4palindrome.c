#include <stdio.h>
#include <string.h>

char text[] = "blabla";

int main (void)
{
int len=strlen(text);
int is_pal=1;

for (int i=0;i<len/2;i++){
	if (text[i]!=text[len-1-i]){
	is_pal = 0;
	break;
}
}

if (is_pal==1){
printf("Palindrome: yes\n");
}
else {
printf("Palindrome: no\n");
}

return 0;
}
