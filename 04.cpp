#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    
    if (a != 0 and b != 0){
        if (a == b)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    else if(a == 0 and b ==1){
        cout << "Yes\n";
    }
    else if  (a== 1 and b == 0){
        cout << "Yes\n";
    }
    else {
        cout << "No"<< endl;
    }
    

    return 0;
}
