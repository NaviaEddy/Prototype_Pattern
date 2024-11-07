// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaRifle.h"

AArmaRifle::AArmaRifle()
{
    PrimaryActorTick.bCanEverTick = true;

    // Initialize rifle-specific properties
    Daño = 50.0f;
    Municion = 30;
}

void AArmaRifle::BeginPlay()
{
    Super::BeginPlay();
    GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Daño: %f"), Daño));
    GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Municion: %d"), Municion));
}

void AArmaRifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
