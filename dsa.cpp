#include <bits/stdc++.h>
using namespace std;
// We have a string which only contains numbers(0-9) and letters(a-z). Please find the longest substring which has equal count of numbers and letters.
string findLongestSubstring(string& str){
    int maxLength=0;
    int startingIndex=0;
    for(int i=0; i<size(str); i++){
        int countNumbers=0;
        int countLetters=0;
        for(int j=i; j<size(str); j++){
            // if('0'<=str[j] && str[j]<='9') 
            if (isdigit(str[j])) countNumbers++;
            else countLetters++;
            if(2*countLetters>maxLength && countNumbers==countLetters){
                startingIndex=i;
                maxLength=countLetters*2;
            }
        }
    }
    string ans=str.substr(startingIndex,maxLength);
    return ans;
}
int main(){
    string str1="dkyXy23dY50XadlydY4D";
    string str2;
    cout<<findLongestSubstring(str1);
}