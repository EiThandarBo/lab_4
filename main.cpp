#include<iostream>
#include<string>
using namespace std;

int main() {
    cout<<"Enter a word: ";
    int size=10000;
    char* word=new char[size];
    cin.getline(word, size);
    string strWord(word);
    bool palindrome=true;
    for(int i=0, j=strWord.length()-1; i<j; i++, j--) {
        if(strWord[i] != strWord[j]) {
            palindrome = false;
            break;
        }
    }
    delete[] word;
    if(palindrome) {
        cout<<"The word is a palindrome."<<endl;
    } else {
        cout<<"The word is not a palindrome."<<endl;
    }
    
return 0;

}