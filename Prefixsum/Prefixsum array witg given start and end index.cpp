Given an array of size N with all zero values and given q query with start and end index  and also  value  , add the valye to the following sub array 

I/p
5 5
2 4 1
2 3 2
1 3 5
0 3 6
0 4 4
o/p
10 15 18 31 36


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> diff(n, 0);

    while (q--) {
        int start, end, value;
        cin >> start >> end >> value;

        diff[start] += value;
        diff[end] += value;

        
    }
 

    

    // Final array by prefix sum
    vector<int> v(n);
    v[0] = diff[0];
    for (int i = 1; i < n; i++) {
        v[i] = v[i - 1] + diff[i];
    }

    for (auto x : v)
        cout << x << " ";
}
