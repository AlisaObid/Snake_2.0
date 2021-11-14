#include "queue.h"

void Queue::push(int aa)
{
	a.push_back(aa);
}

void Queue::pop()
{
	a.erase(a.begin());
}

int Queue::front()
{
	return a.front();
}

int Queue::size()
{
	return a.size();
}
