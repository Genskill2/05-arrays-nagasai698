#include <stdio.h>
#include <assert.h>

 int max(int a[],int n){
 int max=  a[0];
    for(int i=0 ; i<n; i++){
   
    if(max < a[i]){
   max=a[i];
    }
    }
    return max;
    }
    
int min(int b[], int n){
 int min = b[0];
 for (int i=0 ; i<n ;i++){
   if(min> b[i]){
   min = b[i];
   }
   }
   return min;
   }
    
float average(int c[], int n){
float average =0;
for(int i =0 ; i<n ; i++){
 average+= c[i];
 }
 average = average/n;
 return average;
 }
 
 int mode(int arr[],int n)
{
  int count=0,maxCount=0,mode=0;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      
      if(arr[j] == arr[i])
      {
        count +=1;
      }
    }
      if(count>maxCount)
      {
      maxCount = count;
      mode= arr[i];
      }
  }
  return mode; 
}
  
 int factors(int n, int e[]){
 int i=0,count=0;
 for(count = 2; n > 1; count++) {  
        while(n % count == 0) {
	    e[i] = count;
		i++;
            n = n / count;  
        }  
    }  
  return e[i],i;
}
