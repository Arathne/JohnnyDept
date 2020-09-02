#ifndef END_NODE_H
#define END_NODE_H

#include "node.h"

class EndNode : public Node
{
	public:
		EndNode (std::string msg);
		~EndNode (void);
		
		int process (Player & player);


	private:
		EndNode (void);

		std::string msg_;
};

#endif
