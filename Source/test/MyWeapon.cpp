// Fill out your copyright notice in the Description page of Project Settings.


#include "MyWeapon.h"

// Sets default values
AMyWeapon::AMyWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WEAPON"));
	
	ConstructorHelpers::FObjectFinder<USkeletalMesh> SW(TEXT("SkeletalMesh'/Game/MilitaryWeapDark/Weapons/Sniper_Rifle_B.Sniper_Rifle_B'"));

	if (SW.Succeeded())
	{
		Weapon->SetSkeletalMesh(SW.Object);
	}
	Weapon->SetCollisionProfileName(TEXT("NoCollision"));
}

// Called when the game starts or when spawned
void AMyWeapon::BeginPlay()
{
	Super::BeginPlay();
	
	
}
