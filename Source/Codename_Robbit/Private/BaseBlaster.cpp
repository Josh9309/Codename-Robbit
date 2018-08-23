// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseBlaster.h"


// Sets default values
ABaseBlaster::ABaseBlaster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseBlaster::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseBlaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseBlaster::Fire()
{
}

