#include<iostream>
#include <string>

using namespace std;

int main()
{
    int n , t ;
    string s;
    cin >> n >> t >> s;

    for ( int i = 0 ; i < t ; i++ ){
        for ( int i = 0 ; i < n-1 ; i++ ){
            if ( s[i] == 'B' && s[i+1] == 'G' ){
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
    }
    cout << s;
    
}