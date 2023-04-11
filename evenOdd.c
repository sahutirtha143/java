#include<stdio.h>
int main(){
    int a[5],i;
    printf("Enter the data into in Array:");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]%2==0)
        printf("value of %d is :Even\n",a[i]);
        else
        printf("value of %d is :Odd\n",a[i]);
    }
    cout<<"I love my family";
    return 0;
}