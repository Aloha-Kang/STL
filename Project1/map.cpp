#include<bits\stdc++.h>
using namespace std;
int main() {
	map<string, int> m;
	map<string, int>::iterator it;
	m.insert(pair<string, int>("小明", 20));
	m.insert(map<string, int>::value_type("小红", 18));
	m["李明"] = 16;
	//访问
	//迭代器访问
	for (it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
	//map::at(key)
	cout << m.at("小明") << endl;
	//map[key]
	cout << m["李明"] << endl;
	//迭代器遍历
	
	
	return 0;
}