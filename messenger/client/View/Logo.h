#pragma once

class Logo
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
