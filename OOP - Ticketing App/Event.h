#include <iostream>
#include <string>
using namespace std;

class Util {
public:
	static char* copyString(const char* source) {
		if (source == nullptr) {
			return nullptr;
		}
		char* value = new char[strlen(source) + 1];
		strcpy_s(value, strlen(source) + 1, source);
		return value;
	}
};

class Event {

	char* name = nullptr;
	char eventType[30] = ""; //football game, concert etc.
	char date[11] = ""; //dd/mm/yyyy
	char time[5] = ""; //hh:mm

public:
	//getters and setter

	char* getName() {
		char* copy = Util::copyString(this->name);
		return copy;
	}
	void setName(const char* name) {
		strcpy_s(this->name, strlen(this->name) + 1, name);
	}

	char* getEventType() {
		return Util::copyString(this->eventType);
	}
	void setEventType(const char eventType[30]) {
		strcpy_s(this->eventType, strlen(this->eventType) + 1, eventType);
	}

	char* getDate() {
		return Util::copyString(this->date);
	}
	void setDate(const char* date) {
		if (strlen(date) != 10) {
			throw exception("Wrong date");
		}
		if (date[2] != '/' || date[5] != '/') {
			throw exception("Wrong date format");
		}

		strcpy_s(this->date, date);
	}

	char* getTime() {
		return Util::copyString(this->time);
	}
	void setTime(const char* time) {
		if (strlen(time) != 5) {
			throw exception("Wrong time!");
		}
		if (time[2] != ':') {
			throw exception("Wrong time");
		}
		strcpy_s(this->time, time);
	}

	//default constructor
	Event() {
		this->setName("Rock On!");
		this->setEventType("Concert");
		this->setDate("01/01/2024");
		this->setTime("00:00");
	}

	//constructor with parameters
	Event(char* name, char* type, char* date, char* time) {
		this->name = Util::copyString(name);
		this->setEventType(type);
		this->setDate(date);
		this->setTime(time);
	}

};