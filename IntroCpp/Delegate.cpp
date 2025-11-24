#include "Delegate.h"

void Delegate::OverlapEvent()
{
	std::cout << "Overlap!" << '\n';

	// Invoke delegate
	if (onOverlap)
	{
		onOverlap();
	}
}
