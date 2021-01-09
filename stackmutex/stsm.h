#ifndef STSM_H_INCLUDED
#define STSM_H_INCLUDED

#include<pthread.h>
#include<stdio.h>
#include<semaphore.h>
void* push(void* pv);
void* pop(void* pv);

#endif // STSM_H_INCLUDED
