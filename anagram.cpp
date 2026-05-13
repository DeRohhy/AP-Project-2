/*
* ========== Naming Convention Guideline ==========
* Classes, Structs & Enums: PascalCase
* Functions: camelCase
* Variables: lower_snake_case
* Constants: UPPER_SNAKE_CASE
* =================================================
*/

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>


class Trie
{
public:
    Trie() { root = new Node; }

    ~Trie() { delete root; }

    void insert(const std::string& word);

private:
    struct Node
    {
        std::map<char, Node*> children;
        bool is_end_of_word = false;

        ~Node()
        {
            for (auto& [key, node]: children)
                delete node;
        }
    };

    Node* root;
};

void Trie::insert(const std::string& word)
{
    Node* current = root;

    for (char letter: word)
    {
        if (current->children.find(letter) == current->children.end())
            current->children[letter] = new Node;

        current = current->children[letter];
    }

    current->is_end_of_word = true;
}

void readDictionary(Trie& dictionary)
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::string word;
        std::cin >> word;

        dictionary.insert(word);
    }
}

void runGame()
{
    Trie dictionary;

    readDictionary(dictionary);
}

int main()
{
    runGame();
    return 0;
}