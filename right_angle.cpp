#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    //ios_base::fmtflags flags = cout.flags();
    cout.setf(ios::right);              /////// Justify output text to right side.(By default output text is left justified.)
    int counter = 1;
    for(int i = 0; i <= 3; i++){
        for(int j = 3; j >= 0; j--){
            if(j<=i)cout<<setw(3)<<counter++;else cout<<setw(3)<<" ";  /////// Set width of each letter 3 for better arrangement.
        }
        cout<<endl;
    }
}

