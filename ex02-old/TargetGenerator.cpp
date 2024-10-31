#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}
TargetGenerator::~TargetGenerator(){}

TargetGenerator::TargetGenerator(const TargetGenerator& toCopy){
	*this = toCopy;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& toCopy){
	if (this != &toCopy){
		this->mapTarget = toCopy.mapTarget;
	}
	return (*this);
}

void	TargetGenerator::learnTargetType(ATarget *target){
	if (target)
		this->mapTarget[target->getType()] = target;
}

void	TargetGenerator::forgetTargetType(const std::string& targetType){
	std::map<std::string, ATarget *>::iterator it;
	
	it = this->mapTarget.find(targetType);
	if (it != this->mapTarget.end()){
		// delete it->second;
		this->mapTarget.erase(targetType);
	}
}

ATarget* TargetGenerator::createTarget(const std::string& type){
	ATarget *ptr = NULL;
	std::map<std::string, ATarget *>::iterator it;
	
	it = this->mapTarget.find(type);
	if (it != this->mapTarget.end()){
		ptr = it->second;
	}
	return (ptr);
}