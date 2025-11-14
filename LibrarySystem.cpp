#include <iostream>
#include <map>
using namespace std;

class Library {
    public:
        int choice;
        int exit = 1;
        map < string, int> comp;
        map < string, int> chem;
        map < string, int> Phy;
        
        
        void BooksRecord(){
            comp ["Mathametics"] = 10;
            comp ["Computer   "] = 15 ;

            chem ["Mathametics"] = 15;
            chem ["Chemistry  "] = 20 ;
            
            Phy ["Physics     "] = 23;
            Phy ["Calculus    "] = 25 ;
            
        }
             void PrintBooks(){
cout << "\nComputer Books              Quantity" << endl;
            for (auto i : comp) {
                cout << i.first << "                    " << i.second << endl;
            }
            
            cout << "\nChemistry Books             Quantity" << endl;
            for (auto j : chem) {
                cout << j.first << "                     " << j.second << endl;
            }
            
            cout << "\nPhysics Books               Quantity" << endl;
            for (auto k : Phy) {
                cout << k.first << "                    " << k.second << endl;
            }}   
        void checkChoice(){
                switch (choice) {
                    case 1:
                        PrintBooks();
                        break;
                        
                    case 2:
                        IssueBooks();
                        break;
                        
                    case 3:
                                        ReturnBooks();
                        break;
                        
                    case 4:
                        PrintBooks();
                        cout << "Thanks for comming" << endl;
                        exit = 0;
                        break;
                        
                    default:
                        cout << "Error! Enter choice between 1 - 4." << endl;
                        break;
                }
        }
        
        Library (){
            BooksRecord();
            while(exit) {
                cout << "\n        WELCOME TO LIBRARY          " << endl;
                cout << "1. Visit Library" << endl;
                cout << "2. Issuse Books" << endl;
                cout << "3. Return Books" << endl;
                cout << "4. Exit" << endl;
                
                cout << "\nEnter your choice : " ;
                cin >> choice;
                
                checkChoice();
            }
        }
        
        void IssueBooks(){
            int choicedep, quan;
            string sub;
            
            cout << "\nFrom Which department you want to issse book : " ;
            cout << "\n1. Computer " << endl;
            cout << "2. Chemistry " << endl;
            cout << "3. Physics " << endl;
            
            cout << "\nEnter your choice : ";
            cin >> choicedep;
            
            cout << "\nHow many books do you want to issue : ";
            cin >> quan;
                    
            for(int i = 0; i < quan ; i++){
                cout << "\nEnter complete name of subject " << i+1 << " as maintioned above : ";
                cin >> sub;
                
                switch(choicedep){
                    case 1:
                        if(sub == "Computer"){
                        cout << endl << sub << " book  issued successfully " << endl;    comp["Computer   "]--;
                        }
                        else if(sub == "Mathematics"){
                        cout << endl << sub << " book  issued successfully " << endl;    comp["Mathametics"]--;
                        }
                        break;
                        
                    case 2:
                        if(sub == "Chemistry"){
                        cout << endl << sub << " book  issued successfully " << endl;    chem["Chemistry  "]--;
                        }
                        else if(sub == "Mathematics"){
                         cout << endl << sub << " book  issued successfully " << endl;   chem["Mathametics"]--;
                        }
                        break;
                        
                    case 3:
                        if(sub == "Physics"){
                        cout << endl << sub << " book  issued successfully " << endl;    Phy["Physics     "]--;
                        }
                        else if(sub == "Calculus"){
                        cout << endl << sub << " book  issued successfully " << endl;    Phy["Calculus    "]--;
                        }
                        break;
                        
                    default:
                        cout << "Wrong Choice!!!" << endl;
                 }
            }
        }
        
         void ReturnBooks(){
            int choicedep, quan;
            string sub;
            
            cout << "\nTo Which department you want to return books : " ;
            cout << "\n1. Computer " << endl;
            cout << "2. Chemistry " << endl;
            cout << "3. Physics " << endl;
            
            cout << "\nEnter your choice : ";
            cin >> choicedep;
            
            cout << "\nHow many books do you want to return : ";
            cin >> quan;
                    
            for(int i = 0; i < quan ; i++){
                cout << "\nEnter complete name of subject " << i+1 << " as maintened above : ";
                cin >> sub;
                
                switch(choicedep){
                    case 1:
                        if(sub == "Computer"){
                        cout << endl << sub << " book  returned successfully " << endl;    comp["Computer   "]++;
                        }
                        else if(sub == "Math"){
                        cout << endl << sub << " book  returned successfully " << endl;    comp["Mathametics"]++;
                        }
                        break;
                        
                    case 2:
                        if(sub == "Chemistry"){
                        cout << endl << sub << " book  returned successfully " << endl;    chem["Chemistry  "]++;
                        }
                        else if(sub == "Math"){
                         cout << endl << sub << " book  returned successfully " << endl;   chem["Mathametics"]++;
                        }
                        break;
                        
                    case 3:
                        if(sub == "Physics"){
                         cout << endl << sub << " book  returned successfully " << endl;   Phy["Physics     "]++;
                        }
                        else if(sub == "Calculus"){
                        cout << endl << sub << " book  returned successfully " << endl;    Phy["Calculus    "]++;
                        }
                        break;
                        
                    default:
                        cout << "Wrong Choice!!!" << endl;
                 }
            }
        }
};

int main() {
    Library s1;
    return 0;
}
