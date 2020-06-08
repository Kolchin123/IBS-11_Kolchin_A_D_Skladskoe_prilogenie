#pragma once

#include <string>
#include "Contragent.h"

using namespace std;

public class Good {
private:
	string title;
	int value;
	Contragent contragent;
public:
	Good() {

	}

	void setTitle(string t) {
		title = t;
	}

	void setValue(int v) {
		value = v;
	}

	void setContragent(string c) {
		contragent.setName(c);
	}

	string getTitle() {
		return title;
	}

	int getValue() {
		return value;
	}

	string getContragent() {
		return contragent.getName();
	}
};