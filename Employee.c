#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[30];
    struct Employee* link;
};


int main(void) {
   printf("Hello, World!\n"); //printf instead of pintf
   struct Employee e1;
   struct Employee e2;
   e1.id = 1;
   strcpy(e1.name, "Hasan");
   e1.link = NULL;

   e2.id = 2;
   strcpy(e2.name, "Zayn");
   e2.link = NULL;

   e1.link = &e2;

   printf("Employee 1:id %d\n", e1.id);
   printf("Employee 1:id %s\n", e1.name);
   printf("Employee 2:id %d\n", e2.id);
   printf("Employee 2:id %s\n", e2.name);

   printf("Employee 2 using 1's link :id %d\n", e1.link->id);
   printf("Employee 2 using 1's link name %s\n", e1.link->name);
   return 0;
}