#include<bits/stdc++.h>
using namespace std;
#define NUMBER_OF_CASES 50
// Define the number of runs for the test data generated
#define ll long long
// Since N < 10^6
#define MAXNUM 1000000
int main()
{
    freopen ("Test_Cases.in", "w", stdout);
    //For random values every time
	srand(time(NULL));
    for(int i=0; i<NUMBER_OF_CASES; i++)
    {
        // Number of array elements
		ll N = 1 + rand() % MAXNUM;
        // Since sum of array elements must not exceed 2*10^9 
        ll MAX = 2000000000/N;
		// First print the number of array elements
		printf("%lld\n", N);
		// Then print the array elements, space-separated
		for (ll j=1; j<=N; j++)
			printf("%lld ", rand() % MAX);
        printf("\n");
        // Print N-1 pairs, signifying cities that are connected by road
        for (ll j=1; j<N; j++)
        {
            ll a = rand() % N;
            ll b = rand() % N;
            if(a==b)    b++;
            printf("%lld %lld\n", a, b);
        }
    }
    fclose(stdout);
    return(0);
}
