#include <iostream>
#include "Bptree.hpp"
#include "utility.hpp"
using std::cout;



int main(){
	sjtu::Bptree<int, int> a;
	for (int i = 5; i <= 17; i++) a.insert( std::pair<int, int>(i, 2 * i));
	cout << a.size() << "\n";
	cout << a.at(5) << " ";
	cout << a.at(7);
	return 0;
}
