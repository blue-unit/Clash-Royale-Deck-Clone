// Simulating Clash Royale Deck Builder in CPP

#include<iostream>
#include<string>
using namespace std;

struct cards {
    string name; 
    string rarity;
    int elixer;
};

int main() {

const int DECK_SIZE=8;
string deck[DECK_SIZE];
int i;

cout<<"You can build your deck \n"<<
    "Enter the card that you want to push"<<endl;

for(int j=0; j<DECK_SIZE; j++) {
    cout<<"Card "<< j+1<<":";
    getline(cin, deck[j]);
}
 cout<<"Your deck consists of "<<endl;
for(int j=0; j<DECK_SIZE; j++) {
    cout<<deck[j]<<endl;
}

return 0;
}