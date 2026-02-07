#include <iostream>
#include<string>
using namespace std;

class Slots
{
public:
    string slot[100];

    Slots (string card[]) {
        int i;
       for(i=0;i<8;i++) {
        slot[i]=card[i];
        cout<<"SLOT "<<i+1<<" "<<card[i]<<endl;
}
    }
};

int main()
{
    int i, ch, count;
    string card[100];
    cout << "==Deck==" << endl;

    for(i=0;i<8;i++) {
        cout<<"Enter card "<<i+1<<" ";
        getline(cin,card[i]);
        cout<<endl;
    }
    
    Slots input(card);
    return 0;
}

