#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int size=100;
    char* word=new char[size];
    cout<<"Enter a word: ";
    cin.getline(word, size);
    int length=strlen(word);
    bool palindrome=true;
    for(int i=0; i<length/2; i++) {
        if(word[i] != word[length-i-1]) {
            palindrome = false;
            break;
        }
    }
    if(palindrome){
        cout<<"The word is a palindrome."<<endl;
    } else {
        cout<<"The word is not a palindrome."<<endl;
    }

    return 0;
}