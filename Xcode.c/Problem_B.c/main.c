#include <stdio.h>
#include <math.h>

int main()
{
    double temp, answer;
    double n, p;
    while (scanf("%lf %lf", &n, &p) != EOF)
    {
        if(n < 1 || n > 200)
        {
            return 0;
        }
        
        if(p < 1 || p > pow(10,101))
        {
            return 0;
        }
        
        if (n > p)
        {
            temp = n;
            n = p;
            p = temp;
        }
        
        answer = pow(p, 1.0/n);
        
        
        printf("%.0lf\n", answer);
        
    }
    return 0;
}
