#pragma once

#include "Command.hpp"

namespace ait{
	class Init : public Command{
	public:
		Init(void);
		virtual ~Init(void);
		int done(std::vector<std::string>& args)override;
	};
}
