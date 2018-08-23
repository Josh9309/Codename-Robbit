// Fill out your copyright notice in the Description page of Project Settings.

#include "RobbitPawn.h"


// Sets default values
ARobbitPawn::ARobbitPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create Skeletal mesh
	//robbitMesh = GetOwner()->FindComponentByClass<USkeletalMeshComponent>();

	//Create Camera
	//camera = GetOwner()->FindComponentByClass<UCameraComponent>();


}

// Called when the game starts or when spawned
void ARobbitPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARobbitPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARobbitPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ARobbitPawn::Jump(FVector jumpForce)
{
	FVector currentVelocity = GetOwner()->GetVelocity();

	currentVelocity += jumpForce;

	//()->GetComponentByClass<UPawnMovementComponent>();
}

