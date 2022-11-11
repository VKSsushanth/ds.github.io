## code  

#include <stdio.h>
int main()
{
int i,j,k,a[10],b[10],c[20],n,m;
       printf("enter range of first array\n");
   scanf("%d",&n);
   printf("enter elements in sorted array\n");
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
 printf("enter range of second array\n");
   scanf("%d",&m);
   printf("enter elements in sorted array\n");
   for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = 0; // Initial index of merged subarray

    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
  /* Copy the remaining elements of a[], if there are any */
    while (i < n)
    {
        c[k] =a[i];
        i++;
        k++;
    }
  /* Copy the remaining elements of b[], if there are any */
    while (j < m)
    {
        c[k] = b[j];
        j++;
        k++ ;
}
    
    printf("after sorting\n");
    for(i=0;i<k;i++)
    printf("%d",c[i]);

}
