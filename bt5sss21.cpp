#include <stdio.h>
#include<string.h>
int main() {
    FILE *file;
    int numLines;
    char line[100];

    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Khong the tao file bt05.txt\n");
        return 1;
    }

    printf("Nhap so dong can ghi vao file: ");
    scanf("%d", &numLines);
    getchar();

    for (int i = 0; i < numLines; i++) {
        printf("Nhap noi dung dong thu %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        line[strcspn(line, "\n")] = '\0';
        fprintf(file, "%s\n", line);
    }

    fclose(file);

    printf("Da ghi noi dung vao file bt05.txt thanh cong.\n");

    return 0;
}

