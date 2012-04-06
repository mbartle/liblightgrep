#pragma once

#include <string>
#include <vector>
#include <utility>

#include "pattern.h"

class PatternInfo {
public:
  PatternInfo(): NumUserPatterns(0) {}

  virtual ~PatternInfo() {}

  bool empty() const { return 0 == NumUserPatterns; }

  uint32 NumUserPatterns;
  std::vector<Pattern> Patterns;
  std::vector<std::pair<uint32, uint32>> Table;
};
