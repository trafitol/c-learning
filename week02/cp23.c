#include <stdio.h>
void reverse_string(char *s)
{
    int count =0;
    for(int i=0; s[i]!='\0';i++){
    count++;
    }
    for(int i=0;i<count/2;i++){
    char tmp    = s[i];
    s[i]         = s[count-1-i];
    s[count-1-i]    = tmp;
    }
}
int main (void)
{
char text1[]="hello world";
char text2[]="racecar";
char text3[]="a";
char text4[]="";
char text5[]="test";
printf("Original: %s\n", text1);
reverse_string(text1);
printf("Reversed: %s\n", text1);
printf("Original: %s\n", text2);
reverse_string(text2);
printf("Reversed: %s\n", text2);
printf("Original: %s\n", text3);
reverse_string(text3);
printf("Reversed: %s\n", text3);
printf("Original: %s\n", text4);
reverse_string(text4);
printf("Reversed: %s\n", text4);
printf("Original: %s\n", text5);
reverse_string(text5);
printf("Reversed: %s\n", text5);
return 0;
}
