#pragma once
#include <iostream>
#include "Object.h"
using namespace std;


class Actor : public Object
{
public:
	virtual void BeginPlay() override;

	void ActorFunction();
};