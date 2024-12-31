#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[30];
};


int main(void) {
   printf("Hello, World!\n"); //printf instead of pintf
   struct Employee e1;
   struct Employee e2;
   e1.id = 1;
   strcpy(e1.name, "Hasan");

   e2.id = 2;
   strcpy(e2.name, "Zayn");

   printf("Employee 1:id %d\n", e1.id);
   printf("Employee 1:id %s\n", e1.name);
   printf("Employee 2:id %d\n", e2.id);
   printf("Employee 2:id %s\n", e2.name);
   return 0;
}