#include <stdio.h>
#include <stdlib.h> //Library for malloc

int main(){

    int cnt;
    printf("Please enter the size of Array. \n");
    scanf("%d",&cnt);

    int *p = malloc(cnt*sizeof(int));

    for (int i = 0; i < cnt; i++)
    {
        printf("Please enter number %d \n",i+1);
        scanf("%d",&p[i]);
    }

    printf("The array you entered is: \n");
    for (int i = 0; i < cnt; i++)
    {
       printf("%d \n",p[i]);
    }
    
   free(p); 

}