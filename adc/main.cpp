#include <iostream>

using namespace std;

int main()
{
   string s = "abcdefghijklmnopqrstuvxyzw";
   string a = "abcdefghjiklmnopqrstuvxyzw";
   int v=0;

    for(int j=0; j<a.length();j++){
       for(int i=0; i<s.length(); i++){
          if(s[i] == a[j]){
            v++;
            break;
          }
       }
    }
    cout<<v<<"v";
}
