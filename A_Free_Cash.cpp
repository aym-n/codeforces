#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    n--; // skip the first person
    int ph, pm;
    cin >> ph >> pm;
    pm = pm + ph * 60;

    int maxCash = 1;
    int currCash = 1;

    while(n--){
        int h, m;
        cin >> h >> m;
        m = m + h * 60;

        if(pm == m){
            currCash += 1;
            maxCash = max(maxCash, currCash);
        }
        else{
            currCash = 1; 
        }

        pm = m;
    }

    cout << maxCash << "\n";
    return 0;
}