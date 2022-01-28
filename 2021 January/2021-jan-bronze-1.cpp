#include <iostream>
using namespace std;

int main(){
    string sequence, heard;
    /***
    for(int i=0; i<26; i++){
        char temp;
        cin >> temp;
        charsequence[i] = (int) temp - 97;
        }
        ***/

    cin >> sequence >> heard;
    string allchars = "";
    for (int runs =1 ; true; runs ++){
        int foundnum = 0;
        allchars += sequence;
        for (int i=0; i< (int) allchars.size() && foundnum<heard.size(); i++){
            if(allchars[i] == heard[foundnum]){
            foundnum++;
            }
        }
        if (foundnum == (int) heard.size()){
        cout << runs;
        return 0;
        }

    } 


}