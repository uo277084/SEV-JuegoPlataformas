#pragma once

#include "Actor.h"

class Enemy2 : public Actor
{
public:
	Enemy2(float x, float y, Game* game);
	//void draw(float scrollX = 0) override; // Va a sobrescribir
	void update();
	void impacted(); // Recibe impacto y pone animación de morir
	float vxIntelligence;
	int state;
};