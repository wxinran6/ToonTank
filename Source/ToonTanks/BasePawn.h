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


private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Super Category Variable", meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent* CapsuleComp; // class forward declaration, the header file is included in the Pawn.h file, include it in the basePawn.cpp

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Super Category Variable", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BaseMesh; // include default by actors , pawn is actor as well

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Super Category Variable", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* TurrentMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Super Category Variable", meta = (AllowPrivateAccess = "true"))
	USceneComponent* ProjectileSpawnPoint;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Super Category Variable", meta = (AllowPrivateAccess = "true"))
	int32 EditAnywhere = 100; // a way to make a private variable accessible from blueprint






};
