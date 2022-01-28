#include <iostream>
using namespace std;
int main(){
    int odd = 0;
    int even = 0;
    int N, temp;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> temp;
        if (temp % 2 ==0){
        even++;
        }else{
        odd++;
        }
    }
    while (odd > even){
            even++;
            odd-=2;
        }
    if(even > odd +1){
        even = odd + 1;
    }
    cout << even + odd;
    return 0;
}