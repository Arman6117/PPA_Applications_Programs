#include <stdio.h>
#include <unistd.h> // Universal Standard
#include <fcntl.h> // File Control
#include <stdlib.h> 

int main () 
{
 
   char Name[30];
   int FD = 0; // File Descripters
   char Data[] = "India is my country";

   printf("Enter file name that you want to open: ");
   scanf("%s", Name);

   FD = open(Name,O_RDWR);
   if (FD == -1) 
   {
    printf("Unable to open file");
    return -1;
   }
   else
   {
    printf("File opened successfully");
   }

   write(FD,Data,19);

 return 0;
}
