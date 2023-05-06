#include <stdio.h>
 
int main () 
{
int n = 11 ,n2 = 21 , n3 = 51;
 int *arr[ ] = {&n,&n2,&n3};
 
 printf("%d", sizeof(arr));

 return 0;
}
