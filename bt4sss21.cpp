#include <stdio.h>

int main() {
    FILE *file;
    char line[256];

    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt\n");
        return 1;
    }

    if (fgets(line, sizeof(line), file) != NULL) {
        printf("Dong dau tien trong file: %s\n", line);
    } else {
        printf("File rong hoac khong co noi dung de doc.\n");
    }

    fclose(file);

    return 0;
}

