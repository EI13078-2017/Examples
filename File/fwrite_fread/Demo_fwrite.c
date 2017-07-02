#include <stdio.h>
#include<stdlib.h>
typedef struct{
    long ID;
    char Name[20];
    float Grades[3];
    }Student;

main(){
    Student stud;
    char numstr[80],ch;
    FILE *fp;
    char file_name[20];
    printf("\nInput file name for save:");
    gets(file_name);
    fp=fopen(file_name,"wb");
    if((fp=fopen(file_name,"wb"))==NULL){
        printf("\n Open file error.");
        exit(1);
    }
    int j;
    do{
        printf("\nEnter ID:");
        gets(numstr);
        stud.ID=atol(numstr);
        printf("\nEnter Name:");
        gets(stud.Name);
        printf("\nEnter Grades:\n");
        for(j=0;j<3;j++){
            printf("The grade of course %d is:",j+1);
            gets(numstr);
            stud.Grades[j]=atof(numstr);
        }
        fwrite(&stud,sizeof(stud),1,fp);
        printf("Have another student record (y/n)?");
        ch=getchar();
        getchar();
    }while(ch=='y');
    fclose(fp);
}
