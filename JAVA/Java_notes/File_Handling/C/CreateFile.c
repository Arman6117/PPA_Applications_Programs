#include <stdio.h>
#include <unistd.h> // Universal Standard
#include <fcntl.h> // File Control
#include <stdlib.h> 

int main () 
{
 
   char Name[30];
   int FD = 0; // File Descripters

   printf("Enter file name that you want to create: ");
   scanf("%s", Name);

   FD = creat(Name,0777);
   if (FD == -1)
   {
    printf("Unable to create file");
   }
   else
   {
    printf("File created successfully\n");
   }
 return 0;
}
