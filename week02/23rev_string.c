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
void test_reverse(char *label)
{
	printf("Original: %s\n", label);
	reverse_string(label);
	printf("Reversed: %s\n", label);
	printf("\n");
}



int main (void)
{
char text1[]="hello world";
char text2[]="racecar";
char text3[]="a";
char text4[]="";
char text5[]="test";

test_reverse(text1);
test_reverse(text2);
test_reverse(text3);
test_reverse(text4);
test_reverse(text5);

return 0;
}
