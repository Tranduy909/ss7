#include<stdio.h>

int main(){

    int numbers[5];
    int i=0;

    for( i =0;i<5;i++){
         printf("Moi ban nhap vao mot so nguyen ");
         scanf("%d",&numbers[i]);
    }
    for(i =0;i<5;i++){
        printf("Phan thu thu %d = %d \n",i,numbers[i]);
    }
return 0;
}
