#include <iostream>
using namespace std;

class SecretCode{
    public:
       string msg;
       SecretCode(string msg): msg(msg){
           
           for(int i= 0; msg[i] != '\0'; i++){
               if(msg[i] >= 'a' && msg[i] <= 'z'){
                   msg[i] = msg[i] + 3;
                   cout << msg[i];
               }
               else{
                   cout << " error ";
               }
           }
       }
};
int main() {
    SecretCode s1("hello");
    return 0;
}
