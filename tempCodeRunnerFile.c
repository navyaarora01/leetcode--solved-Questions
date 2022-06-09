#include <stdio.h> 
// #pragma pack(1) 
struct student  
{  
   char a;  
   int b;  
  char c;  
}__attribute__((packed));  ;  
int main()  
{  
   struct student stud1; // variable declaration of the student type..  
   // Displaying the size of the structure student.  
   printf("The size of the student structure is %d", sizeof(stud1));  
   return 0;  
}  