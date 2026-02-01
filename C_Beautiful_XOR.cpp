#include<iostream>
#include<cmath>
using namespace std;


int main() {
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        int p = log2(a) + 1;
        int q = log2(b) + 1;

        if(p < q){
            cout << "-1" << endl;
            continue;
        }

        if(p == q){
            cout << "1" << endl << (a ^ b) << endl;
        }

        if(a == b){
            cout << "0" << endl;
            continue;
        }

        int x = 0;
        int y = 0;
        for(int i = 0; i <= p; i++){
            int mask = (1 << i);
            int bitA = (a & mask) > 0 ? 1 : 0;
            int bitB = (b & mask) > 0 ? 1 : 0;

            if(bitA && bitB)
                continue;
            
            x = x | (bitA << i);
            y = y | (bitB << i);
        }

        cout << "2" << endl << y << " " << x << endl;


    }
}