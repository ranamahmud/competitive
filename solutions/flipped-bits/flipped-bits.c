#include <stdio.h>
int count_set_bits(int b)
{
    int count = 0;
    while(b > 0)
    {

        count = count + ( b&1 );
        b = b >> 1;


    }
    return count;

}
int main()
{
    int T ,a ,b ;
    scanf("%d",&T);
    while(T-->0)
    {
        scanf("%d%d",&a,&b);
        b = a^b;
        printf("%d\n",count_set_bits(b));


    }

    return 0;
}
