// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ArmaBase.h"
#include "ArmaLazer.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPE_1_API AArmaLazer : public AArmaBase
{
	GENERATED_BODY()
	
public:
    // Sets default values for this actor's properties
    AArmaLazer();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

protected:

    //Propiedades del arma
    float DistanciaLazer;
    int32 Municion;

};
