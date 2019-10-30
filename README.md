# code1
//program to print sum of elements in 2d array
#include<stdio.h>
int main(){

int arr[5][5];
int (*ptr)[5];

ptr=arr;

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        arr[i][j]=rand()%25;
    }
}
int sum=0;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        printf("%d ", *(*(arr+i)+j));
        sum+= *(*(arr+i)+j);
    }
    printf("\n");
}
printf("%d", sum);
}
