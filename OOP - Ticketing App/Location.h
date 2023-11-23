#include <iostream>
#include <string>
using namespace std;

class Location {
	
	string name = "-";
	int maxSeats = 0;
	int seat = 0;
	int maxRows = 0;
	int row = 0;

public:
	//getters and setters

	string getName() {
		return this->name;
	}
	void setName(string name) {
		this->name = name;
	}

	int getMaxSeats() {
		return this->maxSeats;
	}
	void getMaxSeats(int max) {
		this->maxSeats = max;
	}

	int getSeat() {
		return this->seat;
	}
	void setSeat(int seat) {
		if (seat > 0 || seat < this->maxSeats) {
			this->seat = seat;
		}
		else
			throw exception("Invalid seat!");
	}

	int getMaxRows() {
		return this->maxRows;
	}
	void setMaxRows(int rows) {
		this->maxRows = rows;
	}

	int getRow() {
		return this->row;
	}
	void setRow(int rows) {
		if (rows > 0 || rows < maxRows) {
			this->row = rows;
		}
		else
			throw exception("Invalid row!");
		
	}

	//default constructor

	Location() {
		this->name = "N/A";
		this->maxRows = 0;
		this->maxSeats = 0;
		this->row = 0;
		this->seat = 0;
	}

	//constructor with parameters
	Location(string name, int maxRows, int maxSeats, int row, int seat) {
		this->name = name;
		this->maxRows = maxRows;
		this->maxSeats = maxSeats;
		this->row = row;
		this->seat = seat;
	}

};