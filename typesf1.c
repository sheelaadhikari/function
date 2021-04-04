//function with no arguments and return value
#include<stdio.h>
void dispmenu(void);
main(){
    int choice ;
    dispmenu();
    printf("enter the choice: ");
    scanf("%d", &choice);

} 
void dispmenu(){
    printf("1. create the database\n");
    printf("2.Insert new record\n");
printf("3.Modifya record\n");
printf("4.Delete a record\n");
printf("5.Display all records\n");
    printf("6.Exit\n");
    }