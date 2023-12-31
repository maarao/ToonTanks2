// Copyright maarao 2023

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS2_API ATower : public ABasePawn
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaSeconds) override;

	void HandleDestruction();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
	class ATank* Tank;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float FireRange = 1000;

	UPROPERTY()
	FTimerHandle FireRateTimerHandle;
	float FireRate = 2;
	void CheckFireCondition();

	bool InFireRange();
};
