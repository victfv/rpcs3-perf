#pragma once
#include <atomic>

namespace perf
{
	extern std::atomic<bool> capture_enabled;

	void start_capture();
	void stop_capture();
}
