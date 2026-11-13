int addDigits(int num) {
    int a = num;
    int sum = 0;
    int digit;

    while (a != 0)
    {
        digit = a % 10;
        a = a / 10;
        sum = sum + digit;
    }
    if (sum >= 10)
        return addDigits(sum);

    return sum;
} 