#include <iostream>
#include "Functions.h"
using namespace std;
using namespace Functions;
int main()
{ 
    char Choise, Str1[1024], Str2[1024], Str3[1024], StrRes[2048];
    cout << "Select the number of the function to be tested: \n//////////////////////////////////\n 1 - StringLegth \n//////////////////////////////////\n 2 - StringConcatenation \n//////////////////////////////////\n 3 - CopyingAString \n//////////////////////////////////\n 4 - DeletingASubstring \n//////////////////////////////////\n 5 - InsertingASubstring \n//////////////////////////////////\n 6 - SearchForTheFirstCccurrence \n//////////////////////////////////\n 7 - SearchForTheLastCccurrence \n//////////////////////////////////\n 8 - RepacingTheFirstCccurrence \n//////////////////////////////////\n 9 - RepacingAllCccurrences \n//////////////////////////////////\n";
    cout << "Selected: ";
    cin >> Choise;
    switch (Choise)
    {
    case '1':
        cout << "Enter string: ";
        cin >> Str1;
        cout << "Result: " << String::StringLength(Str1);
        break;
    case'2':
        cout << "Enter first string: ";
        cin >> Str1;
        cout << "Enter second string: ";
        cin >> Str2;
        cout << "Result: " << String::StringConcatenation(Str1, Str2, StrRes);
        break;
    case'3':
        int Start, Len;
        cout << "Enter string: ";
        cin >> Str1;
        cout << "Enter substring start: ";
        cin >> Start;
        cout << "Enter lenght substring: ";
        cin >> Len;
        cout << "Result: " << String::CopyingAString(Str1, Start, Len, StrRes);
        break;
    case'4':
        int DelStart, DelLen;
        cout << "Enter the string: ";
        cin >> Str1;
        cout << "Enter the deleting start: ";
        cin >> DelStart;
        cout << "Enter the length of the part to delete: ";
        cin >> DelLen;
        cout << "Result: " << String::DeletingASubstring(Str1, DelStart, DelLen, StrRes);
        break;
    case'5':
        int PosNum;
        cout << "Enter the fisrt string: ";
        cin >> Str1;
        cout << "Enter the second string: ";
        cin >> Str2;
        cout << "Enter the position from which the insertion will begin: ";
        cin >> PosNum;
        cout << "Result: " << String::InsertingASubstring(Str1, PosNum, Str2, StrRes);
        break;
    case'6':
        cout << "Enter first string: ";
        cin >> Str1;
        cout << "Enter second string: ";
        cin >> Str2;
        cout << "Result: " << String::SearchForTheFirstCccurrence(Str1, Str2);
        break;
    case'7':
        cout << "Enter first string: ";
        cin >> Str1;
        cout << "Enter second string: ";
        cin >> Str2;
        cout << "Result: " << String::SearchForTheLastCccurrence(Str1, Str2);
        break;
    case'8':
        cout << "Enter first string: ";
        cin >> Str1;
        cout << "Enter second string: ";
        cin >> Str2;
        cout << "Enter third string: ";
        cin >> Str3;
        cout << "Result: " << String::RepacingTheFirstCccurrence(Str1, Str2, Str3, StrRes);
        break;
    case'9':
        cout << "Enter first string: ";
        cin >> Str1;
        cout << "Enter second string: ";
        cin >> Str2;
        cout << "Enter third string: ";
        cin >> Str3;
        cout << "Result: " << String::RepacingAllCccurrences(Str1, Str2, Str3, StrRes);
        break;
    default:
        cout << "Try again :)";
    }
}