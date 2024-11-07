// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Prototype_1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPE_1_API APrototype_1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	APrototype_1GameModeBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class AArmaLazer* LazerBase;

	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class AArmaLazer* Lazer;

	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class AArmaRifle* RifleBase;

	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class AArmaRifle* Rifle;
};
