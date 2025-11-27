//Q125 Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>
int main() {
    char filename[100];
    char text[200];
    FILE *fp;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error: File '%s' could not be opened.\n", filename);
        return 1;
    }

    getchar();

    printf("Enter a new line of text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    printf("Text successfully appended to '%s'.\n", filename);

    fclose(fp);

    return 0;
}
