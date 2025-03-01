#pragma once
#include <type_traits>

// IMO under no circumstances should we set the vtable address for a class from vanilla game in general,
// we do this only for pointers
// For the addresses declare them in their class, not here. Pay attention to templated ones like DVC
namespace VTable
{
	template<typename T>
	constexpr void Set(const T ptr, uintptr_t addr)
	{
		static_assert(std::is_pointer<T>::value, "T must be a pointer");

		reinterpret_cast<uintptr_t*>(ptr)[0] = addr;
	}

	template<typename T>
	constexpr uintptr_t Get(const T ptr)
	{
		static_assert(std::is_pointer<T>::value, "T must be a pointer");

		if constexpr (std::is_volatile_v<std::remove_pointer_t<T>> || std::is_const_v<std::remove_pointer_t<T>>)
			return reinterpret_cast<const volatile uintptr_t*>(ptr)[0];
		else
			return reinterpret_cast<uintptr_t*>(ptr)[0];
	}
}
// Not sure if correct for all cases yet
