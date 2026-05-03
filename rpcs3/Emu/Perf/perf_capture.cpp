#include "perf_capture.h"

namespace perf
{
	std::atomic<bool> capture_enabled = false;

	void start_capture()
	{
		capture_enabled = true;
	}

	void stop_capture()
	{
		capture_enabled = false;
	}
}
