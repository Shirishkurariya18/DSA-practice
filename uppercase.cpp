#include<iostream>
#include<string.h>
using namespace std;

void Uppercase(char word[], int n){
for (int i = 0; i < n; i++)
{
    char ch = word[i];
  if (ch >= 'A' && ch <= 'Z')
  {
   continue;
  }
  else{
    word[i] = ch - 'a' + 'A';
  }
  
}
}

// void lowercase(char word[], int n){
// for (int i = 0; i < n; i++)
// {
//     char ch = word[i];
//   if (ch >= 'A' && ch <= 'Z')
//   {
//    continue;
//   }
//   else{
//     word[i] = ch - 'A' + 'a';
//   }
  
// }
// }
int main(){
  
char word[] = "fghjk";
Uppercase(word, strlen(word));
cout<< word << endl;
// char word[] = "FGHJK"; 
//   lowercase(word, strlen(word));
//   cout << word << endl;
      return 0;
}