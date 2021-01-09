#include "as2.h"
int main()
{

int t_lines, t_characters, t_words;
int f,n,d,i;
char ch[16384];
f=open("f.txt",O_RDONLY);
if(f<0)
{
	perror("open");
	exit(1);
}
t_words = 0;
t_lines = 0;
while(n=read(f,ch,sizeof(ch)))
	{
    	for(i=0;i<n;i++)
        	{
            /* Check new line */
            	if (ch[i] == '\n')
               	t_lines++;
            /* Check words */
            	if (ch[i] == ' ' || ch[i] == '\t' || ch[i] == '\n')
               	t_words++;
        	}
        t_characters=n;
    }
    /* Close files to release resources */
    close(f);
int getLines()
{
  printf("no of lines: %d\n",t_lines);
}
int getCharacters()
{
  printf("no of characters: %d\n",t_characters);
}
int getWords()
{
  printf("no of words: %d\n",t_words);
}
getLines();
getCharacters();
getWords();
return 0;
}
