#include <iostream> 
  
using namespace std; 

int main() 
{ 
   int array[5]; 
  
   /* If %p is new to you, you can use %d as well */
   printf("array=%p : &array=%p\n", array, &array);  
  
   printf("array+1 = %p : &array + 1 = %p", array+1, &array+1); 
  
   return 0; 
} 
