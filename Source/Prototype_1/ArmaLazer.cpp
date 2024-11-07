// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaLazer.h"

AArmaLazer::AArmaLazer()
{
	PrimaryActorTick.bCanEverTick = true;

	DistanciaLazer = 10.0f;
	Municion = 100;
}

void AArmaLazer::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Distancia lazer: %f"), DistanciaLazer));
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Municion: %d"), Municion));
}

void AArmaLazer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
