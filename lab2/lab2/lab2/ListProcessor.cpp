// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"

int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size:   " << cows.Listsize() << endl;
	cout << "cows sum   :  " << cows.sum() << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.insertAsLast(5.65);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size:   " << cows.Listsize() << endl;
	cout << "cows sum   :  " << cows.sum() << endl << endl;


	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size:   " << cows.Listsize() << endl;
	cout << "cows sum   :  " << cows.sum() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "cows list size:   " << cows.Listsize() << endl;
	cout << "horses list size: " << horses.Listsize() << endl;
	cout << "cows sum   :  " << cows.sum() << endl;
	cout << "horses sum :  " << horses.sum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	horses.insertAsLast(2.70);
	cows.insertAsLast(3.68);
	cows.insertAsLast(5.65);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "cows list size:   " << cows.Listsize() << endl;
	cout << "horses list size: " << horses.Listsize() << endl;
	cout << "cows sum   :  " << cows.sum() << endl;
	cout << "horses sum :  " << horses.sum() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "cows list size:   " << cows.Listsize() << endl;
	cout << "horses list size: " << horses.Listsize() << endl;
	cout << "pigs list size:   " << pigs.Listsize() << endl;
	cout << "cows sum   :  " << cows.sum() << endl;
	cout << "horses sum :  " << horses.sum() << endl;
	cout << "pigs sum   :  " << pigs.sum() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "cows list size:   " << cows.Listsize() << endl;
	cout << "horses list size: " << horses.Listsize() << endl;
	cout << "pigs list size:   " << pigs.Listsize() << endl;
	cout << "cows sum   :  " << cows.sum() << endl;
	cout << "horses sum :  " << horses.sum() << endl;
	cout << "pigs sum   :  " << pigs.sum() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "cows list size:   " << cows.Listsize() << endl;
	cout << "horses list size: " << horses.Listsize() << endl;
	cout << "pigs list size:   " << pigs.Listsize() << endl;
	cout << "cows sum   :  " << cows.sum() << endl;
	cout << "horses sum :  " << horses.sum() << endl;
	cout << "pigs sum   :  " << pigs.sum() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}
