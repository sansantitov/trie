#ifndef TRIE_H
#define TRIE_H
#include <string>
#define ALPHABET_SIZE 26

// Структура узела дерева 
struct TrieNode
{
    struct TrieNode* children[ALPHABET_SIZE];
    // isEndOfWord - true, если ключ является концом слова
    bool isEndOfWord;
   /* unsigned char letter;*/
//};

};
TrieNode* getNewNode(void);
void insert(TrieNode*, std::string);
bool search(TrieNode*, std::string);
bool isEmpty(TrieNode*);
TrieNode* remove(TrieNode*, std::string, int depth = 0);

bool wordCompare(std::string &prefix, std::string &endWord);
void autoComplete (TrieNode* root, std::string &prefix, std::string endWord);

#endif