// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_16_new,"Player","new",0x8d5554f3,"Player.new","Player.hx",16,0xa27fc9dd)
static const int _hx_array_data_6c4d5f81_1[] = {
	(int)3,(int)4,(int)3,(int)5,
};
static const int _hx_array_data_6c4d5f81_2[] = {
	(int)6,(int)7,(int)6,(int)8,
};
static const int _hx_array_data_6c4d5f81_3[] = {
	(int)0,(int)1,(int)0,(int)2,
};
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_41_update,"Player","update",0xf1f8df56,"Player.update","Player.hx",41,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_48_movement,"Player","movement",0x91ad8bbc,"Player.movement","Player.hx",48,0xa27fc9dd)
static const int _hx_array_data_6c4d5f81_6[] = {
	(int)87,
};
static const int _hx_array_data_6c4d5f81_7[] = {
	(int)83,
};
static const int _hx_array_data_6c4d5f81_8[] = {
	(int)65,
};
static const int _hx_array_data_6c4d5f81_9[] = {
	(int)68,
};
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_105_animate,"Player","animate",0xa447a4b4,"Player.animate","Player.hx",105,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_120_shoot,"Player","shoot",0x70019132,"Player.shoot","Player.hx",120,0xa27fc9dd)
static const int _hx_array_data_6c4d5f81_12[] = {
	(int)38,
};
static const int _hx_array_data_6c4d5f81_13[] = {
	(int)40,
};
static const int _hx_array_data_6c4d5f81_14[] = {
	(int)37,
};
static const int _hx_array_data_6c4d5f81_15[] = {
	(int)39,
};

void Player_obj::__construct( ::Dynamic __o_X, ::Dynamic __o_Y){
 ::Dynamic X = __o_X.Default(0);
 ::Dynamic Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_16_new)
HXLINE(  18)		this->speed = ((Float)200);
HXLINE(  23)		super::__construct(X,Y,null());
HXLINE(  25)		this->loadGraphic(HX_("assets/images/player.png",87,88,81,c6),true,(int)32,(int)32,null(),null());
HXLINE(  26)		::haxe::IMap_obj::set(this->_facingFlip,(int)1, ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),false)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  27)		::haxe::IMap_obj::set(this->_facingFlip,(int)16, ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),true)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  29)		this->animation->add(HX_("lr",86,5e,00,00),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_1,4),(int)6,false,null(),null());
HXLINE(  30)		this->animation->add(HX_("u",75,00,00,00),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_2,4),(int)6,false,null(),null());
HXLINE(  31)		this->animation->add(HX_("d",64,00,00,00),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_3,4),(int)6,false,null(),null());
HXLINE(  33)		this->_sndStep = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/step_2.wav",5c,99,3c,2a),null(),null(),null(),null(),null(),null(),null());
HXLINE(  35)		 ::flixel::math::FlxPoint _hx_tmp = this->drag;
HXDLIN(  35)		_hx_tmp->set_x(this->drag->set_y((int)900));
HXLINE(  36)		this->setSize((int)16,(int)28);
HXLINE(  37)		this->offset->set((int)8,(int)4);
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

void *Player_obj::_hx_vtable = 0;

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Player_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x0b6ffd77) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x2e105115 || inClassId==(int)0x6c4d5f81;
	}
}

void Player_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_41_update)
HXLINE(  42)		this->movement();
HXLINE(  43)		this->shoot();
HXLINE(  44)		this->super::update(elapsed);
            	}


void Player_obj::movement(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_48_movement)
HXLINE(  49)		bool walk_up = false;
HXLINE(  50)		bool walk_down = false;
HXLINE(  51)		bool walk_left = false;
HXLINE(  52)		bool walk_right = false;
HXLINE(  54)		walk_up = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_6,1),(int)1);
HXLINE(  55)		walk_down = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_7,1),(int)1);
HXLINE(  56)		walk_left = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_8,1),(int)1);
HXLINE(  57)		walk_right = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_9,1),(int)1);
HXLINE(  59)		bool _hx_tmp;
HXDLIN(  59)		if (walk_up) {
HXLINE(  59)			_hx_tmp = walk_down;
            		}
            		else {
HXLINE(  59)			_hx_tmp = false;
            		}
HXDLIN(  59)		if (_hx_tmp) {
HXLINE(  60)			walk_down = false;
HXDLIN(  60)			walk_up = walk_down;
            		}
HXLINE(  61)		bool _hx_tmp1;
HXDLIN(  61)		if (walk_left) {
HXLINE(  61)			_hx_tmp1 = walk_right;
            		}
            		else {
HXLINE(  61)			_hx_tmp1 = false;
            		}
HXDLIN(  61)		if (_hx_tmp1) {
HXLINE(  62)			walk_right = false;
HXDLIN(  62)			walk_left = walk_right;
            		}
HXLINE(  64)		bool _hx_tmp2;
HXDLIN(  64)		bool _hx_tmp3;
HXDLIN(  64)		bool _hx_tmp4;
HXDLIN(  64)		if (!(walk_up)) {
HXLINE(  64)			_hx_tmp4 = walk_down;
            		}
            		else {
HXLINE(  64)			_hx_tmp4 = true;
            		}
HXDLIN(  64)		if (!(_hx_tmp4)) {
HXLINE(  64)			_hx_tmp3 = walk_left;
            		}
            		else {
HXLINE(  64)			_hx_tmp3 = true;
            		}
HXDLIN(  64)		if (!(_hx_tmp3)) {
HXLINE(  64)			_hx_tmp2 = walk_right;
            		}
            		else {
HXLINE(  64)			_hx_tmp2 = true;
            		}
HXDLIN(  64)		if (_hx_tmp2) {
HXLINE(  66)			Float mA = (int)0;
HXLINE(  67)			if (walk_up) {
HXLINE(  69)				mA = (int)-90;
HXLINE(  70)				if (walk_left) {
HXLINE(  71)					mA = (mA - (int)45);
            				}
            				else {
HXLINE(  72)					if (walk_right) {
HXLINE(  73)						mA = (mA + (int)45);
            					}
            				}
HXLINE(  74)				this->set_facing((int)256);
            			}
            			else {
HXLINE(  76)				if (walk_down) {
HXLINE(  78)					mA = (int)90;
HXLINE(  79)					if (walk_left) {
HXLINE(  80)						mA = (mA + (int)45);
            					}
            					else {
HXLINE(  81)						if (walk_right) {
HXLINE(  82)							mA = (mA - (int)45);
            						}
            					}
HXLINE(  83)					this->set_facing((int)4096);
            				}
            				else {
HXLINE(  85)					if (walk_left) {
HXLINE(  87)						mA = (int)180;
HXLINE(  88)						this->set_facing((int)1);
            					}
            					else {
HXLINE(  90)						if (walk_right) {
HXLINE(  92)							mA = (int)0;
HXLINE(  93)							this->set_facing((int)16);
            						}
            					}
            				}
            			}
HXLINE(  96)			this->_sndStep->play(null(),null(),null());
HXLINE(  97)			this->velocity->set(this->speed,(int)0);
HXLINE(  98)			 ::flixel::math::FlxPoint _hx_tmp5 = this->velocity;
HXDLIN(  98)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  98)			point->_inPool = false;
HXDLIN(  98)			 ::flixel::math::FlxPoint point1 = point;
HXDLIN(  98)			point1->_weak = true;
HXDLIN(  98)			_hx_tmp5->rotate(point1,mA);
HXLINE(  99)			this->animate();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,movement,(void))

void Player_obj::animate(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_105_animate)
HXDLIN( 105)		if ((this->touching == (int)0)) {
HXLINE( 107)			int _g = this->facing;
HXDLIN( 107)			switch((int)(_g)){
            				case (int)1: case (int)16: {
HXLINE( 110)					this->animation->play(HX_("lr",86,5e,00,00),null(),null(),null());
            				}
            				break;
            				case (int)256: {
HXLINE( 112)					this->animation->play(HX_("u",75,00,00,00),null(),null(),null());
            				}
            				break;
            				case (int)4096: {
HXLINE( 114)					this->animation->play(HX_("d",64,00,00,00),null(),null(),null());
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,animate,(void))

bool Player_obj::shoot(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_120_shoot)
HXLINE( 121)		bool shoot_up = false;
HXLINE( 122)		bool shoot_down = false;
HXLINE( 123)		bool shoot_left = false;
HXLINE( 124)		bool shoot_right = false;
HXLINE( 126)		shoot_up = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_12,1),(int)1);
HXLINE( 127)		shoot_down = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_13,1),(int)1);
HXLINE( 128)		shoot_left = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_14,1),(int)1);
HXLINE( 129)		shoot_right = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_15,1),(int)1);
HXLINE( 131)		bool _hx_tmp;
HXDLIN( 131)		if (shoot_up) {
HXLINE( 131)			_hx_tmp = shoot_down;
            		}
            		else {
HXLINE( 131)			_hx_tmp = false;
            		}
HXDLIN( 131)		if (_hx_tmp) {
HXLINE( 132)			shoot_down = false;
HXDLIN( 132)			shoot_up = shoot_down;
            		}
HXLINE( 133)		bool _hx_tmp1;
HXDLIN( 133)		if (shoot_left) {
HXLINE( 133)			_hx_tmp1 = shoot_right;
            		}
            		else {
HXLINE( 133)			_hx_tmp1 = false;
            		}
HXDLIN( 133)		if (_hx_tmp1) {
HXLINE( 134)			shoot_right = false;
HXDLIN( 134)			shoot_left = shoot_right;
            		}
HXLINE( 136)		bool _hx_tmp2;
HXDLIN( 136)		bool _hx_tmp3;
HXDLIN( 136)		bool _hx_tmp4;
HXDLIN( 136)		if (!(shoot_up)) {
HXLINE( 136)			_hx_tmp4 = shoot_down;
            		}
            		else {
HXLINE( 136)			_hx_tmp4 = true;
            		}
HXDLIN( 136)		if (!(_hx_tmp4)) {
HXLINE( 136)			_hx_tmp3 = shoot_left;
            		}
            		else {
HXLINE( 136)			_hx_tmp3 = true;
            		}
HXDLIN( 136)		if (!(_hx_tmp3)) {
HXLINE( 136)			_hx_tmp2 = shoot_right;
            		}
            		else {
HXLINE( 136)			_hx_tmp2 = true;
            		}
HXDLIN( 136)		if (_hx_tmp2) {
HXLINE( 138)			if (shoot_up) {
HXLINE( 140)				this->set_facing((int)256);
            			}
            			else {
HXLINE( 142)				if (shoot_down) {
HXLINE( 144)					this->set_facing((int)4096);
            				}
            				else {
HXLINE( 146)					if (shoot_left) {
HXLINE( 148)						this->set_facing((int)1);
            					}
            					else {
HXLINE( 150)						if (shoot_right) {
HXLINE( 152)							this->set_facing((int)16);
            						}
            					}
            				}
            			}
HXLINE( 154)			this->animate();
HXLINE( 155)			return true;
            		}
HXLINE( 157)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,shoot,return )


hx::ObjectPtr< Player_obj > Player_obj::__new( ::Dynamic __o_X, ::Dynamic __o_Y) {
	hx::ObjectPtr< Player_obj > __this = new Player_obj();
	__this->__construct(__o_X,__o_Y);
	return __this;
}

hx::ObjectPtr< Player_obj > Player_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic __o_X, ::Dynamic __o_Y) {
	Player_obj *__this = (Player_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Player_obj), true, "Player"));
	*(void **)__this = Player_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y);
	return __this;
}

Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(_sndStep,"_sndStep");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(_sndStep,"_sndStep");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return hx::Val( speed ); }
		if (HX_FIELD_EQ(inName,"shoot") ) { return hx::Val( shoot_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"animate") ) { return hx::Val( animate_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_sndStep") ) { return hx::Val( _sndStep ); }
		if (HX_FIELD_EQ(inName,"movement") ) { return hx::Val( movement_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Player_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_sndStep") ) { _sndStep=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("_sndStep","\xd6","\x78","\x65","\xae"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Player_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Player_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsObject /*::flixel::_hx_system::FlxSound*/ ,(int)offsetof(Player_obj,_sndStep),HX_HCSTRING("_sndStep","\xd6","\x78","\x65","\xae")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Player_obj_sStaticStorageInfo = 0;
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("_sndStep","\xd6","\x78","\x65","\xae"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("movement","\x2f","\x85","\x37","\x00"),
	HX_HCSTRING("animate","\xa1","\xda","\x4c","\x7a"),
	HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"),
	::String(null()) };

static void Player_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Player_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Object *dummy = new Player_obj;
	Player_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Player_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Player_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Player_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Player_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Player_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
