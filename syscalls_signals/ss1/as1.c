#include "as1.h"
int main()
{
	int f1,f2,nbytes, flag;
	f1=open("f1.txt",O_RDONLY);
	f2=open("f2.txt",O_WRONLY|O_CREAT, 0666);
	if(f1<0 || f2<0)
	{
		perror("open");
		exit(1);
	}
	int maxlen=128;
	char buf[maxlen];
	nbytes=read(f1,buf,maxlen);
	if(nbytes<0)
	{
		perror("read");
		exit(2);
	}
	flag = write(f2,buf,nbytes);
	close(f1);
	close(f2);
	if(flag)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}
