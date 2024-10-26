/*
11.Write a function to check whether a given number is Prime
or not. (TSRS). (Return 1 if prime, otherwise return 0) 
*/

int primeornot(int n)
{
    for (int i = 2; i <=n-1; i++)
    {
       for (int j = 2; j <=i; j++)
       {
            if(i%j==0)
            {
                return 1;
                break;
            }
            else
            {
                return 0;
            }
       }
    }
    
}


int primeornot(int n)
{
 for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        return 1;
    else
        return 0;

}