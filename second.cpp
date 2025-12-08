#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
   //1  first question count digit
//    int num=28461;
//    int cnt=0;
//    while(num!=0){
//      num/=10;
//      cnt++;
//    }
//    cout<<cnt;
//2 second method
// int num=6256358;
// int cnt=(int) (log10(num)+1);
// cout<<cnt;
//  2 question
 //reverse number
//  int num=565116;
//  int last=0;
//  int rev=0;
//  while(num!=0){
//     last=num%10;
//     rev=rev*10+last;
//     num/=10;

//  }
//  cout<<rev;
// int num=565116;
// int rev=0;
//  int flast=0;
//  int llast=0;
//  while(num!=0){
//     flast=num%10;
//     break;   

//  }
//  for(int i=num;num!=0;num/=10){
//   int l=num%10;
//   rev=rev*10+l;

   
//  }
//   for(int i=num;num!=0;num/=10){
//     llast=num%10;

   
//   }
//   cout<<llast+flast;
//question 
// armstrong
//  int num=371;
//  int org=num;
//   int last=0;
//   int sum=0;
//   while(num!=0){
//      last=num%10;
//      sum=sum+(last*last*last);
//      num/=10;

//  }
//  if(sum==org){
//     cout<<"yes";
//  }
//  else{
//     cout<<"bno";
//  }
//all the divisor of num
  //prime number
// int cnt=0;
// for(int i=1;i<num;i++){
//  if(num%i==0){
//     cnt++;
//  }
// }
// if(cnt>2){
//     cout<<"no";
// }
// else{
//     cout<<"yes";
// }
 
// for(int i=2;i*i<=num;i++){
//  if(num%i==0){
//     cout<<"yes";
//  }
//  else{
//     cout<<"no";
//  }
//age e number 
// int num =20;
// for(int NUM=2;NUM<=num;NUM++){
//   bool isprime=true;
//    for(int i=2;i*i<=num;i++){
//       if(NUM%i==0){
//          isprime=false;
//          break;
//       }

//    }
//    if(isprime){
//       cout<<NUM<<" ";
//    }
// }
//optomised
// int num=20;
// vector<bool>v(num+1,true);
// int cnt=0;
// for(int i=2;i<num;i++){
//    if(v[i]){
//     cnt++;
//     for(int j=i*2;j<num;j=j+i){
//       v[j]=false;
//     }
//    }
// }
// cout<<cnt;
// int num=20;
// vector<bool>v(num+1,true);

// for(int i=2;i<num;i++){
//    if(v[i]){
//     cout<<i;
//     for(int j=i*2;j<num;j=j+i){
//       v[j]=false;
//     }
//    }
// }
//divisor of number4
// vector<int>v;
// int num=36;
// for(int i=1;i*i<=num;i++){
//    if(num%i==0){
//        v.push_back(i);
//       if((num/i)!=i){
//       v.push_back(num/i);
//       }
   
//    }
   

// }
//  sort(v.begin(),v.end());
//    for(auto it:v){
//       cout<<it<<" "; 
//    }

// }
//prime numberr
// int num=4;
// int cnt=0;
// for(int i=1;i*i<=num;i++){
//    if(num%i==0){
//   cnt++;
//   if(num/i!=i){
//    cnt++;
//   } 
//    }
// }
// if(cnt==2){
//    cout<<"yes";
// }
// else{
//    cout<<"no";
// }
// int gcd=0;
// int num1=20;
// int num2=40;
// for(int i=1;i<=num1;i++){
//    if(num1%i==0 && num2%i==0){
//       gcd=i;
//    }

// }
// cout<<gcd;
//2 metho0f
//int gcd=0;
//int num1=20;
//int num2=40;
//for(int i=num1;i>=1;--i){
//   if(num1%i==0 && num2%i==0){
//   cout<<i;////
  //  break;    
   //}

//}/
 int a=20;
int b=40;
// while(a>0 && b>0){
//    if(a>b){
//       a=a%b;
//    }
//    else{
//       b=b%a;
//    }
// }
// if(a==0) cout<<b;
// else cout<<a;
//lcm
//int max=b;
//int ans =0;
// while(true){
//    if(max%a==0 && max%b==0){
//       ans=max;
//       break;
//    }
//   max++;
// }
// cout<<ans;

// }
// for(int i=max; ;i++){
//   if(i%a==0 && i%b==0){
//    ans=i;
//    break;
//   }

// }
// cout<<ans;
//lcm optiomised
// int gcd=0;
// int lcm=0;
// int x=a;
// int y=b;
// while(a >0 && b>0){
//    if(a>b){
//       a=a%b;
//    }
//    if(b>a){
//       b=b%a;
//    }
// }
// if(a==0) gcd=b;
// else gcd=a;

// cout<<gcd<<" ";
// lcm=(x*y)/gcd;
// cout<<lcm;
//euclide man
// while(b!=0){
//   int temp=b;
//   b=a%b;
//   a=temp;
// }
// cout<<a;
// rd verse na dgcd euclid

 


}