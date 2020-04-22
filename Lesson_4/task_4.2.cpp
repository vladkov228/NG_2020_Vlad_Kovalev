#include <iostream>

using namespace std;

int main()
{
    char predl[100];
    int word=0, lg=0, index=0, longWord=0;

    cout << "Enter your sentence: ";
    cin.getline(predl,100);

    while (predl[word]!=NULL)
    {
        if ((predl[word]>='a' and predl[word]<='z') or (predl[word]>='A' and predl[word]<='Z'))
            a++;
        else {
            if (lg > longWord)
            {
                longWord = lg;
                index = word -longWord;
            }
            lg = 0;
        }

        if (predl[word +1]==0)
        {
            if (lg > longWord and predl[word +1]==0)
            {
                longWord = lg;
                index = word -longWord;
            }
            lg =0;
            lg =0;
        }
        word++;
    }

    cout << endl << "Long word is: ";

    for (word =0;word < longWord;word++)
    {
        cout << predl[index];
        index++;
    }

    cout << endl;
}
