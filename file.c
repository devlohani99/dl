#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp1,*fp2;
    char c;
    char filename[20];
    printf("Enter the filename for reading\n");
    scanf("%s",filename);
    fp1=fopen(filename,"r");
    if(fp1==NULL){
        printf("The file does not exist \n");
        exit(1);
    }
    printf("Enter the name of file for writing \n");
    scanf("%s",filename);
    fp2=fopen(filename,"w");
    if(fp2==NULL){
        printf("The file does not exist \n");
        exit(1);
    }
    c=fgetc(fp1);
    while(c!=EOF){
        fputc(c,fp2);
        c=fgetc(fp1);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}