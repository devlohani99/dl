#include <stdio.h>
#include <math.h>
int main(){
float a[10],sum=0,mean,std1 = 0, std,*p;
int i, n;
printf("How many elements\n");
scanf("%d",&n);
printf("Enter the array elements:\n");
for(i=0;i<n;i++){
scanf("%f",&a[i]);
p = a;
}
for(i=0;i<n;i++){  
sum = sum + *p;
p++;
}
mean = sum/n;
p = a;
for(i =0;i<n;i++){
std1 = std1 + pow((*p - mean),2);
p++;
}
std = sqrt(std1/n);
printf("Sum = %f \n mean = %f\n standard deviation =%f\n",sum,mean,std);
}
