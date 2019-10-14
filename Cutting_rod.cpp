// Example program
#include <iostream>
#include <string>
#include<stdio.h> 
#include<limits.h> 
#include<string>
using namespace std;

int cutRod(int price[], int n) 
{ 
   int val[n+1]; 
   val[0] = 0; 
   int i, j; 
   string aux = "";
   for (i = 1; i<=n; i++) { 
       int max_val = INT_MIN; 
       for (j = 0; j < i; j++) {
         
            if( max_val > (price[j] + val[i-j-1]) ){
                 max_val = max_val;
            }
            else{
                max_val = price[j] + val[i-j-1];
                aux = to_string(j+1) +","+ to_string(i-j-1) +", ";
            }
        }
        val[i] = max_val;
}
   cout<<aux;
  
   return val[n]; 
} 

int main() 
{ 
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = 8;
    printf("Maximum Obtainable Value is %d", cutRod(arr, size)); 
    return 0; 
}
