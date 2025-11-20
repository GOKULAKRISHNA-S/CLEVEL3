#include<stdio.h>
int main ()
{
    int n , i , even=0 , odd=0 ; scanf("%d",&n);
    int arr[n];
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    printf("EVEN NUMBERS IN ARRAY : ");
    for ( i = 0 ; i < n ; i++ )
    {
        if (arr[i]%2==0)
        {
            printf("%d ",arr[i]);
            even++ ;
        }
    }
    printf("\nCOUNT : %d\n",even);
    printf("ODD NUMBERS IN ARRAY : ");
    for ( i = 0 ; i < n ; i++ )
    {
        if (arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
            odd++ ;
        }
    }
    printf("\nCOUNT : %d",odd);


}