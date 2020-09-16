#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include <memory>

namespace bbly {
	class BBLY_API Log {
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger(){
			return s_CoreLogger;
		}
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger(){
			return s_ClientLogger;
		}
		Log();
		~Log();
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core Logs
#define BBLY_CORE_TRACE(...) ::bbly::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BBLY_CORE_INFO(...)  ::bbly::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BBLY_CORE_WARN(...)  ::bbly::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BBLY_CORE_ERROR(...) ::bbly::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BBLY_CORE_FATAL(...) ::bbly::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client Logs
#define BBLY_TRACE(...) ::bbly::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BBLY_INFO(...)  ::bbly::Log::GetClientLogger()->info(__VA_ARGS__)
#define BBLY_WARN(...)  ::bbly::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BBLY_ERROR(...) ::bbly::Log::GetClientLogger()->error(__VA_ARGS__)
#define BBLY_FATAL(...) ::bbly::Log::GetClientLogger()->fatal(__VA_ARGS__)