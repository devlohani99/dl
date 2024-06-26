#include<stdio.h>
int main(){
int a[10], n , i,j,temp;
printf("Enter the number of element in array:\n");
scanf("%d",&n);
printf("Enter the elemnts of array:\n");
for(i = 0;i<n;i++)
scanf("%d",&a[i]);
printf("Before Sorting:\n");
for(i= 0 ;i<n;i++)
printf("%d\n",a[i]);
for(i = 0;i<n;i++){
for(j = 0;j<n-i-1;j++){
if(a[j]> a[j+1]){
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
}
}
}
printf("After sorting:\n");
for(i = 0;i<n;i++)
printf("%d\n",a[i]);
}
