#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==n-1){
                cout<<j+1<<" ";
            }
            else{
                if((j>0)&&(j<i)){
                    cout<<"  ";
                }
                else{
                        cout<<j+1<<" ";
                    }
                }
            }
       cout<<endl;
    }
    return 0;
}
