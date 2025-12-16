#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#include<cmath>
 
int main(){
    int A;
    double H;
    long long B;
    cout << "Enter your age: ";
    cin >> A ;
 
    if(A <= 25 ){       
        cout << "Enter your height: ";
        cin >> H ; 
           if(H < 100 ){
                cout << "Your character = Chopper";
                
            }
            else if (H < 180 && H >= 100){
                cout << "Your character = Usopp";
                
            } 

            else if (H >= 180 ){
                cout << "Enter your bounty: ";
                cin >> B; 
                    if (B > 11 * pow(10,8)){
                        cout << "Your character = Zoro";
                        
                    }
                        else{
                        cout << "Your character = Sanji";
                        
                    }
                }
                }
    else if ( A <= 60){
                cout << "Enter your bounty: ";
                cin >> B ;

                if (B > 5* pow(10,8)){
                    cout << "Your character = Jinbe";
                    
                }
                else{
                    cout << "Your character = Franky";
                    
                }
            }
    else {
        cout << "Your character = Brook";
        
    }
            
return 0;
}

    
    




