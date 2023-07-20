#include <iostream>`
using namespace std;

int main() {
    char lower_case_letter, upper_case_letter;
    int offset;
    
    cout<<"Please enter a lower case letter:"<<endl;
    cin>>lower_case_letter;

    offset = (int)(lower_case_letter - 'a');
    upper_case_letter = (char)('A' + offset);

    cout<<"The upper case of "<<lower_case_letter<<" is "<<upper_case_letter<<endl;

    return 0;
}