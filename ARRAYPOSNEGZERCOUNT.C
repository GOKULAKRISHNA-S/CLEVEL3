#include<stdio.h>
int main ()
{
    int n , i ; scanf("%d",&n); 
    int arr[n];
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    int pos = 0 , neg = 0 , zer = 0 ;
    for ( i = 0 ; i < n ; i++ )
    {
       if ( arr[i] > 0 )
       {
          pos++ ; 
       }
       if ( arr[i]< 0 )
       {
        neg++ ;
       }
       if ( arr[i]==0 )
       {
        zer++ ;
       }
    }
    printf("postive count : %d\n",pos);
    printf("negative count : %d\n",neg);
    printf("zero count : %d\n",zer);
}