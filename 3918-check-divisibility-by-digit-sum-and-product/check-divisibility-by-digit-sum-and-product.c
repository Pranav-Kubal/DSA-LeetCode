bool checkDivisibility(int n) {
    int temp = n;
    int sum = 0;
    int product = 1;

    while(temp > 0) {
        int digit = temp % 10;
        temp = temp / 10;
        sum += digit;
        product *= digit;
    }

    int totalSum = sum + product;
    if (n % totalSum == 0) {
        return 1;
    }
    return 0;
}