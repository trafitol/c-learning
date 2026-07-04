#include <stdio.h>

int main (void)
{

char text[] = "Hello, this is a programming exercise!";
int vowels=0;

for (int i = 0; text[i] != '\0'; i++) {
    // text[i] is the current character
    if (text[i] == 'u') {
        vowels++;
    }
else if (text[i] == 'o') {
        vowels++;
}
else if (text[i] == 'i') {
        vowels++;
}
else if (text[i] == 'a') {
        vowels++;
}
else if (text[i] == 'e') {
        vowels++;
}
}
printf ("vowel count: %d\n",vowels);
return 0;
}
