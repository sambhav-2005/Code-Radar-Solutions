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
        int a = 0;
        int b = 1;
        int c = a+b;
        int i = 0;
        while(i < n)
        {
            printf("%d ", c);
            a = b;
            b = c;
            i++;
        } 
    }
    
}