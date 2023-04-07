#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    std::string words = "";
    cin >> words;
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    std::vector<char> result;
    for (int i = 0; i < words.size(); i++)
    {
        for (int j = 0; j < vowels.size(); j++)
        {
            if (vowels[j] == words[i])
            {
                if (vowels[j] == vowels[1] || vowels[j] == vowels[4])
                {
                    result.push_back(vowels[j]);
                    result.push_back(vowels[j]);
                }
                else
                {
                    result.push_back(vowels[j]);
                }
                
            }
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
    cout << "\n";
    system("pause");
}