#include <iostream>
#include <cstring>
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
    return 0;
}