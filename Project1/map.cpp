#include<bits\stdc++.h>
using namespace std;
int main() {
	map<string, int> m;
	map<string, int>::iterator it;
	m.insert(pair<string, int>("С��", 20));
	m.insert(map<string, int>::value_type("С��", 18));
	m["����"] = 16;
	//����
	//����������
	for (it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
	//map::at(key)
	cout << m.at("С��") << endl;
	//map[key]
	cout << m["����"] << endl;
	//����������
	
	
	return 0;
}