// Fill out your copyright notice in the Description page of Project Settings.

#include "Ball.h"


// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	RootComponent = sphere;

	sprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("sprite"));
	sprite->SetupAttachment(RootComponent);
}


