#include "ast3.h"

int main()
{
	time_t currenttime;
	struct tm *tm_currenttime;
	int hours,minutes,seconds;
	currenttime=time(NULL);
	tm_currenttime=localtime(&currenttime);
	hours=tm_currenttime->tm_hour;
	minutes=tm_currenttime->tm_min;
	seconds=tm_currenttime->tm_sec;
	printf("TIME is %d : %d : %d",hours,minutes,seconds);
}
	
	
