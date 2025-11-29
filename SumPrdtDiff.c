int subtractProductAndSum(int n) {
    int num,digit,sum=0,product=1;
    num=n;
    while(num!=0)
    {
        digit=num%10;
        sum+=digit;
        num/=10;
}
    num=n;
    while(num!=0)

    {
        digit=num%10;
        product*=digit;
        num/=10;
    }
    return product-sum;

}