#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

ifstream fin("TextFile1.txt");

int main()
{
	string s;
	map <string, int> words;
	priority_queue <vector <pair< string,int>>> pq;

	getline(fin, s); //citire din fisier
	transform(s.begin(), s.end(), s.begin(), ::tolower); //pt a ignora majusculele 


	string str;
	for (auto x : s)
	{
		if (x == ' ' || x == '.' || x == '!' || x == '?' || x == ',')
		{
			if (str.length() != 0)
				words[str]++;

			str.erase();
		}
		else
			str = str + x;
	}
	for (map<string, int>::iterator it = words.begin(); it != words.end(); ++it)
	{
		cout << it->first << ":" << it->second << '\n';
	}


	//vector<pair<string, int>> fr;
	//for (map<string, int>::iterator it = words.begin(); it != words.end(); ++it)
	//{
	//	auto first_elem = it->first;
	//	auto sec_elem = it->second;
	//	fr.push_back(make_pair(first_elem, sec_elem));

	//	pq.push(fr);
	//}
	//while (!pq.empty()) {
	//	cout << pq.top() << endl;
	//	pq.pop();
	//}

	fin.close();
	return 0;
	
}