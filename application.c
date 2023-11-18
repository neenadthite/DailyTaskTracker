/**Header files**/
#include <stdio.h>
#include <stdlib.h>
//#include <sqlite3.h> 

/*Macros*/
#define buffer
#define VERIFICATION_PRINTS 1

/*Global variables*/
char date[50] = {NULL};

int main()
{
    char task[50] = {NULL};
    char remark[50] = {NULL};
    FILE *dateptr;
    dateptr = popen("date +%d-%m-%y","r");
    if(dateptr == NULL)
        printf("\nUnable to fetch date\n");
    else
        fgets(date, sizeof(dateptr)+1, dateptr);
    printf("\nCurrent date is : %s\n",date);
    printf("\nEnter task: ");
    gets(task);
    printf("\nEntered task is: %s\n",task);
    printf("Enter remark: ");
    gets(remark);
    printf("\nEntered remark is: %s",remark);
    //writeintodatabase(task, remark);
    return 0;
}
#if 0
int writeintodatabase(char *ptrtask, char *ptrremark)
{
    sqlite3_open(const char *taskdb, sqlite3 **ppDb)
    return 0;
}
#endif