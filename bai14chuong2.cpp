#include <iostream>
using namespace std;
int r=0;
int main(){
int n;
cin>>n;
int mt[n][n];
int k=0;
int i=0,j=0;
int l=0,t=0,r=n,b=n;
int flag=1;

while (k!=n*n){
    mt[i][j]=++k;
    if (flag==1) {
        if (j!=r-1) j++;
        else {
            flag=2;
            i++;
            r--;
        }
    }
    else if (flag==2){
        if (i!=b-1) i++;
        else {
            flag=3;
            j--;
            b--;
        }
    }
    else if (flag==3){
        if (j!=l) j--;
        else {
            flag=4;
            i--;
            l++;
        }
    }
    else {
        if (i!=t+1) i--;
        else {
            flag=1;
            j++;
            i=++t;
        }
    }
}
for (int i=0;i<n;i++){
    for (int j=0;j<n;j++)
        cout<<mt[i][j]<<" ";
    cout<<endl;   
}
return 0;
}

