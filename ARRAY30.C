#include<stdio.h>
int main ()
{
    int n , i , j ,target ;
    scanf("%d",&n) ; int arr[n] ;
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    int less = -1 , great = -1 ;
    for ( i = 0 ; i < n ; i++ )
    {
      if ( arr[i] < target )
      {
        if ( less==-1 || arr[i]>less)
        less = arr[i] ;
      }
    }
    if ( less == -1 )
      {
        printf("No lesser elemnt found\n");
        return 0 ;
      }
    printf("%d\n",less);
    for ( i = 0 ; i < n ; i++ )
    {
      if ( arr[i] > target )
      {
        if ( great==-1 || arr[i]<great )
        great = arr[i] ;
      }
    }
    if ( great == -1 )
      {
        printf("No greater elemnt found");
        return 0 ;
      }
    printf("%d",great);
}