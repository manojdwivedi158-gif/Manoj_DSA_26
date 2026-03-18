// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     int k,n;
//     cin>>k>>n;
//     long long maxi=0;
//     long long sum=0;
//     vector<int> boards(n);
    
//     for(int i=0;i<n;i++){
//         cin>>boards[i];
//     }

//     for(int i=0;i<n;i++){
//         sum+=boards[i];
//         maxi=max(maxi,(long long)boards[i]);
//     }
//     long long s=maxi;
//     long long e=sum;
//     int ans=0;
//     while(s<=e){
//         long long m=s+(e-s)/2;
//         if(canpaint(boards,k,m)){
//             ans=m;
//             e=m-1;

//         }
//         else{
//             s=m+1;
//         }

//     }
//     cout<<ans<<endl;
//     return 0;
// }