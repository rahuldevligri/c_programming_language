/*
12.Write a function to find next prime number of a given
number. (TSRS)
*/

int nxtprimeno(int n)
{
   int i,j,c;
    c=0;
      for (i=n+1; ; i++)
    {
       for (int j = 2; j<=i-1; j++)
       {
            if(i%j==0)
            {
                c++;
                break;
            }
       }
    if(c==1){
        c=0;
    }
    else{
        return i;
        break;    
    }

    }
}  