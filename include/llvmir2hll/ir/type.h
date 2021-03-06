/**
* @file include/llvmir2hll/ir/type.h
* @brief A base class of all types.
* @copyright (c) 2017 Avast Software, licensed under the MIT license
*/

#ifndef LLVMIR2HLL_IR_TYPE_H
#define LLVMIR2HLL_IR_TYPE_H

#include "llvmir2hll/ir/value.h"

namespace llvmir2hll {

/**
* @brief A base class of all types.
*
* Instances of this class have reference object semantics.
*/
class Type: public Value {
public:
	virtual ~Type() = 0;

protected:
	Type();
};

} // namespace llvmir2hll

#endif
