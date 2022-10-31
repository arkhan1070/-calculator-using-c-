#include <stdio.h>
#include <stdlib.h>


int main(){ 
    system("color b");
    system("start README.txt");
    int first; 
    printf("select you integer value:");
    scanf("%d", &first); 
    int second;
    printf("select you second integer value:");
    scanf("%d", &second);
    int i = 0;
     do{
        printf("\ncalculating %d\n", i);
        i++;
     }
     while(i != first+ second);
      printf("\ncalculating %d\n", i);
      printf("\nFinal Result = %d\n", i);
    system("pause");
    return 0;
    
    
    

}