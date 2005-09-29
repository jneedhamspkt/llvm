//=====-- AlphaSubtarget.h - Define Subtarget for the Alpha --*- C++ -*--====//
//
//                     The LLVM Compiler Infrastructure
//
// This file was developed by Andrew Lenharth and is distributed under the
// University of Illinois Open Source License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file declares the Alpha specific subclass of TargetSubtarget.
//
//===----------------------------------------------------------------------===//

#ifndef ALPHASUBTARGET_H
#define ALPHASUBTARGET_H

#include "llvm/Target/TargetSubtarget.h"

#include <string>

namespace llvm {
class Module;

class AlphaSubtarget : public TargetSubtarget {
protected:

  /// Used by the ISel to turn in optimizations for POWER4-derived architectures
  bool HasF2I;
  bool HasCT;

public:
  /// This constructor initializes the data members to match that
  /// of the specified module.
  ///
  AlphaSubtarget(const Module &M, const std::string &FS);

  bool hasF2I() const { return HasF2I; }
  bool hasCT() const { return HasCT; }
};
} // End llvm namespace

#endif
