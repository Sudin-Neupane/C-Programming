// fscanf and f printf
#include<stdio.h>
#include<conio.h>
struct student{
	int roll;
	char name[20];
	float gpa;

}s[];
int main(){
	
	FILE *fp;
	fp =  fopen("student.txt","w");
	int i ;
	for(i=0;i<5;i++){
		printf("ENter roll name and gpa of student %d ",i+1);
		scanf("%d%s%f", &s[i].roll, s[i].name,s[i].gpa);
		fprintf(fp," %d \t %s \t %f \n", s[i].roll, s[i].name,s[i].roll);
		
	}
	fclose(fp);
	fp = fopen("student.txt","r");
	printf("Data from data file are:\n");
	printf("%d\t %d \t %d\n",s[i].roll,s[i].name,s[i].gpa);
	while (fscanf(fp,"%d\t %s\t %f\n",&s[i].roll,s[i].name,&s[i].gpa)!=EOF){
		printf("%d\t %s\t %f\n");
	}	
	fclose(fp);
}
