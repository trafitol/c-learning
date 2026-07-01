#include <stdio.h>

int my_strlen(const char *s)
{
	int count = 0;
	for (int i=0;s[i] != '\0';i++){  //because the string always ends with 0 right?
		count++;
	}
return count;
}


int main (void)

{
	char text[] = "hello world";
	int len= my_strlen(text);
	printf("Length: %d\n",len);
	return 0;
}

