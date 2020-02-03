#pragma once
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

void populate(std::map<std::string, std::pair<int, int>> &data)
{
	data.insert({ "a", {1,2} });
	data.insert({ "b",{ 3,4 } });
	data.insert({ "c",{ 5,6 } });
}

std::map<std::string, std::pair<int, int> >   merge(std::map<std::string, std::pair<int, int> >  a,
	std::map<std::string, std::pair<int, int> > b)
{
	auto result = a;

	for (auto& it : b)
	{
		result.insert(it);
	}

	return result;
}

//int main()
//{
//
//	std::map<std::string, std::pair<int, int>> d1, d2;
//	populate(d1);
//	d2.insert({ "d", {7,8} });
//
//	auto final_data = merge(d1, d2);
//
//	for (auto &it : final_data)
//	{
//		//auto[v1, v2] = itr.second; // strictured bindings
//	}
//
//	std::vector<std::pair<int, int>> data = { {1,3}, {7,6}, {12,4} };
//	std::sort(begin(data), end(data), [](std::pair<int, int> a, std::pair<int, int> b) {return a.second < b.second; });
//
//	for (auto& it : data)
//	{
//		std::cout << it.first << " " << it.second << std::endl;
//	}
//
//	std::cout << __cplusplus << std::endl;
//
//	return 0;
//}
