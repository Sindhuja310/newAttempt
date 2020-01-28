int check_sign(int);
main()
{
    int number,value;
    scanf("%d",&number);
    value = check_sign(number);
    char str[3][10] = {"negative","zero","positive"};
    printf("The given number is %s",str[value]);
}
int check_sign(int n)
{
    return 1 + (n>>31)-(-n>>31);
}
