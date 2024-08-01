#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YourActor.generated.h"

UCLASS()
class YOURGAME_API AYourActor : public AActor
{
    GENERATED_BODY()

public:
    AYourActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Create an instance of the delegate
    UPROPERTY(BlueprintAssignable, Category="Movement")
    FMoveToLocationSimpleDelegate OnMoveToLocationComplete;

    // Function to initiate moving to a location
    void MoveToLocation(const FVector& Location);

private:
    // Handler called when movement is complete
    void HandleMoveToLocationComplete();
};
