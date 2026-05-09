 int n;
    int factorial = 1;
    printf("Enter number : ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        factorial *= i;
    }
    printf("Factorial is %d", factorial);