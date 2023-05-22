#include "counter.h"

std::list<std::pair<int, char>> counter(const std::string& text) {
	std::unordered_multiset<char> un_mset;
	convert(un_mset, text);

	std::list<std::pair<int, char>> temp;
	for (const char& ch : un_mset) 
	{
		temp.push_front(std::make_pair(un_mset.count(ch), ch));
	}

	return temp;
}