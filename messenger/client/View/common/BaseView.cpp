#include "BaseView.h"
#include <iostream>

std::pair<int, int> BaseView::mWindowSize;

BaseView::BaseView()
{

}

BaseView::~BaseView()
{

}

void BaseView::init()
{

}

void BaseView::reshape(int w, int h)
{
	mWindowSize.first = w;
	mWindowSize.second = h;
}

const std::pair<int, int> BaseView::getWindowSize() const
{
	return mWindowSize;
}