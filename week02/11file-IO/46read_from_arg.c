#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        fprintf(stderr, "Could not open %s\n", argv[1]);
        return 1;
    }

    int word_count = 0;
    char buffer[100];

    while (fscanf(fp, "%99s", buffer) == 1) {
        word_count++;
    }

    fclose(fp);
    printf("Words in %s: %d\n", argv[1], word_count);
    return 0;
}
