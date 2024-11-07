// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IPrototype.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArmaBase.generated.h"

UCLASS()
class PROTOTYPE_1_API AArmaBase : public AActor, public IIPrototype
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmaBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//Funcion de la interfaz
	AActor* Clonar() override;

	//Funcion para establecer las propiedades del arma
	virtual void PropiedadesArma(FName Name);

};
