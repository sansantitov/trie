#include<iostream>
#include"Trie.h"
#ifdef _WIN32
#include <Windows.h>
#endif


int main()
{
#ifdef _WIN32
	int cp1 = GetConsoleCP();
	int cp2 = GetConsoleOutputCP();
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#endif


	std::cout << "Автодополнение (можно использовать только буквы a-z)" << std::endl;
	TrieNode* root = getNewNode();

	insert(root, "ab");
	insert(root, "abde");
	insert(root, "ac");
	insert(root, "abcd");

	insert(root, "bcd");
	insert(root, "bd");
	insert(root, "b");

	bool work = true;
	while (work)
	{
		std::cout << "Введите строку (0-выход): ";

		std::string str;
		std::cin >> str;
		if (str == "0") break;
		std::cout << "Возможные слова:" << std::endl;
		autoComplete(root, str, "");
	}

	delete root;

#ifdef _WIN32
	SetConsoleCP(cp1);
	SetConsoleOutputCP(cp2);
#endif

	return 0;
}
