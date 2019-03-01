#pragma once

#ifdef WIN32
#include <windows.h>
#endif(WIN32)

class BaseView
{
public:
	BaseView();
	virtual ~BaseView();

	BaseView(const BaseView&) = delete;
	BaseView& operator = (const BaseView&) = delete;

	virtual void init();
	virtual void display() const = 0;
	virtual void reshape(int w, int h) = 0;
private:
	int mWindowHight;
	int mWindowWidth;
};
