#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char input[100];

    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt\n");
        return 1;
    }

    printf("Nhap chuoi can ghi vao file: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    fprintf(file, "%s\n", input);

    fclose(file);

    printf("Da ghi chuoi vao file thanh cong.\n");

    return 0;
}

