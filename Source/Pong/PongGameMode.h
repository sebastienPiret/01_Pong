// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PongGameMode.generated.h"

class ABall;
class UGameHud;

/**
 * 
 */
UCLASS()
class PONG_API APongGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:

protected:
	UPROPERTY(BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
		UGameHud* m_gameHudRef;
	UPROPERTY(BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
		ABall* m_ballRef;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Float", meta = (BlueprintProtected))
		float m_direction=-1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Float", meta = (BlueprintProtected))
		float m_ballSpeed=1400.0f;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score", meta = (BlueprintProtected))
		float m_playerScore=0;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score", meta = (BlueprintProtected))
		float m_AIScore=0;
};
