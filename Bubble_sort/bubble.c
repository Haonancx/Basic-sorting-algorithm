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
	timecal();
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
	timecal();
    
}

// the second optimization program

void bubble_sort_better_flag2(int a[], int n) {  
    int i = 0;  
    int j = 0;  
    int k = 0;  
    int temp = 0;  
    int flag = n;   
  
    for (i = 0; i < flag; i++) {  
        k = flag;  
        flag = 0;  
        for (j = 0; j < k; j++) {  
            if (a[j] > a[j + 1]) {  
                flag = j;  
                temp = a[j];  
                a[j] = a[j + 1];  
                a[j + 1] = temp;  
            }  
        }  
    }    
	timecal();
}  

// Algorithm running time

int timecal(void)  
{  
   long    i = 10000000L;  
   clock_t start, finish;  
   double  duration;  
   start = clock();  
   while( i-- );  
   finish = clock();  
   duration = (double)(finish - start) / CLOCKS_PER_SEC;  
   printf( "%f seconds\n", duration );  
//   system("pause");  
   return 0;
}  


int main()
{   
	int i=0;

	int j =0;

    int a[N]={89, 18, -11, 78, 96, 14, 19, -25,-86,50};

	printf("rawArray: ");

    for(j=0;j<N;j++)
    {
        printf("%d ",a[j]);
    }

    printf("\n");

    bubble_sort(a,N);

    bubble_sort_better_flag(a,N);

	bubble_sort_better_flag2(a,N);

	printf("bubble_sort after rawArray: ");

    for(i=0;i<N;i++)
    {   
        printf("%d ",a[i]);
    }

    printf("\n");

    return 0;
}


