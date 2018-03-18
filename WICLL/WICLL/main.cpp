#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "CSWoman.h"
#include "llist.h"
#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))

int main()
{
	const CSWoman * const womanArray[] =
	{
		new CSWoman("Ada Lovelace", 1815, "First Female computer programmer."),
		new CSWoman("Henrietta SWan Leavitt", 1868, "Joined Harvard computer group of women."),
		new CSWoman("Grete Hermann", 1901, "Published paper for computerized algerbra."),
		new CSWoman("Gertrude Blanch", 1897, "Led Mathmatical Tables Project group during WWII."),
		new CSWoman("Betty Jennings", 1924, "One of the original programmers for ENIAC computer."),
		new CSWoman("Kathleen Booth", 1922, "Credited with writing assembly language for ARC2 computer."),
		new CSWoman("Mary Coombs", 1900, "One of the first female programmer on LEO."),
		new CSWoman("Maragaret Hamilton", 1936, "Director of Software Engineering Division."),
		new CSWoman("Adele Goldberg", 1945, "One of developers of the Smalltalk language."),
		new CSWoman("Phyllis Fox", 1923, "Worked on PORT portable mathematical/numerical library.")
	};

	llist* const womanList = new llist();

	for (int i  = 0; i < ARRAY_SIZE(womanArray); i++)
	{
		if (womanArray[i] != nullptr && womanList != nullptr)
			womanList->add(womanArray[i]);
	}

	if (womanList != nullptr)
	{
		womanList->printList();
		womanList->reverse();
		womanList->printList();
		womanList->clearList();
	}

	for (int i = 0; i < ARRAY_SIZE(womanArray); i++)
	{
		delete womanArray[i];
	}
	delete womanList;

	return 0;
}