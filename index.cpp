#include <iostream>
#include<string>
using namespace std;
class Friend {
    public:
string name;
string age;
float udhar;
void changeage (string newage ){
    age =newage; 
}
};
int main(){
Friend F1;
F1.name = "chtn ";
cout<<F1.name << endl;
   
return 0;
};
