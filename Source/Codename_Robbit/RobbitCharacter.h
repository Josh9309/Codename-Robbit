// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Codename_Robbit/Private/BaseBlaster.h"
#include "RobbitCharacter.generated.h"

UCLASS()
class CODENAME_ROBBIT_API ARobbitCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARobbitCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

//VARIABLES/ATRIBUTES!
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float robbitHealth = 1996.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float fireSpeed = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ABaseBlaster* equippedBlaster;
	
};
