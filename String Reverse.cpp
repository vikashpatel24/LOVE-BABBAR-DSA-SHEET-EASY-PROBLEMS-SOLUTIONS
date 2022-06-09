#include<bits/stdc++.h>
string stringReverse(string S) {
    int l=S.size();
    string st;
    while(l--)
    {
        st+=S.at(l);
    }
    return st;
}