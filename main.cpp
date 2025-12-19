#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    //part 1: using dynamic array to check palindrome
    cout << "Part1; Enter a word: ";
    const int size = 10000;//for maximum size of the word
    char* word1 = new char[size];//dynamic array
    cin.getline(word1, size);
    int length = strlen(word1);
    bool palindrome = true;// for palindrome check
    for (int i = 0; i<= length / 2; i++, length--) {//checking palindrome
        if (word1[i] != word1[length - 1]) {
            palindrome = false;
            break;
        }
    }
    if(palindrome){//output result
        cout << "The word is a palindrome." << endl;
    }else{
        cout << "The word is not a palindrome." << endl;
    }
    delete[] word1;

    string word2;
    bool palindrome2=true;
    cout<<"Part2; Enter a word: ";
    getline(cin, word2);
    int length2 = word2.length();
    for(int i=0; i<= length2 / 2; i++, length2--){//checking palindrome
        if(word2[i] != word2[length2 - 1]){
            palindrome2 = false;
            break;
        }
    }
    if(palindrome2){
        cout<<"The word is a palindrome."<<endl;
    }else{
        cout<<"The word is not a palindrome."<<endl;
    }
    return 0;
}