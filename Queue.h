#include "stdafx.h"

class Queue
{
	private:
		int* arr; //спросить про типы

	public:
		Queue(const size_t& bufSize);
		void push_back(const int& elem);
		const int& pop_front();
		const int& front() const;
		const size_t& getSize() const;
		void erase();
		const bool& empty() const;


};

class Iterator {
	private:

	public:
		void start();
		void next();
		bool finish();
		int getValue();

};