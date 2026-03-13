//Question: Write a program using structure to store the details of a book and display them.

#include<stdio.h>

struct Book{
int id;
char title[50];
float price;
};

int main(){
struct Book b;

printf("Enter book id: ");
scanf("%d",&b.id);

printf("Enter book title: ");
scanf("%s",b.title);

printf("Enter price: ");
scanf("%f",&b.price);

printf("\nBook Details:\n");
printf("ID: %d\n",b.id);
printf("Title: %s\n",b.title);
printf("Price: %.2f\n",b.price);

return 0;
}
