#include <bits/stdc++.h>
using namespace std;


int main(){
    int plaintext[8],key[10];
  /*  for(int i=0;i<8;i++){
           cin>>plaintext[i];
    }*/
    for(int i=0;i<10;i++){
           cin>>key[i];
    }
    int p10[10] ={3,5,2,7,4,10,1,9,8,6};
    int p8[8] = {6,3,7,4,8,5,10,9};
    int p4[4] = {2,4,3,1};
    
    vector <int> v(10);
    for(int i=0;i<10;i++){
        v[i] = key[p10[i]-1];
    }
    
    for(auto it: v){
        cout<<it<< " ";
    }
    cout<<endl;
    //seperate in two halves
    int lh[5],rh[5];
    for(int i=0;i<5;i++){   
        lh[i] = v[i];
    }
    for(int i=5;i<10;i++){   
        rh[i-5] = v[i];
    }
// Shifting left half
    int temp_lh = lh[0];
    for(int i = 0; i < 4; i++) {
        lh[i] = lh[i + 1];
    }
    lh[4] = temp_lh;

    // Shifting right half
    int temp_rh = rh[0];
    for(int i = 0; i < 4; i++) {
        rh[i] = rh[i + 1];
    }
    rh[4] = temp_rh;
    
    for(int i=0;i<5;i++){
        cout<<lh[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<rh[i]<<" ";
    }
    
    vector<int>k1;
    for(int i=0;i<5;i++){
        k1.push_back(lh[i]);
    }
    for(int i=0;i<5;i++){
        k1.push_back(rh[i]);
    }
    
    for(auto it:k1){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int> k1_p8(8);
    for(int i=0;i<8;i++){
        k1_p8[i] = k1[p8[i]-1];
    }
    
    for(auto it: k1_p8){
        cout << it << " ";
    }
    cout << endl;
    //left shifting two times
   // Applying left shift twice on left half
    for(int shift = 0; shift < 2; shift++) {
        int temp_lh = lh[0];
        for(int i = 0; i < 4; i++) {
            lh[i] = lh[i + 1];
        }
        lh[4] = temp_lh;
    }

    // Applying left shift twice on right half
    for(int shift = 0; shift < 2; shift++) {
        int temp_rh = rh[0];
        for(int i = 0; i < 4; i++) {
            rh[i] = rh[i + 1];
        }
        rh[4] = temp_rh;
    }
    
    for(int i=0;i<5;i++){
        cout << lh[i] << " ";
    }
    for(int i=0;i<5;i++){
        cout << rh[i] << " ";
    }
    
    //now applying p4 on these two halves
       vector<int>k2;
    for(int i=0;i<5;i++){
        k2.push_back(lh[i]);
    }
    for(int i=0;i<5;i++){
        k2.push_back(rh[i]);
    }
    cout<<endl;
    vector<int> k2_p8(8);
    for(int i=0;i<8;i++){
        k2_p8[i] = k2[p8[i]-1];
    }
    
    for(auto it: k2_p8){
        cout << it << " ";
    }
    cout << endl;
    cout<<"Key Generation Done"<<endl;
    
}
