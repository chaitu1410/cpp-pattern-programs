#include<iostream>

using namespace std;

int main(){
    int lb=3,ub=4,c=1;
    for(int i = 0; i <= 7; i++){
        for(int j = 0; j <= 7; j++){
            if(j >= ub-c && j <= lb+c){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        if(i%2 == 1){
            c++;
        }
        cout<<endl;
    }


    return 0;
}
