#include"asp2.h"
int main()
{
int t,status;
t=fork();
if(t<0)
{
printf("error");
}
else if(t==0)
{
execlp("gcc","gcc","test.c","-o","test",NULL);
exit(0);
}
else
{
waitpid(-1,&status,0);
printf("child is created\n");
printf("status is %d",WEXITSTATUS(status));
}
}

