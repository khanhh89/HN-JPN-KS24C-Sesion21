#include<stdio.h>
#include<string.h>
int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

    sourceFile = fopen("bt01.txt", "r");
    if (sourceFile == NULL) {
        printf("Khong the mo file bt01.txt\n");
        return 1;
    }

    destinationFile = fopen("bt06.txt", "w");
    if (destinationFile == NULL) {
        printf("Khong the tao file bt06.txt\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("Da sao chep noi dung tu bt01.txt sang bt06.txt thanh cong.\n");

    return 0;
}

