// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPawn.h"

void AEnemyPawn::Hunt()
{
	state = EEnemyState::Default;
	StateChangedEvent.Broadcast(state);
}

void AEnemyPawn::Idle()
{
	state = EEnemyState::Idle;
	StateChangedEvent.Broadcast(state);
}
