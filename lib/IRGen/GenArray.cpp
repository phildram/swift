//===--- GenArray.cpp - Swift IR Generation for Array Types -----------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2015 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See http://swift.org/LICENSE.txt for license information
// See http://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
//
//  This file implements IR generation for array types in Swift.  This
//  includes creating the IR type as well as performing primitive array
//  access operations.
//
//===----------------------------------------------------------------------===//

#include "swift/AST/Types.h"
#include "swift/AST/Decl.h"
#include "llvm/DerivedTypes.h"

#include "Address.h"
#include "GenType.h"
#include "IRGenModule.h"

using namespace swift;
using namespace irgen;

namespace {
  class ArrayTypeInfo : public TypeInfo {
  public:
    ArrayTypeInfo() : TypeInfo(nullptr, Size(0), Alignment(0)) {}

    unsigned getExplosionSize(ExplosionKind kind) const {
      return 1;
    }

    void getExplosionSchema(ExplosionSchema &schema) const {
      // FIXME
    }

    void loadExplosion(IRGenFunction &IGF, Address addr, Explosion &explosion) const {
      // FIXME
    }

    void storeExplosion(IRGenFunction &IGF, Explosion &explosion, Address addr) const {
      // FIXME
    }

    void reexplode(IRGenFunction &IGF, Explosion &src, Explosion &dest) const {
      // FIXME
    }
  };
}

const TypeInfo *
TypeConverter::convertArrayType(IRGenModule &IGM, ArrayType *T) {
  // FIXME
  return new ArrayTypeInfo();
}
