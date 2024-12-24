#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt\n");
        return 1;
    }

    ch = fgetc(file);

    if (ch != EOF) {
        printf("Ky tu dau tien trong file la: %c\n", ch);
    } else {
        printf("File rong hoac khong co ky tu de doc.\n");
    }

    fclose(file);

    return 0;
}

