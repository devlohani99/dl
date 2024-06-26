#include<stdio.h>
#include<string.h>
void compare(char[], char[]);
void concat(char[], char[]);
void length(char[]);
void main(){
int n,digit;
char str1[10],str2[10];
do{
printf("Press 1 - Compare || Press 2 - Concatenate || Press 3 - Length of String\n");
printf("Enter your choice:\n");
scanf("%d",&n);
switch(n){
case 1:
printf("Enter the string 1:\n");
scanf("%s",str1);
printf("Enter the string 1:\n");
scanf("%s",str2);
compare(str1,str2);
break;
case 2:
printf("Enter the string 1: \n");
scanf("%s",str1);
printf("Enter the string 2: \n");
scanf("%s",str2);
concat(str1,str2);
break;
case 3:
printf("Enter the string: \n");
scanf("%s",str1);
length(str1);
break;
default:
printf("Invalid Choice!!\n");
break;
}
printf("Do you want to continue(0/1)\n");
scanf("%d",&digit);
}
while(digit == 1);
}
void compare(char str1[],char str2[]){
int i;
i = strcmp(str1,str2);
if(i == 0){
printf("Strings are Equal!!!\n");
}else{
printf("Strings are not equal!!\n");
}
}
void concat(char str1[] , char str2[]){
strcat(str1,str2);
printf("Concatenated String: %s \n",str1);
}
void length(char str1[]){
int len;
len = strlen(str1);
printf("The length of strng is: %d\n",len);
}