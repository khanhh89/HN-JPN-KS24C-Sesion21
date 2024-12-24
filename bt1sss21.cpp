#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *file;
	char arr[256];
	file = fopen("bt01.txt","w");
	if(file==NULL){
		printf("Khong the ghi file");
		return 1;
		}
	printf("Nhap mot chuoi bat ki: ");
	fgets(arr,sizeof(arr),stdin);
	fprintf(file,"%s",arr);
	printf("Da ghi vao chuoi!!!");
	fclose(file);
	return 0;
}

