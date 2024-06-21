#pragma once

#include <type_traits>

template <typename T>
struct EnumFlagHelper {
	using type = std::underlying_type_t<T>;

	EnumFlagHelper(T value) {
		this->value = static_cast<type>(value);
	}

	explicit operator bool() const {
		return value != type();
	}

	operator T() const {
		return static_cast<T>(this->value);
	}

	explicit operator type() const {
		return value;
	}

private:

	type value;
};

#define MAKE_ENUM_FLAGS(FLAG_ENUM_NAME) \
	inline EnumFlagHelper<FLAG_ENUM_NAME> operator& (EnumFlagHelper<FLAG_ENUM_NAME> lhs, EnumFlagHelper<FLAG_ENUM_NAME> rhs) { \
		using type = std::underlying_type_t<FLAG_ENUM_NAME>; \
		return static_cast<FLAG_ENUM_NAME>(static_cast<type>(lhs) & static_cast<type>(rhs)); \
	} \
	\
	inline EnumFlagHelper<FLAG_ENUM_NAME> operator& (EnumFlagHelper<FLAG_ENUM_NAME> lhs, FLAG_ENUM_NAME rhs) { \
		return lhs & EnumFlagHelper<FLAG_ENUM_NAME>(rhs); \
	} \
	\
	inline EnumFlagHelper<FLAG_ENUM_NAME> operator& (FLAG_ENUM_NAME lhs, EnumFlagHelper<FLAG_ENUM_NAME> rhs) { \
		return EnumFlagHelper<FLAG_ENUM_NAME>(lhs) & rhs; \
	} \
	\
	inline EnumFlagHelper<FLAG_ENUM_NAME> operator& (FLAG_ENUM_NAME lhs, FLAG_ENUM_NAME rhs) { \
		return EnumFlagHelper<FLAG_ENUM_NAME>(lhs) & rhs; \
	} \
	\
	inline FLAG_ENUM_NAME& operator&= (FLAG_ENUM_NAME &lhs, FLAG_ENUM_NAME rhs) { \
		return lhs = EnumFlagHelper<FLAG_ENUM_NAME>(lhs) & rhs; \
	} \
	\
	\
	inline EnumFlagHelper<FLAG_ENUM_NAME> operator| (EnumFlagHelper<FLAG_ENUM_NAME> lhs, EnumFlagHelper<FLAG_ENUM_NAME> rhs) { \
		using type = std::underlying_type_t<FLAG_ENUM_NAME>; \
		return static_cast<FLAG_ENUM_NAME>(static_cast<type>(lhs) | static_cast<type>(rhs)); \
	} \
	\
	inline EnumFlagHelper<FLAG_ENUM_NAME> operator| (EnumFlagHelper<FLAG_ENUM_NAME> lhs, FLAG_ENUM_NAME rhs) { \
		return lhs | EnumFlagHelper<FLAG_ENUM_NAME>(rhs); \
	} \
	\
	inline EnumFlagHelper<FLAG_ENUM_NAME> operator| (FLAG_ENUM_NAME lhs, EnumFlagHelper<FLAG_ENUM_NAME> rhs) { \
		return EnumFlagHelper<FLAG_ENUM_NAME>(lhs) | rhs; \
	} \
	 \
	inline EnumFlagHelper<FLAG_ENUM_NAME> operator| (FLAG_ENUM_NAME lhs, FLAG_ENUM_NAME rhs) { \
		return EnumFlagHelper<FLAG_ENUM_NAME>(lhs) | rhs; \
	} \
	\
	inline FLAG_ENUM_NAME& operator|= (FLAG_ENUM_NAME &lhs, FLAG_ENUM_NAME rhs) { \
		return lhs = EnumFlagHelper<FLAG_ENUM_NAME>(lhs) | rhs; \
	} \
	\
	\
	inline EnumFlagHelper<FLAG_ENUM_NAME> operator~ (FLAG_ENUM_NAME rhs) { \
		using type = std::underlying_type_t<FLAG_ENUM_NAME>; \
		return static_cast<FLAG_ENUM_NAME>(~static_cast<type>(rhs)); \
	} \

/**
 *  Defines operator overloads to enable stadard math operations on an enum.
 *  Useful when an enum represents a range that can be iterated over.
 *
 *  Example usage:
 *   enum MyEnum {
 *       ENUM_A = 0,
 *       ENUM_B = 1,
 *       ENUM_C = 2,
 *   };
 *
 *   DEFINE_ENUMERATION_OPERATORS(MyEnum);
 */
#define DEFINE_ENUMERATION_OPERATORS(ENUMTYPE) \
    extern "C++" { \
    __forceinline ENUMTYPE operator++(ENUMTYPE const &a) { return (ENUMTYPE)(++((int &)a)); } \
    __forceinline ENUMTYPE operator--(ENUMTYPE const &a) { return (ENUMTYPE)(--((int &)a)); } \
    __forceinline constexpr ENUMTYPE operator+(ENUMTYPE const a, ENUMTYPE const b) \
    { \
        return (ENUMTYPE)(((int)a) + ((int)b)); \
    } \
    __forceinline constexpr ENUMTYPE operator-(ENUMTYPE const a, ENUMTYPE const b) \
    { \
        return (ENUMTYPE)(((int)a) - ((int)b)); \
    } \
    __forceinline constexpr ENUMTYPE operator*(ENUMTYPE const a, ENUMTYPE const b) \
    { \
        return (ENUMTYPE)(((int)a) * ((int)b)); \
    } \
    __forceinline constexpr ENUMTYPE operator/(ENUMTYPE const a, ENUMTYPE const b) \
    { \
        return (ENUMTYPE)(((int)a) / ((int)b)); \
    } \
    __forceinline constexpr ENUMTYPE operator%(ENUMTYPE const a, ENUMTYPE const b) \
    { \
        return (ENUMTYPE)(((int)a) % ((int)b)); \
    } \
    __forceinline ENUMTYPE &operator+=(ENUMTYPE &a, ENUMTYPE const b) \
    { \
        return (ENUMTYPE &)((int &)a = ((int &)a) + ((ENUMTYPE)b)); \
    } \
    __forceinline ENUMTYPE &operator-=(ENUMTYPE &a, ENUMTYPE const b) \
    { \
        return (ENUMTYPE &)((int &)a = ((int &)a) - ((ENUMTYPE)b)); \
    } \
    __forceinline ENUMTYPE operator++(ENUMTYPE const &a, int const b) { return (ENUMTYPE)(++((int &)a)); } \
    __forceinline ENUMTYPE operator--(ENUMTYPE const &a, int const b) { return (ENUMTYPE)(--((int &)a)); } \
    __forceinline constexpr ENUMTYPE operator+(ENUMTYPE const a, int const b) { return (ENUMTYPE)(((int)a) + ((int)b)); } \
    __forceinline constexpr ENUMTYPE operator-(ENUMTYPE const a, int const b) { return (ENUMTYPE)(((int)a) - ((int)b)); } \
    __forceinline constexpr ENUMTYPE operator*(ENUMTYPE const a, int const b) { return (ENUMTYPE)(((int)a) * ((int)b)); } \
    __forceinline constexpr ENUMTYPE operator/(ENUMTYPE const a, int const b) { return (ENUMTYPE)(((int)a) / ((int)b)); } \
    __forceinline constexpr ENUMTYPE operator%(ENUMTYPE const a, int const b) { return (ENUMTYPE)(((int)a) % ((int)b)); } \
    __forceinline ENUMTYPE &operator+=(ENUMTYPE &a, int const b) { return (ENUMTYPE &)((int &)a = ((int &)a) + ((int)b)); } \
    __forceinline ENUMTYPE &operator-=(ENUMTYPE &a, int const b) { return (ENUMTYPE &)((int &)a = ((int &)a) - ((int)b)); } \
    }
