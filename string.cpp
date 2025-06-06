#include<iostream>
#include<string>
#include<algorithm>
// #include<cstring>
using namespace std;



        // char str1[] = "Hello";
        // cout << strlen(str1) << endl;

        // char str[100];
        // cout << "Enter a string: ";
        // cin.getline(str, 100);
        // cout << "You entered: " << str << endl;


        //  char str[100];
        // cout << "Enter a string: ";
        // cin.getline(str, 100,'$');
        // cout << "You entered: " << str << endl;

        // char str[14];
        // cout << "Enter a string: ";
        // cin.getline(str, 14);
        // for (char ch : str)
        // {
        //    cout << ch << endl;
        // }
        // cout << endl;

        // char str[] = "harsh kurariya";
        // int len = 0;

        // for (int i = 0; i < str[i] != '\0'; i++)
        // {
        //    len++;
        // }
        
        // cout << "Length of the string is: " << len << endl;


    // string str1 = "Hello";
    // string str2 = "World";

    // string str3 = str1 + str2; // Concatenation
    // cout << str3 << endl;

    // for (int i = 0; i < str3.length(); i++)
    // {
    //    cout << str3[i] << endl; // Accessing characters
    // }
    

    // reverse a string
    // string str = "Hello World";
    // string reversedStr = "";
    // for (int i = str.length() - 1; i >= 0; i--) {
    //     reversedStr += str[i];
    // }
    // cout << "Reversed string: " << reversedStr << endl;

    // string str = "harsh kurariya";
    // int n = str.length();
    // int st = 0,end = n-1;
    // for (int st = 0; st < end; st++)
    // {
    //    swap(str[st], str[end]);
    //    end--;
    // }
    // cout << str << endl;


    // one line code
    int main() {
    string str = "harsh kurariya";
    reverse(str.begin(), str.end());
    cout << str << endl;
    return 0;
}