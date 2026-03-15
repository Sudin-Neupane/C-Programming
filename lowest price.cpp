//Question: Write a program using structure to store the details of 3 products and display the product with the lowest price.

#include<stdio.h>

struct Product{
int id;
char name[50];
float price;
};

int main(){
struct Product p[3];
int i,min=0;

for(i=0;i<3;i++){
printf("Enter product id, name and price: ");
scanf("%d %s %f",&p[i].id,p[i].name,&p[i].price);
}

for(i=1;i<3;i++){
if(p[i].price < p[min].price)
min = i;
}

printf("\nProduct with lowest price:\n");
printf("ID: %d\n",p[min].id);
printf("Name: %s\n",p[min].name);
printf("Price: %.2f\n",p[min].price);

return 0;
}
