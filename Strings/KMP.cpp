#include <bits/stdc++.h> 
using namespace std;
      
void lps_func(string txt, vector<int>&Lps){
    Lps[0] = 0;                   
    int len = 0;
    int i=1;
    while (i<txt.length()){
        if(txt[i]==txt[len]){   
            len++;
            Lps[i] = len;
            i++;
            continue;
        }
        else{                   
            if(len==0){         
                Lps[i] = 0;
                i++;
                continue;
            }
            else{              
                len = Lps[len-1];
                continue;
            }
        }
    }
}


void KMP(string pattern,string text){
    int n = text.length();
    int m = pattern.length();
    vector<int>Lps(m);
    
    lps_func(pattern,Lps); // This function constructs the Lps array.
    
    int i=0,j=0;
    while(i<n){
        if(pattern[j]==text[i]){i++;j++;} // If there is a match continue.
        if (j == m) { 
            cout<<i - m <<' ';    // if j==m it is confirmed that we have found the pattern and we output the index
                                  // and update j as Lps of last matched character.
            j = Lps[j - 1]; 
        } 
        else if (i < n && pattern[j] != text[i]) {  // If there is a mismatch
            if (j == 0)          // if j becomes 0 then simply increment the index i
                i++;
            else
                j = Lps[j - 1];  //Update j as Lps of last matched character
        }
    }
}


int main()
{
    string text = "ababcdabcb";
    string pattern = "abc";
    KMP(pattern, text);
    
    return 0; 
}