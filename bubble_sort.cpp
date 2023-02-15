#include <iostream>
#include <map>
#include <vector>


using namespace std;

int main(){
    vector<int> vec;
    int n;
    cin>>n;
    int value;
    for(int i{0};i<n;i++){
        cin>>value;
        vec.push_back(value); 
    }
    int count=1;
    for(int i{0};i>-1;i++){
        
        if(i==n){
            i=0;
            if(count<2){
                break;
            }
            count=1;
            
        }

        if(vec[i]>vec[i+1]){
            vec[i+1]=vec[i]+vec[i+1];
            vec[i]=vec[i+1]-vec[i];
            vec[i+1]=vec[i+1]-vec[i];
            count++;

        }

        
    }
    for(int i{0};i<n;i++){
        cout<<vec[i]<<',';
    }
   
    return 0;
}
    