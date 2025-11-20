#include<stdio.h>
int main ()
{
    int n , m , i , j ; 
    scanf("%d",&n);
    int arr[n];
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    int ar[m];
    for ( j = 0; j < m ; j++ )
    {
        scanf("%d",&ar[j]);
    }
    int max = n+m ;
    int arrr[max];
    i = 0 , j = 0 ; int k = 0 ;
    while ( i < n && j < m )
    {
        if ( arr[i] < ar[j] )
        {
            arrr[k++]=arr[i++];
        }
        else
        {
            arrr[k++]=ar[j++];
        }
    }
    while(i<n)
    {
        arrr[k++]=arr[i++];
    }
    while(j<m)
    {
        arrr[k++]=ar[j++];
    }
    for ( i = 0 ; i < max ; i++ )
    {
        printf("%d ",arrr[i]);
    }
}