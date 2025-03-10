void fibonacciSeries(int n)
{
    if(n == 1)
    {
        printf("0");
    }
    else if(n == 2)
    {
        printf("0 1");
    }
    else{
        int a = 0, b = 1, c;
        int i = 0;
        while(i < n)
        {
            printf("%d ", a);
            c = a+b;
            a = b;
            b = c;
            i++;
        } 
    }
    
}