//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string str)
    {
        int count = 0;
        for(int i =1; i<str.size(); i++){
            if(str[count]!=str[i]){
                str[++count] = str[i];
            }
        }
        //cout << str << " " << count << endl;
        return str.substr(0, count+1);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends