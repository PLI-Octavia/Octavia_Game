#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Calcul
struct Calcul_t1630311936;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnScript
struct  SpawnScript_t1189265904  : public MonoBehaviour_t1158329972
{
public:
	// Calcul SpawnScript::calcul
	Calcul_t1630311936 * ___calcul_2;
	// UnityEngine.GameObject[] SpawnScript::all_number
	GameObjectU5BU5D_t3057952154* ___all_number_3;
	// UnityEngine.GameObject[] SpawnScript::all_operation
	GameObjectU5BU5D_t3057952154* ___all_operation_4;
	// UnityEngine.GameObject SpawnScript::EmptyGameObject
	GameObject_t1756533147 * ___EmptyGameObject_5;
	// UnityEngine.AudioSource SpawnScript::audio
	AudioSource_t1135106623 * ___audio_6;
	// System.Single SpawnScript::timer
	float ___timer_7;
	// System.Int32 SpawnScript::offset
	int32_t ___offset_8;

public:
	inline static int32_t get_offset_of_calcul_2() { return static_cast<int32_t>(offsetof(SpawnScript_t1189265904, ___calcul_2)); }
	inline Calcul_t1630311936 * get_calcul_2() const { return ___calcul_2; }
	inline Calcul_t1630311936 ** get_address_of_calcul_2() { return &___calcul_2; }
	inline void set_calcul_2(Calcul_t1630311936 * value)
	{
		___calcul_2 = value;
		Il2CppCodeGenWriteBarrier(&___calcul_2, value);
	}

	inline static int32_t get_offset_of_all_number_3() { return static_cast<int32_t>(offsetof(SpawnScript_t1189265904, ___all_number_3)); }
	inline GameObjectU5BU5D_t3057952154* get_all_number_3() const { return ___all_number_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_all_number_3() { return &___all_number_3; }
	inline void set_all_number_3(GameObjectU5BU5D_t3057952154* value)
	{
		___all_number_3 = value;
		Il2CppCodeGenWriteBarrier(&___all_number_3, value);
	}

	inline static int32_t get_offset_of_all_operation_4() { return static_cast<int32_t>(offsetof(SpawnScript_t1189265904, ___all_operation_4)); }
	inline GameObjectU5BU5D_t3057952154* get_all_operation_4() const { return ___all_operation_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_all_operation_4() { return &___all_operation_4; }
	inline void set_all_operation_4(GameObjectU5BU5D_t3057952154* value)
	{
		___all_operation_4 = value;
		Il2CppCodeGenWriteBarrier(&___all_operation_4, value);
	}

	inline static int32_t get_offset_of_EmptyGameObject_5() { return static_cast<int32_t>(offsetof(SpawnScript_t1189265904, ___EmptyGameObject_5)); }
	inline GameObject_t1756533147 * get_EmptyGameObject_5() const { return ___EmptyGameObject_5; }
	inline GameObject_t1756533147 ** get_address_of_EmptyGameObject_5() { return &___EmptyGameObject_5; }
	inline void set_EmptyGameObject_5(GameObject_t1756533147 * value)
	{
		___EmptyGameObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyGameObject_5, value);
	}

	inline static int32_t get_offset_of_audio_6() { return static_cast<int32_t>(offsetof(SpawnScript_t1189265904, ___audio_6)); }
	inline AudioSource_t1135106623 * get_audio_6() const { return ___audio_6; }
	inline AudioSource_t1135106623 ** get_address_of_audio_6() { return &___audio_6; }
	inline void set_audio_6(AudioSource_t1135106623 * value)
	{
		___audio_6 = value;
		Il2CppCodeGenWriteBarrier(&___audio_6, value);
	}

	inline static int32_t get_offset_of_timer_7() { return static_cast<int32_t>(offsetof(SpawnScript_t1189265904, ___timer_7)); }
	inline float get_timer_7() const { return ___timer_7; }
	inline float* get_address_of_timer_7() { return &___timer_7; }
	inline void set_timer_7(float value)
	{
		___timer_7 = value;
	}

	inline static int32_t get_offset_of_offset_8() { return static_cast<int32_t>(offsetof(SpawnScript_t1189265904, ___offset_8)); }
	inline int32_t get_offset_8() const { return ___offset_8; }
	inline int32_t* get_address_of_offset_8() { return &___offset_8; }
	inline void set_offset_8(int32_t value)
	{
		___offset_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
