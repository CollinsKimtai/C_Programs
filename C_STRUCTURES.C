#include <stdio.h>
#include <string.h>
struct  Book {
  char title[50];
  char author[17];
  int publication_year;
  char ISBN[13];
  float price;
}Book1;

int main(){
    strcpy(Book1.title,"Introduction to C Programming");
    strcpy(Book1.author,"John Smith");
    Book1.publication_year = 2022;
    strcpy(Book1.ISBN ,"9780131103627");
    Book1.price = 49.99;
    
    printf("Title: %s\n",Book1.title);
    printf("Author: %s\n",Book1.author);
    printf("Publication year: %d\n",Book1.publication_year);
    printf("ISBN: %s\n",Book1.ISBN);
    printf("Price: %.2f\n",Book1.price);
   
    
  return 0;  
}