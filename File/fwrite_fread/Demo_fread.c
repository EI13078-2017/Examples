#define STUDENTS_CNT 3
#include <stdio.h>
typedef struct {
    long ID;
    char Name[20];
    float Grades[3];
}Student;

main(){
    Student stud;
    FILE *fp;
    char file_name[20];
    printf("\nInput file name for open: ");
    gets(file_name);
    if ((fp=fopen(file_name,"rb"))==NULL){
        printf("\nOpen file error.");
        exit(1);
    }
    while(fread(&stud,sizeof(stud),1,fp)==1){
        printf("ID: %ld\n",stud.ID);
        printf("Name: %-10s\n",stud.Name);
        printf("Grades: %6.2f, %6.2f, %6.2f\n\n",stud.Grades[0],stud.Grades[1],stud.Grades[2]);
    }
    fclose(fp);
}
