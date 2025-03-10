void fibonacciSeries(int n)
{
    int a = 0;
    int b = 1;
    printf("%d %d", a, b);
    int c = a + b;
    int i = 0;
    while(i < n)
    {
        printf("%d ", c);
        a = b;
        b = c;
    }
}