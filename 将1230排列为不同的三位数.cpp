#include<stdio.h>
 
int main()
{ //1,2,3,0
 //int m=0;
int i, j, k;


 for(i = 1; i < 4; i++){
  for(j = 0; j < 4; j++){
   for(k = 0; k < 4; k++){    
    if(i != j && j!= k && i != k){ 
     //m++;
     //printf("%d",m);
     printf("%d%d%d\n",i ,j ,k);
    }
   }
  }
 }
}





