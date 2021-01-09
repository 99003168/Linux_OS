#include "asp1.h"
int main()
{
int t,status;
char command[10];
t=fork();
if(t<0)
{
printf("error");
}
else if(t==0)
{
printf("enter the command");
scanf("%s",command);
execlp(command,command,NULL);
exit(0);
}
else
{
waitpid(-1,&status,0);
printf("child has comleted\n");
printf("status is %d",WEXITSTATUS(status));
}
}

