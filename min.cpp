// Assuming NewTaskInstance is a pointer to a task object
UNewTask* NewTaskInstance = NewObject<UNewTask>();

// Assuming AvatarController is a pointer to a player controller object
APlayerController* AvatarController = GetWorld()->GetFirstPlayerController();

// Assign the PlayerController property of NewTaskInstance to AvatarController
NewTaskInstance->PlayerController = AvatarController;
