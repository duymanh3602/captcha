#include<iostream>
#include <time.h>
#include<windows.h>
#include<cstdio>

using namespace std;

string randWord(int n)
{
    string s="";
    for (int i=0;i<n;i++)
    {
        int n=rand()%(3);
        if (n==0)
        {
            int r = 48 + rand() % (10);
            s+=(char(r));
        }
        else if (n==1)
        {
            int r = 65 + rand() % (26);
            s+=(char(r));
        }
        else if (n==2)
        {
            int r = 97 + rand() % (26);
            s+=(char(r));
        }
    }
    return s;
}
bool checkWord(string s1,string s2)
{
    for (int i=0;i<s1.size();i++)
    {
        if (s1[i]!=s2[i])
            return false;
    }
    return true;
}
int main ()
{
    srand((int)time(0));
    string yourWord="";
    string word;
    do
    {
        word=randWord(5);
        system("cls");
        cout<<word<<endl;
        cout<<"Enter CAPTCHA: ";
        fflush(stdin);
        getline(cin,yourWord);
    }
    while(!checkWord(word,yourWord));
    cout<<"Complete! ";
}
