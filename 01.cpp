# include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;
    int arr[a];
    
    for (int i = 0; i<a;i++){
        cin >> arr[i];
    }
    int passmarks;
    cin >> passmarks;
    
    int counterpass = 0;
    int fail = 0;
    
    for (int i = 0; i<a; i++){
        if (arr[i] >=passmarks){
            counterpass +=1;
        }
        else {
            fail += 1;
        }
    }
    
    cout << "Pass: "<< counterpass<< endl;
    cout << "Fail: " <<fail<< endl;
    
    return 0;
}