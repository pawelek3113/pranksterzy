#include <iostream>
using namespace std;

// zagadka od pateca

int main(){
    bool pokoje[1000];
    for(int i = 1; i<=1000; i++){
        pokoje[i] = 1;

    }
    

    for(int j = 1; j <=1000; j++){
        for(int i = 1; i<=1000; i++){
            if(j >= 2 && i % j == 0){
                if(pokoje[i] == 1){
                    pokoje[i] = 0;
                }
                else{
                    pokoje[i] = 1;
                }
            }
        }
    }

    for(int i = 1; i<=1000; i++){
        cout << pokoje[i];
    }
    cout << "\n";
    for(int i = 1; i <=1000; i++){
        if(pokoje[i] == 1){
            cout << i << ",";
        }
    }

    return 0;
}