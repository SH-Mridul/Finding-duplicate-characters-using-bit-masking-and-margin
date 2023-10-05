#include <bits/stdc++.h>
using namespace std;

int main() {
   string input;
   cin>>input;
   
   int H = 0,X = 0;
   bool isDup = false;
   
   
   for(int i = 0; i<input[i] != '\0'; i++){
     X = 1;
     //left shift
     X = X<<input[i] - 'a';
     
      //bit masking
     if(X&H){
        cout<<input[i]<<",";
        isDup = true;
     }else{
        //bit merging
        H = X|H;
     }
     
     
   }
   
   if(isDup){
    cout<<"is duplicate!";
   }else{
    cout<<"no duplicate!";
   }
   return 0;
}






