#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

// Ordinary bubbling sort

void bubble_sort(int a[],int n)
{
	
 int i=0,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}


// the first optimization program

void bubble_sort_better_flag(int a[],int n)
{
	
 int i=0,j,temp,flag = 0;


    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])

            {   flag = 1;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
		if(flag == 0) break;
	
    }
    
}

// Algorithm running time

int timecal(void)  
{  
   long    i = 10000000L;  
   clock_t start, finish;  
   double  duration; 
   printf( "Time to do %ld empty loops is ", i );  
   start = clock();  
   while( i-- );  
   finish = clock();  
   duration = (double)(finish - start) / CLOCKS_PER_SEC;  
   printf( "%f seconds\n", duration );  
   system("pause");  
   return 0;
}  


int main()
{   
	int i=0;

	int j =0;

    int a[N]={-89, 38, 11, 78, 96, 44, 19, 25,-86,50};

	printf("rawArray: ");

    for(j=0;j<N;j++)
    {
        printf("%d ",a[j]);
    }

    timecal();

    printf("\n\n");

    bubble_sort(a,N);

    bubble_sort_better_flag(a,N);

	printf("bubble_sort: ");

    for(i=0;i<N;i++)
    {   
        printf("%d ",a[i]);
    }

    printf("\n\n");
    printf("bubble_sort_better_flag: ");
	for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n\n");

    return 0;
}


