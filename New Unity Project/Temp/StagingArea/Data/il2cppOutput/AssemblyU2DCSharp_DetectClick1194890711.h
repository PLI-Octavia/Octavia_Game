#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetectClick
struct  DetectClick_t1194890711  : public MonoBehaviour_t1158329972
{
public:
	// System.Single DetectClick::speed
	float ___speed_2;
	// System.Boolean DetectClick::isCorrect
	bool ___isCorrect_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(DetectClick_t1194890711, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_isCorrect_3() { return static_cast<int32_t>(offsetof(DetectClick_t1194890711, ___isCorrect_3)); }
	inline bool get_isCorrect_3() const { return ___isCorrect_3; }
	inline bool* get_address_of_isCorrect_3() { return &___isCorrect_3; }
	inline void set_isCorrect_3(bool value)
	{
		___isCorrect_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
