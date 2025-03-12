    #include<stdio.h>

    int main()
    {
        int arr[]={10,20,30,40,50};

        int *p=&(arr[1]);
        int *q=&(arr[3]);

        printf("%d\n",arr);

        printf("%d\n",p);
        printf("%d\n",q);
        printf("%d\n",*p);
        printf("%d\n",*q);
        
        

        return 0;
    }