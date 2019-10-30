#include<stdio.h>
int main(){

int arr[5][5];
int (*ptr)[5];

ptr=arr;


int sum=0;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        *(*(ptr+i)+j)=rand()%25;
        printf("%d ", *(*(ptr+i)+j));
        sum+= *(*(ptr+i)+j);
    }
    printf("\n");
}
printf("%d", sum);
}
