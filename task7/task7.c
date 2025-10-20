#include <stdio.h>
int main() {
    int marks[5],sum=0;
    printf("Enter marks of five subject:");
    for(int i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++){
        sum+=marks[i];
    }
    printf("%d",sum);
    return 0;
}
