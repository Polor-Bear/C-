#include "printList.h"

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); ++it)
		cout << *it << " ";
	cout << endl;
}
