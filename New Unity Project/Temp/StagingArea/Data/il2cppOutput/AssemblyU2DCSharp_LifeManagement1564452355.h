#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LifeManagement
struct  LifeManagement_t1564452355  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 LifeManagement::LastLife
	int32_t ___LastLife_2;
	// UnityEngine.GameObject[] LifeManagement::life
	GameObjectU5BU5D_t3057952154* ___life_3;
	// UnityEngine.GameObject LifeManagement::lifePrefabs
	GameObject_t1756533147 * ___lifePrefabs_4;

public:
	inline static int32_t get_offset_of_LastLife_2() { return static_cast<int32_t>(offsetof(LifeManagement_t1564452355, ___LastLife_2)); }
	inline int32_t get_LastLife_2() const { return ___LastLife_2; }
	inline int32_t* get_address_of_LastLife_2() { return &___LastLife_2; }
	inline void set_LastLife_2(int32_t value)
	{
		___LastLife_2 = value;
	}

	inline static int32_t get_offset_of_life_3() { return static_cast<int32_t>(offsetof(LifeManagement_t1564452355, ___life_3)); }
	inline GameObjectU5BU5D_t3057952154* get_life_3() const { return ___life_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_life_3() { return &___life_3; }
	inline void set_life_3(GameObjectU5BU5D_t3057952154* value)
	{
		___life_3 = value;
		Il2CppCodeGenWriteBarrier(&___life_3, value);
	}

	inline static int32_t get_offset_of_lifePrefabs_4() { return static_cast<int32_t>(offsetof(LifeManagement_t1564452355, ___lifePrefabs_4)); }
	inline GameObject_t1756533147 * get_lifePrefabs_4() const { return ___lifePrefabs_4; }
	inline GameObject_t1756533147 ** get_address_of_lifePrefabs_4() { return &___lifePrefabs_4; }
	inline void set_lifePrefabs_4(GameObject_t1756533147 * value)
	{
		___lifePrefabs_4 = value;
		Il2CppCodeGenWriteBarrier(&___lifePrefabs_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
