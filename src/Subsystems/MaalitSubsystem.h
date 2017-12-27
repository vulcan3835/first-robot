#ifndef MaalitSubsystem_H
#define MaalitSubsystem_H

#include <Commands/Subsystem.h>

class MaalitSubsystem : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	MaalitSubsystem();
	void InitDefaultCommand();
};

#endif  // MaalitSubsystem_H
