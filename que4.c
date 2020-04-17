#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
int fd1;
char buff[100],buff2[100];
fd1=open("q4",O_CREAT|O_APPEND|O_RDWR,0777);
read(0,buff,100);
for(int i=6;i<=13;i++)
{
buff2[i-6]=buff[i];
}
write(fd1,buff2,8);
}
