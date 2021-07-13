#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; // n represents the number of participants and k represents the k-th place participants

    cin >> n >> k;

    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i]; // Here we make a array of the participants score.
    }

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (a[i] >= a[k] && a[i] > 0) // Here we compare the score of every participants with the k-th participants
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
