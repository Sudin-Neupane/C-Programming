/*WAP THAT READS ROLLNO, NAME AND PERCENTAGE OF N STUDENTS
AND SORT THEM IN ASCENDING ORDER ON THE BASIS OF PERCENTAGE.
*/
#include<stdio.h>
void sortbyper(int);
struct student{
	int rollno;
	char  name[20];
	float percentage ;
}S[50],temp;
int main(){
	int i,j,temp,n;
	printf("Enter value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	
	printf("ENter roll no, name and percentage obtained by student respectively",i+1);
	scanf("%d%s%f",&S[i].rollno,S[i].name,&S[i].percentage);
}
sortbyper(n);

}
void sortbyper(int n){

int i,j,res;
for(i=0;i<n-1;i++){
	for(j=i+1;j<n;j++){
		if(S[i].percentage<S[j].percentage){
			temp=S[i];
			S[i]=S[j];
			S[j]=temp;
		}
	}
}
printf("roll no \t name\t per\n");
for(i=0;i<n;i++){
	printf(" %d\t\t%s\t\t%0.2f\n",S[i].rollno,S[i].name,S[i].percentage);

}
}
