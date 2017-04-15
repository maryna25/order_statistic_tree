#include <iostream>
#include "order_statistic_tree.h"
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	car_model curr_car;
	ifstream f1("input.txt");
	RedBlackTree tree;
	while (!f1.eof())
	{
		f1 >> curr_car.brand >> curr_car.name >> curr_car.number;
		tree.insert(curr_car);
	}
	f1.close();

	//tree.show();

	car_model car;
	car.brand = "BMW";
	car.name = "1Series";
	car.number = 1463;
	tree.search(car);

	//tree.show();
	getchar();
	return 0;
}

