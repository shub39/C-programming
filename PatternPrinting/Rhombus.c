//print a rhombus
#include<stdio.h>
int main(){
    int b;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        for (int j=1;j<=b+1-i;j++){
            printf("  ");
        }    
        for (int j=1;j<=b;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
