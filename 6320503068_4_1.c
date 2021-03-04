#include<stdio.h>

    void main()
    {
        int n,i,max=0,min=1000,best,worst,A[n][3],B[n-2];
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d %d %d",&A[i][0],&A[i][1],&A[i][2]);
        }
        for(i=0; i<n-2; i++)
        {
            B[i]=A[i][0]*4+A[i][1]*2+A[i][2]+A[i+1][0]*4+A[i+1][1]*2+A[i+1][2]+A[i+2][0]*4+A[i+2][1]*2+A[i+2][2];
            if(B[i]>max||B[i]<min)
            {
                max=B[i];
                if(B[i]>max){
                    best=i+1;
                }
                else{
                    worst=i+1;
                }
            }
        }
        printf("%d %d",best,worst)
    }
