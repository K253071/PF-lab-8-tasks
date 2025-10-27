#include<stdio.h>
int main()
{
	int n;
    printf("Enter N to display its multiplication table: ");
    scanf("%d", &n);
    
    for(int i=1; i<11; i++){
        printf("\n%d X %d = %d",n,i,n*i);
    }
	return 0;
}
