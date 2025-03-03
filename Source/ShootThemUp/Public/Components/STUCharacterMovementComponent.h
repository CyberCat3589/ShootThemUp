// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "STUCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTTHEMUP_API USTUCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement", meta = (ClampMin = 1.5f, ClampMax = 10.0f))
    float RunModifier = 2.0f;
    
    virtual float GetMaxSpeed() const override;
};
