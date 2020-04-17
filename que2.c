#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

int n1=5,n2=10;

void* f1()
{
sleep(1);
printf("Welcome\n");
}

void* f2()
{
int a= n1+n2;
sleep(1);
printf("Value of sum is %d\n", a);
}

int main()
{
pthread_t t,t2;
pthread_create(&t,NULL,f1,NULL);
pthread_join(t,NULL);
pthread_create(&t2,NULL,f2,NULL);
pthread_join(t2,NULL);
}

