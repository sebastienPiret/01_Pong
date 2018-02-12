// Fill out your copyright notice in the Description page of Project Settings.

#include "Paddle.h"


// Sets default values
APaddle::APaddle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	RootComponent = collider;

	paddleSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
	paddleSprite->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void APaddle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



