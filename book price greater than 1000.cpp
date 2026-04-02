//Question: Create a structure named Book with members Book_Name, Price and Author_Name,
//take input for 10 books and print authors whose book price is greater than 1000.

#include<stdio.h>

struct Book{
char Book_Name[50];
char Author_Name[50];
float Price;
};

int main(){
struct Book b[10];
int i;

for(i=0;i<10;i++){
printf("Enter Book Name, Author Name and Price of book %d: ",i+1);
scanf("%s %s %f",b[i].Book_Name,b[i].Author_Name,&b[i].Price);
}

printf("\nAuthors with book price greater than 1000:\n");

for(i=0;i<10;i++){
if(b[i].Price > 1000){
printf("%s\n",b[i].Author_Name);
}
}

return 0;
}
