#include<bits/stdc++.h>
using namespace std;
int main(){

int amount;

cout<<"Enter the amount : ";
cin>>amount;

int notes[8] = {500,100,50,20,10,5,2,1};
int notesCounter[8] = {0};
int note=0;

for(int i=0; i<8; i++){
        if(amount>=notes[i]){
            notesCounter[i] = amount/notes[i];
            amount -= notes[i]*notesCounter[i];
        }
        note+=notesCounter[i];

}

for(int i=0; i<8; i++){

    cout<<"Notes "<<notes[i]<<endl;
    cout<<"NotesCounter"<< notesCounter[i]<<endl;
}

cout<<"Total Notes : "<<note<<endl;
return 0;


}
