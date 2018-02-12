// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperSpriteComponent.h"
#include "Components/SphereComponent.h"
#include "Ball.generated.h"

UCLASS()
class PONG_API ABall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABall();

protected:

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="sprite", meta=(AllowPrivateAccess="true"))
	UPaperSpriteComponent* sprite;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "collision", meta = (AllowPrivateAccess = "true"))
	USphereComponent* sphere;
	
};
