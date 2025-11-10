#include <iostream>
#include<string>
using namespace std;

class SecretCode{
    public:
       string msg;
       
       SecretCode() {
           cout << "Enter your msg : " ;
           getline(cin, msg);
           cout << endl;
       }
       
       void enCode(){
           cout << "Secret Message is: \"" ; 
           for(int i= 0; msg[i] != '\0'; i++){
               if(msg[i] >= 'a' && msg[i] <= 'z'){
                   if(msg[i] >= 'x' && msg[i] <= 'z'){
                        switch(msg[i]){
                            case 'x':
                                msg[i] = 'a';
                                break;
                            
                            case 'y':
                                msg[i] = 'b';
                                break;
                            
                            case 'z':
                                msg[i] = 'c';
                                break;
                        }
                    }
                    else{
                        msg[i] += 3;
                    }
                   cout << msg[i];
               }
              
               else{
                   cout << " ";
               }
           }
           
           cout << "\"" <<  endl;
       }
       
       void deCode(){
           cout << "Orignal Message is : \"" ;
           for(int i= 0; msg[i] != '\0'; i++){
               if(msg[i] >= 'a' && msg[i] <= 'z'){
                   if(msg[i] >= 'a' && msg[i] <= 'c'){
                        switch(msg[i]){
                            case 'a':
                                msg[i] = 'x';
                                break;
                            
                            case 'b':
                                msg[i] = 'y';
                                break;
                            
                            case 'c':
                                msg[i] = 'z';
                                break;
                        }
                    }
                    else{
                        msg[i] -= 3;
                    }
                   cout << msg[i];
               }
               else{
                   cout << " ";
               }
           }
           cout << "\"" << endl;
       }
       
};
int main() {
    SecretCode s1;
    s1.enCode();
    s1.deCode();
    return 0;
}
