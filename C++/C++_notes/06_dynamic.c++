#include<stdlib.h>
#include<stdio.h>
#include <iostream>
using namespace std;


int main()
{
   
     int arr[5]; // Static memory allocation

     int *p = NULL;
     p = (int*)malloc(5 * sizeof(int));
  
    int *q = NULL;
     q = (int*)calloc(5,sizeof(int));
    
    int no = 5;
     int *X = NULL;
     X = new int[no];
    
     X = (int *)realloc(X,no++);

     cout<<sizeof(X);
     free(p);
     free(q);

     delete [] X;

    return 0;
}