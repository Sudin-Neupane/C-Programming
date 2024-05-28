// input data of 5 students ans store in file handling using fprintf and fscanf
#include<stdio.h>
#include<conio.h>
struct student{
	int roll ;
	char name[20];
	int gpa;
} s[];

int main() {
	int i;
	FILE*fp;
	fp = fopen("student.txt" , "w");
	for ( i=0;i<5;i++){
		printf("Enter roll name and gpa of student %d \n",i+1);
		scanf("%d%s%f", &s[i].roll,s[i].name,&s[i].gpa);
		fprintf(fp," %d \t %s \t %f\n",s[i].roll,s[i].name,s[i].gpa);	
	}
	fclose(fp);
	fp = fopen("student.txt","r");
	printf("%d \t  %d \t %d \n",s[i].roll,s[i].name,s[i].gpa);
	while (fscanf(fp,"%d%s%f",&s[i].roll, s[i].name,&s[i].gpa)!=EOF){
		printf("%d \t %s \t %d \n",s[i].roll, s[i].name,s[i].gpa);
	}
	fclose(fp);

}
