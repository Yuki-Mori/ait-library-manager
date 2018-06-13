#pragma once

#include <vector>
#include <string>

namespace ait{
	class Command{
	protected:
		std::vector<std::string> args;
	public:
		Command(void);
		Command(std::vector<std::string>& args);
		Command(const Command& orig);
		virtual ~Command(void);
		virtual Command& operator=(const Command& orig);
		virtual int done(std::vector<std::string>& args);
	};
}
