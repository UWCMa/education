#pragma once
#include "common/BaseView.h"

class Logo	: public BaseView
{
public:
	Logo();
	~Logo();

	Logo(const Logo&) = delete;
	Logo& operator = (const Logo&) = delete;

	void init();
	void display() const;
	void reshape(int w, int h);
};
