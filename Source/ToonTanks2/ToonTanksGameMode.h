// Copyright maarao 2023

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ToonTanksGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS2_API AToonTanksGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	void ActorDied(AActor* DeadActor);

protected:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
	void StartGame();
	
private:
	UPROPERTY()
	class ATank* Tank;
	UPROPERTY()
	class AToonTanksPlayerController* ToonTanksPlayerController;

	float StartDelay = 3;

	void HandleGameStart();
};
