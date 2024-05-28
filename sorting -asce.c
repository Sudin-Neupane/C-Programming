// sort them in asceinding order :
#include<stdio.h> // preprocessor
#include<string.h>
struct std{			// structure declaration
	int roll;
	char name[20];
	float GPA;
	
}s[] ,temp;
int main(){
	int i , j;
	
	
	for (i=0;i<3;i++){
		printf("ENter Roll , name and GPA  of student %d\n" , i+1);
		scanf("%d%s%f",&s[i].roll, s[i].name,&s[i].GPA);
		
	}
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if( (s[i].name ,s[j].name)>0 ){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("The shorted elements are:\n");
	
	printf("Roll\t name\t GPA\n");
	for(i=0;i<3;i++){
		printf("%d \t %d \t %f\n",s[i].roll, s[i].name,s[i].GPA);
	}
	
	
	
	
	
	
}