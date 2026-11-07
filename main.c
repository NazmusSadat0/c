#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    int page;
    int price;
} Book;

int main() {
  Book b1 = {"C", 100, 200};
  Book *ptr;
  ptr = &b1;
  printf("%s %d %d", ptr->name, ptr->page, ptr->price);
  return 0; 
}