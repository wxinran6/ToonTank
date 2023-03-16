// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"


UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

	UPROPERTY(VisibleAnywhere)
	int32 VisbibleAnywhereInt = 100;

	UPROPERTY(EditAnywhere)
	int32 EditAnywhereint = 22;

	UPROPERTY(VisibleInstanceOnly)
	int32 VisibleInstanceInt = 20;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	class UCapsuleComponent* CapsuleComp; // class forward declaration, the header file is included in the Pawn.h file, include it in the basePawn.cpp

	UPROPERTY()
	UStaticMeshComponent* BaseMesh; // include default by actors , pawn is actor as well

	UPROPERTY()
	UStaticMeshComponent* TurrentMesh;

	UPROPERTY()
	USceneComponent* ProjectileSpawnPoint;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
