class Solution {
public:
    bool prime(int num)
    {
        int i;
        if(num==1)
        return false;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            return false;
        }
        return true;
    }

    long long factorial(int num)
    {
        long long i;
        long long f=1;
        for(i=1;i<=num;i++)
        {
            f=f*i % (int)(pow(10,9) + 7);
        }
        return f;
    }
    int numPrimeArrangements(int n) {
        int i,p=0,np=0;
        for(i=1;i<=n;i++)
        {
            if(prime(i))
            p++;
            else
            np++;
        }
        long long pf,npf;
        pf=factorial(p);
        npf=factorial(np);

        // double ans=pf+npf;
        // double finalans;
        // finalans=ans%(pow(10,9)+7);

        long long ans = (long long) pf * npf;
        long long finalans = ans % (int)(pow(10,9) + 7);
        return finalans;
    }
};
