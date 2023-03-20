// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

ATank::ATank()
{
    springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
    springArm->SetupAttachment(RootComponent);

    camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
    camera->SetupAttachment(springArm);

}

void ATank::Move(float value)
{
    UE_LOG(LogTemp, Warning, TEXT("Value: %f"), value);
}

// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent); // ABasePawn will call its superclass version function

    PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ATank::Move);

}
