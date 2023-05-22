#include <list>
#include <functional>

#include "counter.h"

using namespace std;

int main(int argc, char** argv) {
	string text = "!!laem yreve retfa hteet ruoy shurb dna selbategev ruoy taE";

	list<pair<int, char>> my_list = counter(text);

	my_list.sort(greater<pair<int, char>>());
	my_list.unique();

	for (const auto& el : my_list) {
		cout << el.second << ": " << el.first << endl;
	}

	return 0;
}