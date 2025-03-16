#include<iostream>
using namespace std;

int main(){
    int n,a,b,c;cin>>n>>a>>b>>c;
    if(b>a){swap(a,b);}
    if(c>a){swap(c,a);}
    if(c>b){swap(c,b);}
    if(n%c==0){
        cout<<n/c;
        return 0;
    }
    int result=0,new_r=0;
    for(int i=0;i<(n/c)+2;i++){
        if((n-((1+n/c)-i)*c)%b==0){if(result<(n-((1+n/c)-i)*c)/b+((1+n/c)-i)){result=(n-((1+n/c)-i)*c)/b+((1+n/c)-i);}}
        else if((n-((1+n/c)-i)*c)%a==0)if(result<(n-((1+n/c)-i)*c)/a+((1+n/c)-i)){{result=(n-((1+n/c)-i)*c)/a+((1+n/c)-i);}}
    }
    if(result==0){
        if(n%a==0){result=n/a;}
        else{
            for(int i=1;i<(n/a)+1;i++){
                for(int j=0;j<((n-(i*a))/b)+1;j++){
                    for(int k=0;k<((n-(i*a+j*b))/c)+1;k++){
                        if(i*a+j*b+k*c==n){
                            cout<<i+j+k;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout<<result;
    return 0;
}