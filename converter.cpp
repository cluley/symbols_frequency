#include "converter.h"

void convert(std::unordered_multiset<char>& un_mset, const std::string& text) {
	for (const auto ch : text) {
		un_mset.insert(ch);
	}
}