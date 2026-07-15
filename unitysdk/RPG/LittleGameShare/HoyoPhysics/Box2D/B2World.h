#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Array_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyMoveEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ConstraintGraph.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactBeginTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactEndTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactHitEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Profile.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorBeginTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorEndTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2ArenaAllocator; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Body; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BroadPhase; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2ChainShape; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Contact; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2IdPool; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Island; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Joint; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Sensor; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2SensorTaskContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Shape; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2SolverSet; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2TaskContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2WorkerContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2CustomFilterFcn; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2EnqueueTaskCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2FinishTaskCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2FrictionCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2PreSolveFcn; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2RestitutionCallback; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A7092F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A709530)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2World_TypeDefinitionIndex = 35266;

	class B2World : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*> shapes; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorTaskContext*> sensorTaskContexts; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint*> joints; // 0x30
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FrictionCallback* frictionCallback; // 0x40
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*> bodies; // 0x48
		::System::Object* userTreeTask; // 0x58
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ConstraintGraph constraintGraph; // 0x60
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2EnqueueTaskCallback* enqueueTaskFcn; // 0x68
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactEndTouchEvent>>* contactEndEvents; // 0x70
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2RestitutionCallback* restitutionCallback; // 0x78
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* solverSetIdPool; // 0x80
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorBeginTouchEvent> sensorBeginEvents; // 0x88
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* contactIdPool; // 0x98
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverSet*> solverSets; // 0xA0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2PreSolveFcn* preSolveFcn; // 0xB0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArenaAllocator* arena; // 0xB8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Island*> islands; // 0xC0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* jointIdPool; // 0xD0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainShape*> chainShapes; // 0xD8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sensor*> sensors; // 0xE8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactBeginTouchEvent> contactBeginEvents; // 0xF8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* islandIdPool; // 0x108
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FinishTaskCallback* finishTaskFcn; // 0x110
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* shapeIdPool; // 0x118
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactHitEvent> contactHitEvents; // 0x120
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointEvent> jointEvents; // 0x130
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorEndTouchEvent>>* sensorEndEvents; // 0x140
		::System::Object* preSolveContext; // 0x148
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyMoveEvent> bodyMoveEvents; // 0x150
		::System::Object* customFilterContext; // 0x160
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* broadPhase; // 0x168
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TaskContext*> taskContexts; // 0x170
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* chainIdPool; // 0x180
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2CustomFilterFcn* customFilterFcn; // 0x188
		::System::Object* userTaskContext; // 0x190
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorkerContext*>* tempWorkerContext; // 0x198
		::System::Object* userData; // 0x1A0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* bodyIdPool; // 0x1A8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact*> contacts; // 0x1B0
		::System::Single contactHertz; // 0x1C0
		::System::Single hitEventThreshold; // 0x1C4
		::System::Boolean locked; // 0x1C8
		::System::Boolean enableContinuous; // 0x1C9
		::System::Boolean enableWarmStarting; // 0x1CA
		::System::Boolean enableSpeculative; // 0x1CB
		::System::Int32 workerCount; // 0x1CC
		::System::UInt64 stepIndex; // 0x1D0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 gravity; // 0x1D8
		::System::Single contactDampingRatio; // 0x1E0
		::System::Single contactSpeed; // 0x1E4
		::System::UInt16 worldId; // 0x1E8
		::System::Boolean enableSleep; // 0x1EA
		::System::Single inv_h; // 0x1EC
		::System::Int32 activeTaskCount; // 0x1F0
		::System::Int32 splitIslandId; // 0x1F4
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Profile profile; // 0x1F8
		::System::Single restitutionThreshold; // 0x258
		::System::Single maxLinearSpeed; // 0x25C
		::System::Int32 endEventArrayIndex; // 0x260
		::System::Int32 taskCount; // 0x264

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLD__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLD_CLEAR_OFFSET))(this);
		}
	};
}
