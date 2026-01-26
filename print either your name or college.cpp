// question 4.  if x>y , print your name else college name 
#include<stdio.h>
int main()
{
int x,y,m,n,i;
printf("Enter x and y:");
scanf("%d%d",&x,&y);
printf("Enter m and n:");
scanf("%d%d",&m,&n);
if(x>y){
for(i=1;i<=m;i++){
printf("Sudin Neupane\n");
}
}else{
for(i=1;i<=n;i++){
printf("Asian\n");
}
}
return 0;
}

