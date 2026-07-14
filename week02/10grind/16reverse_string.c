#include <stdio.h>

void rev_text(char *s){

int count=0;
for (int i=0;s[i]!='\0';i++){
	count++;
	}
for (int i=0;i<count/2;i++){
	char tmp = s[i];
	s[i] = s[count-1-i];
	s[count-1-i]=tmp;
	}
}

void print_reverse(char *label){
	printf("Original: %s\n",label);
	rev_text(label);
	printf("Reversed: %s\n",label);
}


int main (void)
{
char text1[]="racecar";
char text2[]="palindrome";
char text3[]="";
char text4[]="awesomeness";
char text5[]="12345";

print_reverse(text1);
print_reverse(text2);
print_reverse(text3);
print_reverse(text4);
print_reverse(text5);

return 0;

}
