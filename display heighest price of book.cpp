//Question: Write a program using structure to store the details of 3 books and display the book with the highest price.

#include<stdio.h>

struct Book{
int id;
char name[50];
float price;
};

int main(){
struct Book b[3];
int i,max=0;

for(i=0;i<3;i++){
printf("Enter book id, name and price: ");
scanf("%d %s %f",&b[i].id,b[i].name,&b[i].price);
}

for(i=1;i<3;i++){
if(b[i].price > b[max].price)
max = i;
}

printf("\nBook with highest price:\n");
printf("ID: %d\n",b[max].id);
printf("Name: %s\n",b[max].name);
printf("Price: %.2f\n",b[max].price);

return 0;
}
