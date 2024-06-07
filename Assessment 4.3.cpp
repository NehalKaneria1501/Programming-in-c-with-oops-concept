#include<iostream>
#include<string.h>
using namespace std;
bool containsShiftCharacters(const char*word)
 {
    const char*shiftCharacters="~!@#$%^&*()_+{}|:\"<>?";
    int i,length=strlen(word);
    for(i=0;i<length;++i)
	 {
        char currentChar=word[i];
        if(strchr(shiftCharacters,currentChar)!=NULL)
		 {
            return true;
        }
    }
    return false;
}
int main()
 {
    char word[100];
    cout<<"Enter a word: ";
    cin>>word;
    if(containsShiftCharacters(word)) 
	{
        cout<<"The word contains characters accessible with the SHIFT key.\n";
    }
	 else 
	{
        cout<<"The word does not contain characters accessible with the SHIFT key.\n";
    }
    return 0;
}
