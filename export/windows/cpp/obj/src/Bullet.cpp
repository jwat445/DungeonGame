// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Bullet
#include <Bullet.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_916b41f5f19492cb_10_new,"Bullet","new",0xf3208054,"Bullet.new","Bullet.hx",10,0xb42ce59c)
HX_LOCAL_STACK_FRAME(_hx_pos_916b41f5f19492cb_17_init,"Bullet","init",0xc608809c,"Bullet.init","Bullet.hx",17,0xb42ce59c)

void Bullet_obj::__construct( ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic){
            	HX_STACKFRAME(&_hx_pos_916b41f5f19492cb_10_new)
HXLINE(  14)		this->damage = (int)10;
HXLINE(  13)		this->direction = (int)1;
HXLINE(  12)		this->speed = ((Float)350);
HXLINE(  10)		super::__construct(X,Y,SimpleGraphic);
            	}

Dynamic Bullet_obj::__CreateEmpty() { return new Bullet_obj; }

void *Bullet_obj::_hx_vtable = 0;

Dynamic Bullet_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Bullet_obj > _hx_result = new Bullet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Bullet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b6ffd77) {
		if (inClassId<=(int)0x09250662) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x09250662;
		} else {
			return inClassId==(int)0x0b6ffd77;
		}
	} else {
		return inClassId==(int)0x25a685e0 || inClassId==(int)0x2e105115;
	}
}

void Bullet_obj::init( ::Player _player){
            	HX_STACKFRAME(&_hx_pos_916b41f5f19492cb_17_init)
HXLINE(  18)		this->loadGraphic(HX_("assets/images/bullet.png",e8,b3,4c,2c),false,(int)16,(int)16,true,null());
HXLINE(  19)		this->set_facing(_player->facing);
HXLINE(  20)		this->set_x(_player->x);
HXLINE(  21)		this->set_y(_player->y);
HXLINE(  23)		bool _hx_tmp;
HXDLIN(  23)		if ((this->facing != (int)1)) {
HXLINE(  23)			_hx_tmp = (this->facing == (int)16);
            		}
            		else {
HXLINE(  23)			_hx_tmp = true;
            		}
HXDLIN(  23)		if (_hx_tmp) {
HXLINE(  25)			 ::flixel::math::FlxPoint _hx_tmp1 = this->velocity;
HXDLIN(  25)			int _hx_tmp2;
HXDLIN(  25)			if ((this->facing == (int)1)) {
HXLINE(  25)				_hx_tmp2 = (int)-1;
            			}
            			else {
HXLINE(  25)				_hx_tmp2 = (int)1;
            			}
HXDLIN(  25)			_hx_tmp1->set_x((_hx_tmp2 * this->speed));
HXLINE(  26)			{
HXLINE(  26)				 ::flixel::math::FlxPoint _g = this->velocity;
HXDLIN(  26)				Float _g1 = _g->x;
HXDLIN(  26)				_g->set_x((_g1 + ((Float)_player->velocity->x / (Float)(int)4)));
            			}
HXLINE(  27)			{
HXLINE(  27)				 ::Bullet _g2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  27)				int _hx_tmp3;
HXDLIN(  27)				if ((this->facing == (int)1)) {
HXLINE(  27)					_hx_tmp3 = (int)-6;
            				}
            				else {
HXLINE(  27)					_hx_tmp3 = (int)6;
            				}
HXDLIN(  27)				_g2->set_x((_g2->x + _hx_tmp3));
            			}
            		}
            		else {
HXLINE(  29)			bool _hx_tmp4;
HXDLIN(  29)			if ((this->facing != (int)256)) {
HXLINE(  29)				_hx_tmp4 = (this->facing == (int)4096);
            			}
            			else {
HXLINE(  29)				_hx_tmp4 = true;
            			}
HXDLIN(  29)			if (_hx_tmp4) {
HXLINE(  31)				 ::flixel::math::FlxPoint _hx_tmp5 = this->velocity;
HXDLIN(  31)				int _hx_tmp6;
HXDLIN(  31)				if ((this->facing == (int)256)) {
HXLINE(  31)					_hx_tmp6 = (int)-1;
            				}
            				else {
HXLINE(  31)					_hx_tmp6 = (int)1;
            				}
HXDLIN(  31)				_hx_tmp5->set_y((_hx_tmp6 * this->speed));
HXLINE(  32)				{
HXLINE(  32)					 ::flixel::math::FlxPoint _g3 = this->velocity;
HXDLIN(  32)					Float _g4 = _g3->y;
HXDLIN(  32)					_g3->set_y((_g4 + ((Float)_player->velocity->y / (Float)(int)4)));
            				}
HXLINE(  33)				{
HXLINE(  33)					 ::Bullet _g5 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  33)					int _hx_tmp7;
HXDLIN(  33)					if ((this->facing == (int)256)) {
HXLINE(  33)						_hx_tmp7 = (int)-6;
            					}
            					else {
HXLINE(  33)						_hx_tmp7 = (int)6;
            					}
HXDLIN(  33)					_g5->set_y((_g5->y + _hx_tmp7));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bullet_obj,init,(void))


hx::ObjectPtr< Bullet_obj > Bullet_obj::__new( ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic) {
	hx::ObjectPtr< Bullet_obj > __this = new Bullet_obj();
	__this->__construct(X,Y,SimpleGraphic);
	return __this;
}

hx::ObjectPtr< Bullet_obj > Bullet_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic) {
	Bullet_obj *__this = (Bullet_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Bullet_obj), true, "Bullet"));
	*(void **)__this = Bullet_obj::_hx_vtable;
	__this->__construct(X,Y,SimpleGraphic);
	return __this;
}

Bullet_obj::Bullet_obj()
{
}

hx::Val Bullet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return hx::Val( speed ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"damage") ) { return hx::Val( damage ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return hx::Val( direction ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Bullet_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"damage") ) { damage=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bullet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"));
	outFields->push(HX_HCSTRING("damage","\x6f","\x90","\xe4","\x1d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Bullet_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Bullet_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsInt,(int)offsetof(Bullet_obj,direction),HX_HCSTRING("direction","\x3f","\x62","\x40","\x10")},
	{hx::fsInt,(int)offsetof(Bullet_obj,damage),HX_HCSTRING("damage","\x6f","\x90","\xe4","\x1d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Bullet_obj_sStaticStorageInfo = 0;
#endif

static ::String Bullet_obj_sMemberFields[] = {
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"),
	HX_HCSTRING("damage","\x6f","\x90","\xe4","\x1d"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	::String(null()) };

static void Bullet_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Bullet_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
};

#endif

hx::Class Bullet_obj::__mClass;

void Bullet_obj::__register()
{
	hx::Object *dummy = new Bullet_obj;
	Bullet_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Bullet","\x62","\x06","\x25","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Bullet_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Bullet_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bullet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Bullet_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bullet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bullet_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
