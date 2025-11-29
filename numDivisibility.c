int countDigits(int num) {
int original,count=0,digit;
original=num;
while(num!=0)
{
    digit=num%10;

    if(original%digit==0)
    {
        count++;
    }
    num=num/10;

}
    return count;
}