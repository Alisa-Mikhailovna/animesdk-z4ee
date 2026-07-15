#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4FDE7BD2AFF1282_RF_ReplicatedComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/AuthorityType.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationDormancy.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationNetMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_33;
class Class_0_16E4307DCC419505_34;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_C4FDE7BD2AFF1282_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A5DB280)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A5DB760)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A5DB700)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_0768FB66D3BD1D5F_1_OFFSET UNITYSDK_OFFSET(0x1A5DB5A0)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_0768FB66D3BD1D5F_OFFSET UNITYSDK_OFFSET(0x1A5DB7C0)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_123DFB09BD2C9B9E_1_OFFSET UNITYSDK_OFFSET(0x1A5DB770)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x1A5DB710)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_218AE78032892024_OFFSET UNITYSDK_OFFSET(0x1A5DBE20)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A5DBE70)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_42C29079DF11177F_OFFSET UNITYSDK_OFFSET(0x1A5DB860)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET UNITYSDK_OFFSET(0x1A5DB3C0)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_6285BDB5F710BE1B_OFFSET UNITYSDK_OFFSET(0x1A5DB6A0)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_73A4DEDC9A9B612C_OFFSET UNITYSDK_OFFSET(0x1A5DB6B0)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_A36DD6986EFA06F9_OFFSET UNITYSDK_OFFSET(0x1A5DBB40)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_A78B34F2E0416E2F_OFFSET UNITYSDK_OFFSET(0x1A5DBDC0)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_AF635CB4D1C740EA_OFFSET UNITYSDK_OFFSET(0x1A5DB800)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A5DB640)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A5DB600)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x1A5DB650)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_DE8E5395F2768D5C_OFFSET UNITYSDK_OFFSET(0x1A5DB430)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_E181B48580567B4B_OFFSET UNITYSDK_OFFSET(0x1A5DB4E0)
#define CLASS_1_C4FDE7BD2AFF1282_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A5DB5F0)
#define CLASS_1_C4FDE7BD2AFF1282__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5DBEC0)

inline static constexpr unsigned int Class_1_C4FDE7BD2AFF1282_TypeDefinitionIndex = 35290;

class Class_1_C4FDE7BD2AFF1282 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::RPG::Client::LittleGameShare::ReplicationDormancy Field_1_5; // 0x30
	::Class_1_C4FDE7BD2AFF1282_RF_ReplicatedComponent Field_1_6; // 0x31
	::RPG::Client::LittleGameShare::AuthorityType Field_1_7; // 0x32
	::RPG::Client::LittleGameShare::ReplicationNetMode Field_1_8; // 0x33
	::System::Int32 Field_1_9; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_4EC2E1ECDEE1B9F2(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DE8E5395F2768D5C(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_DE8E5395F2768D5C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E181B48580567B4B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_E181B48580567B4B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_D09831639F615812_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::AuthorityType Method_1_6285BDB5F710BE1B()
	{
		return ((::RPG::Client::LittleGameShare::AuthorityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_6285BDB5F710BE1B_OFFSET))(this);
	}

	::System::Void Method_1_73A4DEDC9A9B612C(::RPG::Client::LittleGameShare::AuthorityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::AuthorityType))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_73A4DEDC9A9B612C_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_123DFB09BD2C9B9E_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_123DFB09BD2C9B9E_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_0768FB66D3BD1D5F()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_0768FB66D3BD1D5F_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_0768FB66D3BD1D5F_1()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_0768FB66D3BD1D5F_1_OFFSET))(this);
	}

	::System::Void Method_1_AF635CB4D1C740EA(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_AF635CB4D1C740EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_42C29079DF11177F(::Class_0_16E4307DCC419505_33* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_33*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_42C29079DF11177F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A36DD6986EFA06F9(::Class_0_16E4307DCC419505_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_34*))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_A36DD6986EFA06F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_A78B34F2E0416E2F(::Class_0_16E4307DCC419505_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_34*))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_A78B34F2E0416E2F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_218AE78032892024(::Class_1_C4FDE7BD2AFF1282_RF_ReplicatedComponent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FDE7BD2AFF1282_RF_ReplicatedComponent))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_218AE78032892024_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FDE7BD2AFF1282_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
