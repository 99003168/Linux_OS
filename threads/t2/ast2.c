#include"ast2.h"
void* max(void* sub_array)
{
    int* partarray = (int*)sub_array;
    int maxm=0;
    for(int i=0;i<10;i++)
    {
    	if(partarray[i]>maxm)
    	     maxm=partarray[i];
    }
    pthread_exit((void*)maxm);

}
int main()
{
    int array[100];
    int finalvalue=0;
    void* maxm;
    for(int i=0;i<=100;i++)
    {
        array[i]=i;
    }
    pthread_t threads[10];
    for(int i=0;i<10;i++)
    {
        int* sub_array=array + (i*10);
        pthread_create(&threads[i],NULL,max,(void*) sub_array);
    }
    for(int i=0;i<10;i++)
    {
        pthread_join(threads[i],&maxm);
        finalvalue=(int)maxm;
    }
    printf("maxvalue is  = %d\n",finalvalue);
    return 0;
}



