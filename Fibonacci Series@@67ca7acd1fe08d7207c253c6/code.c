void fibonacciSeries(int n)
{
    if(n == 1)
    {
        printf("0");
    }
    else if(n == 2)
    {
        printf("1");
    }
    else{
        int a = 0, b = 1;
        int i = 0;
        while(i < n)
        {
            printf("%d ", a);
            a = b;
            b = a+b;
            i++;
        } 
    }
    
}