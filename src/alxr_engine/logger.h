// Copyright (c) 2017-2023, The Khronos Group Inc.
//
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include <cstdint>
#include <string>

#undef None

namespace Log {
enum class Level : std::uint32_t { Verbose, Info, Warning, Error };

void SetLevel(Level minSeverity);
void Write(Level severity, const std::string& msg);

enum LogOptions : std::uint32_t {
	None = 0,
	Timestamp = (1<<0u),
	LevelTag  = (1<<1u)
};
using OutputFn = void (*)(Level level, const char* output, std::uint32_t len);
void SetLogCustomOutput(const LogOptions options, OutputFn outputFn);
}  // namespace Log
