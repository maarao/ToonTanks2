// Copyright maarao 2023

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS2_API ATank : public ABasePawn
{
	GENERATED_BODY()

public:
	ATank();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void HandleDestruction();
	
	APlayerController* GetTankPlayerController() const {return TankPlayerController;}

	bool bAlive = true;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

private:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class USpringArmComponent* SpringArmComponent;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UCameraComponent* CameraComponent;

	UPROPERTY(EditAnywhere)
	float MoveMultiplier = 500;
	UPROPERTY(EditAnywhere)
	float TurnMultiplier = 100;

	void Move(float Value);
	void Turn(float Value);

	UPROPERTY()
	APlayerController* TankPlayerController;
};
