// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectSetupActor.h"

// Sets default values
AProjectSetupActor::AProjectSetupActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProjectSetupActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectSetupActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

