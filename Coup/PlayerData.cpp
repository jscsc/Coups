#include "Movement.h"
#include "PlayerData.h"
#include "GamePiece.h"

PlayerData::PlayerData() : type(Util::PlayerType::PLAYER_ONE)
{
	resetCurrentMovement();
}


PlayerData::PlayerData(Util::PlayerType type) : type(type)
{
	resetCurrentMovement();
}

PlayerData::~PlayerData()
{
}

void PlayerData::resetCurrentMovement()
{
	currentMovement = &defaultMovement;
}