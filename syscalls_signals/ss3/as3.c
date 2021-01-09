#include"as3.h"
int main()
{
    int r;
    r=fork();
    if(r<0)
    {
        perror("fork");
        exit(1);
    }
    if(r==0)
    {
        printf("Enter pid:");
        char pid[1000],sig_num[10];
        scanf("%s",pid);
        printf("Enter Signal number/name with '-' :");
        int exec_r;
        scanf("%s",sig_num);
        exec_r=execlp("kill","kill",sig_num,pid,NULL);
        if(exec_r<0)
        {
            perror("execlp");
            exit(3);
        }
        exit(0);

    }
    else
    {
        waitpid(-1,0,0);
        printf("Signal sent..");
    }
    
}
