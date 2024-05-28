// Wap to write and read character to/form file using getc() and putc()
#include<stdio.h>
int main(){
	FILE*fp;
	char ch;
	printf("Input data or ctrl+z to exit\n");
	fp=fopen("data.txt","w");
	while((ch=getchar())!=EOF);
	putc (ch,fp);
	fclose(fp);
	printf("\n The output is \n");
	fp=fopen("data.txt","r");
	while((ch=get(fp)!=EOF));
	putchar (ch);
	fclose(fp);
}