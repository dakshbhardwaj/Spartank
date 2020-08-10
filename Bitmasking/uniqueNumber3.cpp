//trick 3n + 1

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int cnt[64]={ 0 };
    int n, no;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>no;
        //update the count array
        int j=0;
        while (no > 0) {
            int last_bit = (no&1);
            cnt[j] += last_bit;
            j++;
            no= no >>1;
        }
    }

    //iterate over the array reduce by mod3 
    int p = 1;
    int ans = 0;
    for (int i=0; i<64;i++) {
        cnt[i] %= 3;
        ans += (cnt[i] * p);
        p = p * 2; //p = p<<1;
    }

    cout<<ans<<endl;



    return 0;
}