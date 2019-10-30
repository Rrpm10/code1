#include<stdio.h>
int main(){
//program to print sum of elements in 2d array
int arr[5][5];


for (int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        arr[i][j]=rand()%25;
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
int sum=0;

for (int i=0;i<5;i++){
    for(int j=0;j<5;j++){
            sum+=arr[i][j];
}}

printf("%d",sum);
}
