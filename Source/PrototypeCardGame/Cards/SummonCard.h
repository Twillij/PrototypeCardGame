#pragma once

#include "CoreMinimal.h"
#include "Card.h"
#include "SummonCard.generated.h"

UCLASS()
class PROTOTYPECARDGAME_API ASummonCard : public ACard
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0"))
	int Attack = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "1"))
	int Health = 1;
};
