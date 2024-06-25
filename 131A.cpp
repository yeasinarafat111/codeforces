#include <bits/stdc++.h>

using namespace std;

int main(){
    string str,k;
    char u;
    cin>>str;
    bool c = true;
    for(int i=1; i<str.length(); i++){
       if(islower(str[i]))
       {
        c= false;

       }


    }

    if(c==true){
        for(int j=0; j<str.length(); j++)
        {
            if(islower(str[j]))
             u = toupper(str[j]);

              else
               u = tolower(str[j]);
               cout<<u;

        }
       



    }
    else 
    cout<<str;




    return 0;
}