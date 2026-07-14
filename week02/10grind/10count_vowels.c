#include <stdio.h>

int main (void)
{
char text[]= "programming exercise";
int vowels=0;

for (int i=0;text[i]!='\0';i++){
if (text[i]=='a'){
vowels++;
}
else if(text[i]=='e'){
vowels++;
}
else if(text[i]=='i'){
vowels++;
}
else if(text[i]=='o'){
vowels++;
}
else if(text[i]=='u'){
vowels++;
}
}
printf("vowels: %d\n",vowels);
return 0;
}

 



