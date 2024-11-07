// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaBase.h"

// Sets default values
AArmaBase::AArmaBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArmaBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArmaBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AActor* AArmaBase::Clonar()
{
	//Engendramos un clon del arma
	return GetWorld()->SpawnActor<AArmaBase>(GetClass());
}

void AArmaBase::PropiedadesArma(FName Name)
{
	SetActorLabel(Name.ToString());
}

