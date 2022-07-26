void fib_seq(int user_in)
{
    int i,f1,f2,f_next;
    //f1 in the sequence is intialized by 0
    f1=0;
    //f2 in the sequence is intialized by 1
    f2=1;
    // we will start loop starting from f3
    f_next=f1+f2;
    printf("%d,%d,",f1,f2);
    for (i=3;i<=user_in+1;++i)
    {
        printf("%d, ", f_next);
        f1 = f2;
        f2 = f_next;
        f_next = f1 + f2;
    }
}
