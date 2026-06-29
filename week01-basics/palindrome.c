#include <stdio.h>
#include <string.h>

char text[]="helllooo";

int main (void)
{
int len = strlen(text);
int is_pal =1;
int left=0;
int right=len-1;

while(left<right){
if (text[left] != text[right]){
is_pal=0;
break;
}
left++;
right--;
}

if(is_pal==1){
printf("Palindrome: yes\n");
}
else{
printf("Palindrome: no\n");
}
return 0;
}

