// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "Math/Vector.h"
#include "MadmanCharacter.generated.h"

/**
 * 
 */
UCLASS()
class MADMAN_API AMadmanCharacter : public ACharacterBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	AMadmanCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void ForwardInput(float AxisValue);
	void SidewaysInput(float AxisValue);

	//components
	UPROPERTY(VisibleAnywhere, Category="Components")
	FVector inputDirection = FVector(0,0,0);

	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	class USpringArmComponent* SpringArm;


	
};
