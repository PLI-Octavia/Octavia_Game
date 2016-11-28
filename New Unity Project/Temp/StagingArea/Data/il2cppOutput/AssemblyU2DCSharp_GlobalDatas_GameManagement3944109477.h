#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Random
struct Random_t1044426839;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GlobalDatas.GameManagement
struct  GameManagement_t3944109477  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct GameManagement_t3944109477_StaticFields
{
public:
	// System.Single GlobalDatas.GameManagement::timer
	float ___timer_2;
	// System.Int32 GlobalDatas.GameManagement::level
	int32_t ___level_3;
	// System.Int32 GlobalDatas.GameManagement::score
	int32_t ___score_4;
	// System.Int32 GlobalDatas.GameManagement::life
	int32_t ___life_5;
	// System.Random GlobalDatas.GameManagement::rnd
	Random_t1044426839 * ___rnd_6;

public:
	inline static int32_t get_offset_of_timer_2() { return static_cast<int32_t>(offsetof(GameManagement_t3944109477_StaticFields, ___timer_2)); }
	inline float get_timer_2() const { return ___timer_2; }
	inline float* get_address_of_timer_2() { return &___timer_2; }
	inline void set_timer_2(float value)
	{
		___timer_2 = value;
	}

	inline static int32_t get_offset_of_level_3() { return static_cast<int32_t>(offsetof(GameManagement_t3944109477_StaticFields, ___level_3)); }
	inline int32_t get_level_3() const { return ___level_3; }
	inline int32_t* get_address_of_level_3() { return &___level_3; }
	inline void set_level_3(int32_t value)
	{
		___level_3 = value;
	}

	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(GameManagement_t3944109477_StaticFields, ___score_4)); }
	inline int32_t get_score_4() const { return ___score_4; }
	inline int32_t* get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(int32_t value)
	{
		___score_4 = value;
	}

	inline static int32_t get_offset_of_life_5() { return static_cast<int32_t>(offsetof(GameManagement_t3944109477_StaticFields, ___life_5)); }
	inline int32_t get_life_5() const { return ___life_5; }
	inline int32_t* get_address_of_life_5() { return &___life_5; }
	inline void set_life_5(int32_t value)
	{
		___life_5 = value;
	}

	inline static int32_t get_offset_of_rnd_6() { return static_cast<int32_t>(offsetof(GameManagement_t3944109477_StaticFields, ___rnd_6)); }
	inline Random_t1044426839 * get_rnd_6() const { return ___rnd_6; }
	inline Random_t1044426839 ** get_address_of_rnd_6() { return &___rnd_6; }
	inline void set_rnd_6(Random_t1044426839 * value)
	{
		___rnd_6 = value;
		Il2CppCodeGenWriteBarrier(&___rnd_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
