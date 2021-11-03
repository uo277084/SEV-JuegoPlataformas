#pragma once

#include "Actor.h"

class Enemy2 : public Actor
{
public:
	Enemy2(float x, float y, Game* game);
	void update();
	void impacted(); // Recibe impacto y pone animación de morir
	float vxIntelligence;
	int state;
};