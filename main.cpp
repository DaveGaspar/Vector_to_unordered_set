#include <iostream>
#include "../Containers/Vector/Vector.h"
#include <unordered_set>

std::ostream& operator <<(std::ostream& os, const std::unordered_set<int>& s){
	for (auto i: s){
		os << i << "\t";
	}
	return os;
}

void print_unordered_set(const std::unordered_set<int>& s){
	for (auto i: s){
		std::cout << i << "\t";
	}
}

int main(){
	Vector<int> vec;

	for (int i = 1; i <= 5; i++){
		vec.push_back(i);
	}

	for (int i = 9; i >= 6; i--){
		vec.push_back(i);
	}

	std::cout << "Vector: " << std::endl;
	vec.print();
	std::cout << std::endl;

	std::unordered_set<int> s;

	for (int i = 0; i < vec.size(); i++){
		s.insert(vec[i]);
	}

	std::cout << "Print function set: " << std::endl;
	print_unordered_set(s);
	std::cout << std::endl;


	std::cout << "Overloading << for set: " << std::endl;
	std::cout << s;
	std::cout << std::endl;

	return 0;
}