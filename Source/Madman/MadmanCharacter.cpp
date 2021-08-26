// Fill out your copyright notice in the Description page of Project Settings.


#include "MadmanCharacter.h"
#include "Camera/CameraComponent.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/SpringArmComponent.h"



AMadmanCharacter::AMadmanCharacter()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
}
void AMadmanCharacter::BeginPlay()
{
	Super::BeginPlay();


}

void AMadmanCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//inputDirection.Normalize();

		/*
	DrawDebugLine(
		GetWorld(),
		PlayerViewPointLocation,
		LineTraceEnd,
		FColor(0,255,0),
		false,
		0.f, 0, 5
		);

*/
}


void AMadmanCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AMadmanCharacter::ForwardInput);
	//PlayerInputComponent->BindAxis(TEXT("MoveSideways"), this, &AMadmanCharacter::SidewaysInput);
}

/*void AMadmanCharacter::ForwardInput(float AxisValue)
{
	inputDirection.Y = Camera->GetForwardVector().Y *  (-AxisValue);

}

void AMadmanCharacter::SidewaysInput(float AxisValue)
{
	FVector Location = GetActorLocation();
	Location.Z = 100;
	inputDirection.X = Camera->GetRightVector().X * AxisValue;
	DrawDebugLine
	(
		GetWorld(),
		Location,
		inputDirection*250,
		FColor(0, 255, 0),
		false,
		0.f, 0, 5
	);
	UE_LOG(LogTemp, Warning, TEXT("inputDirection: %f %f %f"), inputDirection.X, inputDirection.Y, inputDirection.Z);

}
*/