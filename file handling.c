// input roll name and GPA of 5 students in file handling using fprinf and fsacanf
#include<stdio.h>
int main(){
FILE*fp;
int roll;
char name[20];
float gpa;
int i;
for(i=0;i<2;i++){
	fp=fopen("student.txt","w");
	for(i=0;i<2;i++){
		printf("The roll , name and GPA of student  of %d is ",i+1);
		scanf("%d %s %f", &roll , name, &gpa);
		fprintf(fp," %d \t %s \t %f\n",roll , name , gpa);
	}
	fclose(fp);
	printf(" data elements  form datafile are:\n");
	fp = fopen("student.txt","w");
	
	while(fscanf(fp,"%d\t %s\t %f\n", &roll, name ,&gpa)!=EOF){
		printf("%d\t %s \t %f \n", roll , name , gpa);		
	}
	fclose(fp);
}
}


    
