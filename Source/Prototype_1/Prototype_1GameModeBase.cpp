// Copyright Epic Games, Inc. All Rights Reserved.
#include "Prototype_1GameModeBase.h"
#include "ArmaLazer.h"
#include "ArmaRifle.h"

APrototype_1GameModeBase::APrototype_1GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APrototype_1GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	LazerBase = GetWorld()->SpawnActor<AArmaLazer>(AArmaLazer::StaticClass());
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("ArmaLazerBase")));

	for (int32 i = 0; i < 2; i++)
	{
		Lazer = Cast<AArmaLazer>(LazerBase->Clonar());
		if (Lazer)
		{
			Lazer->PropiedadesArma(FName(*FString::Printf(TEXT("ArmaRifle_%d"), i + 1)));
			FString NombreArma = Lazer->GetActorLabel();
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, NombreArma);
		}

	}

	RifleBase = GetWorld()->SpawnActor<AArmaRifle>(AArmaRifle::StaticClass());
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("ArmaRifleBase")));

	for (int32 i = 0; i < 2; i++)
	{
		Rifle = Cast<AArmaRifle>(RifleBase->Clonar());
		if (Rifle)
		{
			Rifle->PropiedadesArma(FName(*FString::Printf(TEXT("ArmaRifle_%d"), i + 1)));
			FString NombreArma = Rifle->GetActorLabel();
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, NombreArma);
		}

	}

}

void APrototype_1GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
