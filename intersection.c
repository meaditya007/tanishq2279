#include<stdio.h>
void main()
{
int a[6],b[6],c[6],i=0,j=0,same=0,f=0;
printf("Enter value of A \n");
for(i=0;i<6;i++)
    {
     scanf("%d", &a[i]);
    }
printf("Enter B \n");
    printf("%d",f);
for(i=0;i<6;i++)
    {
     scanf("%d", &b[i]);
    }
printf("Intersection is : ");
for(i=0;i<6;i++)
    {
     same=0;
     for(j=0;j<i;j++)
        {
         if(a[j]==a[i])
            {
              same=1;
              break;
            }
        }
    if(same==0)
        
        {
          for(j=0;j<6;j++)
            {
                 if(b[j]==a[i])
                {
                  printf("%d ",a[i]);
                  break;
                }
            }
        }
    }
    
}
