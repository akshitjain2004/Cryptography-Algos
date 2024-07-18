// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
//Substitution cypher
cout<<"Starting Encryption..."<<endl;
string s;
cin>>s;
int key;
cin>>key;
int ans;
int arr[s.length()];
for(int i =0;i<s.length();i++){
int conversion = int(s[i])-'a';
ans = (conversion+key);
int fin = ans%26;
arr[i] = fin;
}
for(int i=0;i<s.length();i++){
    cout<<char(arr[i]+'a')<<endl;
}
cout<<"Encryption Done..."<<endl;

cout<<"Starting decryption..."<<endl;
int narr[s.length()];
for(int i =0;i<s.length();i++){
int newans;
newans = (arr[i]-key);
int fin;
if(newans<0){
    newans = 26-abs(newans);
    fin = newans;
}
else{
 fin = newans%26;
}

narr[i] = fin;
}
for(int i=0;i<s.length();i++){
    cout<<char(narr[i]+'a')<<endl;
}
cout<<"Decryption done..."<<endl;

}
