# include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;
    int arr[a];
    
    for (int i = 0; i<a;i++){
        cin >> arr[i];
    }
    
    int twocounter = 0;
    int onecounter = 0;
    int zercounter = 0;
    
    for (int i = 0; i<a; i++){
        if (arr[i] == 0){
            zercounter += 1;
        }
        else if (arr[i] == 1){
            onecounter +=1;
        }
        else if(arr[i] == 2){
            twocounter +=1;
        }
    }
    
    for (int i = 0; i< twocounter; i++){
        cout << 2<< " ";
    }
    for (int i = 0; i< onecounter; i++){
        cout << 1<< " ";
    }
    for (int i = 0; i< zercounter; i++){
        if (i != zercounter -1){
            cout << 0<< " ";
        }
        else{
            cout << 0<< endl;
        }
        
    }
    
    return 0;
}