#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#include<cmath>
 int main(){
    int A,H,B;
    cout << "Enter your age: ";
    cin >> A ;
 
    if(A <= 25 ){       
        cout << "\nEnter your height: ";
        cin >> H ; 
           if(H < 100 ){
                cout << "\nYour character = Chopper";
                return 0;
            }
            else if (H < 180 && H >= 100){
                cout << "\nYour character = Usopp";
                return 0;
            } 

            else if (H >= 180 ){
                cout << "\nEnter your bouty: ";
                cin >> B ;}
                    if (B > 11 * pow(10,6)){
                        cout << "\nYour character = Zoro";
                        return 0;
                    }
                        else{
                        cout << "\nYour character = Sanji";
                        return 0;
                    }
                    return 0;
                }
    else if ( A <= 60){
                cout << "\nEnter your bouty: ";
                cin >> B ;

                if (B> 5* pow(10,10)){
                    cout << "\nYour character = Jinbe";
                    return 0;
                }
                else{
                    cout << "\nYour character = Franky";
                    return 0;
                }
            }
    else {
        cout << "\nYour caharacter = Brook";
        return 0;
    }
            }

    
    




