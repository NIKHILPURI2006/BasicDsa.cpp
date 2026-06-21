#include <iostream>
 using namespace std;
int main(){
    int amount,note_type;
    cout << " enter amount :";
    cin>>amount;
    cout<<"enter amount of notes you want to know in given amount:";
    cin>>note_type;
    switch (note_type){
        case 100:
        cout<<"100 rupees notes:" << amount/100 << endl;
        break;
        case 50:
        cout<<"50 rupees notes:" << amount/50 << endl;
        break;
        // add more cases as needed;
        default :
        cout<<"invalid note type entered"<< endl;
    }
    return 0;
}