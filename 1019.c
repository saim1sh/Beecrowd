 #include <stdio.h>


    int main()
    {
         int N,hour,min;
         scanf("%d",&N);
         hour=(N/60)/60;
         N-=hour*3600;
         min=N/60;
         N-=min*60;
         printf("%d:%d:%d\n",hour,min,N);
         return 0;
    }
