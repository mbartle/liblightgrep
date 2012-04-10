#pragma once

#include "graph.h"
#include "transition.h"
#include "transitionfactory.h"
#include "vectorfamily.h"

#include <limits>
#include <memory>
#include <string>

struct Properties {
  Properties(): Deterministic(true), TransFac(new TransitionFactory()) {}

  bool Deterministic;
  std::shared_ptr<TransitionFactory> TransFac;
};

struct Glushkov {
  static const uint32 NOLABEL;

  Glushkov(): Trans(0), IsMatch(false), Label(NOLABEL) {}

  std::string label() const {
    std::stringstream buf;
    if (Trans) {
      buf << Trans->label();
      if (Label != NOLABEL) {
        buf << "/" << Label;
      }
    }
    return buf.str();
  }

  Transition* Trans;
  bool IsMatch;
  uint32 Label;
};

struct Empty {};

typedef Graph<Properties,Glushkov,Empty,VectorFamily> NFA;
typedef std::shared_ptr<NFA> NFAPtr;
