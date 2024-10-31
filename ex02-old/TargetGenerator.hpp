#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <map>
#include "ATarget.hpp"

class ATarget;

class TargetGenerator{
	private:
		std::map<std::string, ATarget *> mapTarget;
		TargetGenerator(const TargetGenerator& toCopy);
		TargetGenerator& operator=(const TargetGenerator& toCopy);
		
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget *target);
		void forgetTargetType(const std::string& targetType);
		ATarget* createTarget(const std::string& type);
};

#endif