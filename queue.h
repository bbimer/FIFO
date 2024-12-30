#pragma once

template <typename T>
class Queue
{
private:
	Array<T> array;

public:
	void push(const T& val) {
		array.LF_append(val);
	}

	void pop() {
		array.F_pop();
	}

	T top() {
		return array.LF_top();
	}

	void clear() {
		array.LF_clear();
	}

	void print() {
		array.print();
	}
};

