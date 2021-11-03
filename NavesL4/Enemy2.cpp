#include "Enemy2.h"

Enemy2::Enemy2(float x, float y, Game* game)
	: Actor("res/caparazon.png", x, y, 36, 40, game) {

	state = game->stateMoving;
	vx = 1;
	vxIntelligence = -1;
	vx = vxIntelligence;

}

void Enemy2::update() {

	if (state == game->stateDying) {
			state = game->stateDead;
	}

	// Establecer velocidad
	if (state != game->stateDying) {
		// no está muerto y se ha quedado parado
		if (vx == 0) {
			vxIntelligence = vxIntelligence * -1;
			vx = vxIntelligence;
		}
		if (outRight) {
			// mover hacia la izquierda vx tiene que ser negativa
			if (vxIntelligence > 0) {
				vxIntelligence = vxIntelligence * -1;
			}
			vx = vxIntelligence;
		}
		if (outLeft) {
			// mover hacia la derecha vx tiene que ser positiva
			if (vxIntelligence < 0) {
				vxIntelligence = vxIntelligence * -1;
			}
			vx = vxIntelligence;
		}

	}
	else {
		vx = 0;
	}



}

void Enemy2::impacted() {
	if (state != game->stateDying) {
		state = game->stateDying;
	}
}