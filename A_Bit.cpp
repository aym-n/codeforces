#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int value = 0;

    while(n--){
        char c;
        cin >> c;
        while(c != '\n'){
            c = cin.get();
            if(c == '+'){
                c = cin.get();
                value++;
            }
            else if(c == '-'){
                c = cin.get();
                value--;
            }
            else{
                break;
            }
        }
    }

    cout << value << "\n";
    return 0;
}