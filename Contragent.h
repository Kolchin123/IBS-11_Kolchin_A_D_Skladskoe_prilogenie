#pragma once

#include <string>

using namespace std;

public class Contragent {
private:
	string name;
public:
	Contragent() {

	}

	string getName() {
		return name;
	}

	void setName(string n) {
		name = n;
	}
};