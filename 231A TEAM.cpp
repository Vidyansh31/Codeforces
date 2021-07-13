#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; //Enter the number of questions
    int a,b,c;

        int count = 0;
    for(int i = 0; i <n;i++)
    {
        
        cin >> a >> b >>c;
        if(a == 1 && b == 1 && c == 0)
        {
            count++;
        }
        else if(a == 0 && b == 1 && c == 1)
        {
            count++;
        }
        else if(a == 1 && b == 0 && c == 1){
             count++;
        }
        else if(a == 1 && b == 1 && c ==1){
            count++;
        }
        
    }
    cout<<count<<endl; // this count represents the number of questions they are going to answer

    return 0;
}
