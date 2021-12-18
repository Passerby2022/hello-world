#include <stdio.h>
//#include <stdlib.h>

int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

int Count_Digit (const int N, const int D)
{
    int cnt = 0, m;

    /*if (N < 0){
        m = -N;
    }else {
        m = N;
    }*/
    m = abs(N);

    if (m == 0){
        cnt = 1;
    }

    while (m > 0)
    {
        if (m % 10 == D)
        {
            cnt++;
        }
        m = m / 10;
    }

    return cnt;
}