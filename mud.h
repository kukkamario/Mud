#ifndef MUD_H
#define MUD_H
#include "gameeventloop.h"
#include "commandservice.h"
#include "room.h"
#include <boost/thread.hpp>
class Mud {
	public:
		Mud();
		~Mud();

		CommandService &commandService() { return mCommandService; }
		void start();
		void stop();
	private:
		boost::thread *mEventLoopThread;
		GameEventLoop mEventLoop;
		CommandService mCommandService;
		std::vector<Level*> mRooms;
};

#endif // MUD_H
