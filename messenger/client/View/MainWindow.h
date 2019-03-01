#pragma once
#include "common/BaseView.h"
#include "Logo.h"

class MainWindow : public BaseView
{
public:
	MainWindow();
	~MainWindow();

	MainWindow( const MainWindow& ) = delete;
	MainWindow& operator = (const MainWindow&) = delete;

	void init();
	void display() const;
	void reshape(int w, int h);
private:
	Logo mLogo;
};
