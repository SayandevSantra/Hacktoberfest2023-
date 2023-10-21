class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long sum=0;
        // Write Your Code here
        for(int i=1;i<=N;i++)
        {
            sum=sum+(N/i)*i;
        }
        return sum;
    }
};
