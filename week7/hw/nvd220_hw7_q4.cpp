#include <iostream>
#include <string>

using namespace std;

string *createWordsArray(string sentence, int &outWordsArrSize);
// Precondition: sentence contains a string with words separated by single spaces
// Postcondition: returns a new array containing the words in sentence, and updates outWordsArrSize to the logical size of the array

int main()
{
    string sentence = "You can do it";
    int outWordsArrSize;

    string *wordsArray = createWordsArray(sentence, outWordsArrSize);

    cout << "Words array: [";
    for (int i = 0; i < outWordsArrSize; ++i)
    {
        cout << "\"" << wordsArray[i] << "\"";
        if (i < outWordsArrSize - 1)
        {
            cout << ", ";
        }
    }
    cout << "]\n";

    delete[] wordsArray; // Cleaning up the dynamically allocated array

    return 0;
}

string *createWordsArray(string sentence, int &outWordsArrSize)
{
    outWordsArrSize = 0;

    // Count the number of spaces to determine the number of words
    for (char c : sentence)
    {
        if (c == ' ')
        {
            outWordsArrSize++;
        }
    }
    outWordsArrSize++; // Increment to include the last word

    string *wordsArray = new string[outWordsArrSize];

    int startPos = 0;
    int endPos;
    int index = 0;

    // Use substr to extract words from the sentence
    while ((endPos = sentence.find(' ', startPos)) != string::npos)
    {
        wordsArray[index++] = sentence.substr(startPos, endPos - startPos);
        startPos = endPos + 1;
    }

    // Extract the last word
    wordsArray[index] = sentence.substr(startPos);

    return wordsArray;
}
