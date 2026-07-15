#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x19B1F300)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x19B1F4E0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x19B1F740)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x19B1F960)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x19B1FBD0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x19B1FE00)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x19B20000)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x19B20330)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_OFFSET UNITYSDK_OFFSET(0x19B1F0E0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x19B1F140)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x19B1F360)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x19B1F540)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x19B1F7A0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x19B1F9C0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x19B1FC30)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x19B1FE60)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x19B20190)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_OFFSET UNITYSDK_OFFSET(0x19B1EEF0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_1_OFFSET UNITYSDK_OFFSET(0x19B204F0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_2_OFFSET UNITYSDK_OFFSET(0x19B20510)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_3_OFFSET UNITYSDK_OFFSET(0x19B20550)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_4_OFFSET UNITYSDK_OFFSET(0x19B205C0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_5_OFFSET UNITYSDK_OFFSET(0x19B20610)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_6_OFFSET UNITYSDK_OFFSET(0x19B206B0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_7_OFFSET UNITYSDK_OFFSET(0x19B20720)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_OFFSET UNITYSDK_OFFSET(0x19B204D0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_10_OFFSET UNITYSDK_OFFSET(0x19AE4400)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x19AF1F40)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x19AE8640)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x19AE27E0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x19AF2B40)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x19AE8B40)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x19AF3040)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x19AE9040)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x19AF3540)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_9_OFFSET UNITYSDK_OFFSET(0x19AF2410)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x19AE1190)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int UnsafeRefSerializeHelper_TypeDefinitionIndex = 7267;

	class UnsafeRefSerializeHelper : public ::System::Object
	{
	public:
		static ::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Boolean& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Boolean&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Serialize_1(::MessagePack::MessagePackWriter& a1, ::System::SByte& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::SByte&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BigEndianSerialize(::MessagePack::MessagePackWriter& a1, ::System::SByte& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::SByte&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LittleEndianSerialize(::MessagePack::MessagePackWriter& a1, ::System::SByte& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::SByte&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Serialize_2(::MessagePack::MessagePackWriter& a1, ::System::Int16& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BigEndianSerialize_1(::MessagePack::MessagePackWriter& a1, ::System::Int16& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LittleEndianSerialize_1(::MessagePack::MessagePackWriter& a1, ::System::Int16& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Serialize_3(::MessagePack::MessagePackWriter& a1, ::System::Char& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Char&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Serialize_4(::MessagePack::MessagePackWriter& a1, ::System::UInt16& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BigEndianSerialize_2(::MessagePack::MessagePackWriter& a1, ::System::UInt16& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LittleEndianSerialize_2(::MessagePack::MessagePackWriter& a1, ::System::UInt16& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Serialize_5(::MessagePack::MessagePackWriter& a1, ::System::Int32& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BigEndianSerialize_3(::MessagePack::MessagePackWriter& a1, ::System::Int32& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LittleEndianSerialize_3(::MessagePack::MessagePackWriter& a1, ::System::Int32& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Serialize_6(::MessagePack::MessagePackWriter& a1, ::System::UInt32& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_6_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BigEndianSerialize_4(::MessagePack::MessagePackWriter& a1, ::System::UInt32& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LittleEndianSerialize_4(::MessagePack::MessagePackWriter& a1, ::System::UInt32& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Serialize_7(::MessagePack::MessagePackWriter& a1, ::System::Int64& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_7_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BigEndianSerialize_5(::MessagePack::MessagePackWriter& a1, ::System::Int64& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LittleEndianSerialize_5(::MessagePack::MessagePackWriter& a1, ::System::Int64& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Serialize_8(::MessagePack::MessagePackWriter& a1, ::System::UInt64& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_8_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BigEndianSerialize_6(::MessagePack::MessagePackWriter& a1, ::System::UInt64& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_6_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LittleEndianSerialize_6(::MessagePack::MessagePackWriter& a1, ::System::UInt64& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_6_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Serialize_9(::MessagePack::MessagePackWriter& a1, ::System::Single& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Single&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_9_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BigEndianSerialize_7(::MessagePack::MessagePackWriter& a1, ::System::Single& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Single&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_7_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LittleEndianSerialize_7(::MessagePack::MessagePackWriter& a1, ::System::Single& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Single&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_7_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Serialize_10(::MessagePack::MessagePackWriter& a1, ::System::Double& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Double&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_10_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BigEndianSerialize_8(::MessagePack::MessagePackWriter& a1, ::System::Double& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Double&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_8_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LittleEndianSerialize_8(::MessagePack::MessagePackWriter& a1, ::System::Double& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Double&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_8_OFFSET))(a1, a2, a3);
		}

		static ::System::UIntPtr ReverseWriteUnknown(::System::Byte& a1, ::System::Byte a2)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_OFFSET))(a1, a2);
		}

		static ::System::UIntPtr ReverseWriteUnknown_1(::System::Byte& a1, ::System::SByte a2)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::SByte))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_1_OFFSET))(a1, a2);
		}

		static ::System::UIntPtr ReverseWriteUnknown_2(::System::Byte& a1, ::System::UInt16 a2)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::UInt16))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_2_OFFSET))(a1, a2);
		}

		static ::System::UIntPtr ReverseWriteUnknown_3(::System::Byte& a1, ::System::Int16 a2)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::Int16))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_3_OFFSET))(a1, a2);
		}

		static ::System::UIntPtr ReverseWriteUnknown_4(::System::Byte& a1, ::System::UInt32 a2)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_4_OFFSET))(a1, a2);
		}

		static ::System::UIntPtr ReverseWriteUnknown_5(::System::Byte& a1, ::System::Int32 a2)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_5_OFFSET))(a1, a2);
		}

		static ::System::UIntPtr ReverseWriteUnknown_6(::System::Byte& a1, ::System::UInt64 a2)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_6_OFFSET))(a1, a2);
		}

		static ::System::UIntPtr ReverseWriteUnknown_7(::System::Byte& a1, ::System::Int64 a2)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::Int64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_7_OFFSET))(a1, a2);
		}
	};
}
