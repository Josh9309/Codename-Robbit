// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "GameFramework/Actor.h"
#include "BaseBlaster.generated.h"

UCLASS()
class ABaseBlaster : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseBlaster();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//When fire btn is pressed, shoot projectile from muzzle location
	UFUNCTION(BlueprintCallable)
	void Fire();

/*Variables/Attributes*/

public:
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float fireRate = 0;
	UPROPERTY(BlueprintReadWrite)
		FVector muzzleLoc; //Location where projectiles will fire from
	UPROPERTY(BlueprintReadWrite)
		int damage = 10; 

};
