#include<stdio.h>
int function1(int K,int L,int M);
int main()
{
    int p,q,r;
    printf("Enter the Number (K) ");
    scanf("%d",&p);
    
    
        printf("Enter the Number (L) ");
    scanf("%d",&q);

        printf("Enter the Number (M) ");
    scanf("%d",&r);


    printf("p : %d\t q : %d\t r :%d\n",p,q,r);

    int result=function1(p,q,r);
    printf("\n Total Number which are not divisible between 2  is  count : %d\n",result);

    return 0;

}
int function1(int K,int L,int M)
{
    printf("function called");
    int count=0;
    for(int i=L;i<=M;i++)
    {
        int j=2;
        while (j<=K)
        {
            /* code */
            if (i%j!=0)
            {
                /* code */
                count++;
            }

              j++;
            
        }
        
    }

    return count;
}