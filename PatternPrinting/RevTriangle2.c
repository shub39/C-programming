//Reverse triangle (vertically) but differtent
#include<stdio.h>
int main(){
    int b;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        for (int j=1;j<=b+1-i;j++){
            printf("%c ",(char)i+64); //Replace with whatever you like, you know this right?
        }
        printf("\n");
    }
    return 0;
}
