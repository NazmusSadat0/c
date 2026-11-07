#include <stdio.h>
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

  printf("By using struct method : \n");
  printf("%s %d %d\n", b1.name, b1.page, b1.price);

  printf("By using struct pointer method : \n");
  printf("%s %d %d", ptr->name, ptr->page, ptr->price);
  return 0; 
}