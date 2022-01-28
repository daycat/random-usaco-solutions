#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N;
    cin >> N;
    int cowheight[N];
    int stallheight[N];
    long long methods = 1;
    for(int i=0; i<N; i++){
        cin >> cowheight[i];
    }for (int i=0; i<N; i++){
        cin >> stallheight[i];
    }
    sort(cowheight, cowheight + N, greater<int>());
    for(int i=0; i<N; i++){
        int temp = 0;
        for(int j=0; j<N; j++){
            if(cowheight[i]<=stallheight[j]){
                temp++;
            }
        }
        methods = methods * (temp - i);
    }
    cout << methods;
    return 0;


}