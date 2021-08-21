#include<bits/stdc++.h>
using namespace std;
#define NUMBER_OF_CASES 20
// Define the number of test cases to be generated
#define MAXNUMN 20
#define MAXNUMT 100
int main()
{
    freopen ("Test_Cases.in", "w", stdout);
    //For random values every time
    srand(time(NULL));
    for(int i=0; i<NUMBER_OF_CASES; i++)
    {
        int T = 1 + rand() % MAXNUMT;
        printf("%d\n", T);
        for(int j=0; j<T; j++)
        {
		    int N = 1 + rand() % MAXNUMN;
		    printf("%d\n", N);
        }
    }
    fclose(stdout);
    return(0);
}
