// Fill out your copyright notice in the Description page of Project Settings.

#include "Patrol_Route.h"

TArray<AActor*> UPatrol_Route::GetPatrolPoints() const
{
	return PatrolPoints;
}