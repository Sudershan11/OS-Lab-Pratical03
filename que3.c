#include<stdio.h>
#include<stdlib.h>
int proc=3,res=3,i,j,row=0,flag=0;
int pro[3][3]={1,0,0,0,1,0,0,0,1},req[3][3]={0,1,0,0,0,1,1,0,0},st_req[3][3],st_pro[3][3];
void main()
{
int c=0;
 row=0;
 while(1)
 {
  for(i=0;i<res;i++)
  {
   if(pro[row][i]==1)
        {
         if(st_pro[row][i]>1 && flag==1)
         {
                c=1;
         }
         st_pro[row][i]++;
         row=i;
         break;
        }
        if (c==1)
        break;
  }

  for(i=0;i<proc;i++)
  {
        if (c==1)
        break;
   if(req[row][i]==1)
        {
         if(st_req[row][i]>1)
         {
          c=1;
         }
         st_req[row][i]++;
         row=i;
         flag=1;
         break;
        }
        if (c==1)
        break;
  }

if (c==1)
{
printf("Deadlock Occured\n");
break;
}
}
if(c==0)
printf("\nNo Deadlock Detected\n");
}
