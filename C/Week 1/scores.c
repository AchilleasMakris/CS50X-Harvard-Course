#include <stdio.h>
#include <cs50.h>

const int N = 3;

int main(void)
{

    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }


    printf("Avarage: %f\n", (scores[0] + scores[1] + scores[2]) / (float) N);
}
