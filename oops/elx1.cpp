// a string with char int special_char is given , give back sting without int and sum of int

#include <iostream>
#include <string>
#include <cctype> // for isdigit
using namespace std;
void extractNonIntAndSum(const std::string &input) {
    string result;
    int sum = 0;
    string currentNumber;

    for (char c : input) {
        if (isdigit(c)) {
            currentNumber += c; // Build the current number character by character
        } else {
            if (!currentNumber.empty()) {
                // If we have a current number, add it to the sum and reset it
                sum += stoi(currentNumber);
                currentNumber.clear();
            }
            // Append non-digit character to the result
            result += c;
        }
    }

    // If there's a remaining current number, add it to the sum
    if (!currentNumber.empty()) {
        sum += std::stoi(currentNumber);
    }

    cout << result <<endl<< sum << endl;
}

int main() {
    string input;// = "abc123def456ghi";
    cin>>input;
    extractNonIntAndSum(input);
    return 0;
}



/*#include <iostream>
#include <string>
#include <cstring> // Include the header for c_str()
using namespace std;
int findSum(string str)
{
    string temp = "";
    int sum = 0;
    for (char ch : str)
    {
        if (isdigit(ch))
            temp += ch;
        else
        {
            sum += atoi(temp.c_str()); // Use std::atoi
            temp = "";
        }
    }
    return sum + atoi(temp.c_str()); // Use std::atoi
}
int main()
{
    string input;// = "abc123def456";
    cin>>input;
    int result = findSum(input);
    cout << "Sum of numbers in the string: " << result << std::endl;
    return 0;
}*/
