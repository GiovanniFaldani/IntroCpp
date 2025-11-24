#pragma once

#include <functional>
#include <string>
#include <vector>
#include <iostream>

class Delegate 
{
public:
	
	Delegate() = default;
	~Delegate() = default;

	std::function<void(const std::string&)> onEventTriggered;

	std::function<int(const float)> onCalculateValue;

	std::function<void()> onOverlap;

	//multiple binding delegate example
	std::vector<std::function<void()>> subscribers;

	void OverlapEvent();

	void SetoverlapEvent(std::function<void()> func) 
	{
		onOverlap = func;
	}

	// call all subscribed functions
	void OnMultipleOverlapEvents() 
	{
		for (const auto& func : subscribers)
		{
			if (func)
			{
				func();

			}
		}
	}
};