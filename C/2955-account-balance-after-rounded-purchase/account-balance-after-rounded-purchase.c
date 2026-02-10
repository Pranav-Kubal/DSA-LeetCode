int accountBalanceAfterPurchase(int purchaseAmount) {
    int roundedAmount = 0;
    roundedAmount = floor((purchaseAmount + 5)/10) * 10;
    return (100 - roundedAmount);
}