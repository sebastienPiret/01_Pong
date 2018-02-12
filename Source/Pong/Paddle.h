// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PaperSpriteComponent.h"
#include "Components/BoxComponent.h"
#include "Paddle.generated.h"

class ABall;

UCLASS()
class PONG_API APaddle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APaddle();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision", meta = (AllowPrivateAccess))
		UBoxComponent* collider;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sprite")
		UPaperSpriteComponent* paddleSprite;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Float", meta = (BlueprintProtected))
		float m_moveSpeed=10.0f;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Setup", meta = (BlueprintProtected))
		ABall* m_ballRef;
};
