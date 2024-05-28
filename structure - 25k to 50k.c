/*Write a C-program using structure to input staff id, name
and the salary of 50 staffs. Display staff id, name and
salary of those staff whose salary range from 25
thousand to 40 thousand.*/
#include<stdio.h>
struct staff{
	int id;
	char name[20];
	float salary;
}S[2];
int main(){
	int i,n=2;
	for(i=0;i<n;i++){
		printf("enter id, name , and salary of staffs %d \n",i+1);
		scanf("%d%s%f",&S[i].id,S[i].name,&S[i].salary);
		
	}
	printf("the id name  and salary of the employees are :\n");
	
	//for 25k to 50k, then...
	for(i=0;i<n;i++){
		if(S[i].salary>=2500&&S[i].salary<=50000){
			printf("%d\t\t%s\t\t%.2f\n",S[i].id,S[i].name,S[i].salary);
		}
	}
}
