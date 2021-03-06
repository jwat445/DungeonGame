// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b5fa247dae29567_12_new,"openfl._legacy.geom.Point","new",0xbb4757d4,"openfl._legacy.geom.Point.new","openfl/_legacy/geom/Point.hx",12,0x10b884db)
HX_LOCAL_STACK_FRAME(_hx_pos_7b5fa247dae29567_22_add,"openfl._legacy.geom.Point","add",0xbb3d7995,"openfl._legacy.geom.Point.add","openfl/_legacy/geom/Point.hx",22,0x10b884db)
HX_LOCAL_STACK_FRAME(_hx_pos_7b5fa247dae29567_29_clone,"openfl._legacy.geom.Point","clone",0x4cde5fd1,"openfl._legacy.geom.Point.clone","openfl/_legacy/geom/Point.hx",29,0x10b884db)
HX_LOCAL_STACK_FRAME(_hx_pos_7b5fa247dae29567_34_copyFrom,"openfl._legacy.geom.Point","copyFrom",0x0ba9ffcb,"openfl._legacy.geom.Point.copyFrom","openfl/_legacy/geom/Point.hx",34,0x10b884db)
HX_LOCAL_STACK_FRAME(_hx_pos_7b5fa247dae29567_53_equals,"openfl._legacy.geom.Point","equals",0xa75a874b,"openfl._legacy.geom.Point.equals","openfl/_legacy/geom/Point.hx",53,0x10b884db)
HX_LOCAL_STACK_FRAME(_hx_pos_7b5fa247dae29567_67_normalize,"openfl._legacy.geom.Point","normalize",0x482dce01,"openfl._legacy.geom.Point.normalize","openfl/_legacy/geom/Point.hx",67,0x10b884db)
HX_LOCAL_STACK_FRAME(_hx_pos_7b5fa247dae29567_82_offset,"openfl._legacy.geom.Point","offset",0x47a7309f,"openfl._legacy.geom.Point.offset","openfl/_legacy/geom/Point.hx",82,0x10b884db)
HX_LOCAL_STACK_FRAME(_hx_pos_7b5fa247dae29567_97_setTo,"openfl._legacy.geom.Point","setTo",0x7eaade31,"openfl._legacy.geom.Point.setTo","openfl/_legacy/geom/Point.hx",97,0x10b884db)
HX_LOCAL_STACK_FRAME(_hx_pos_7b5fa247dae29567_107_subtract,"openfl._legacy.geom.Point","subtract",0x3b5a6920,"openfl._legacy.geom.Point.subtract","openfl/_legacy/geom/Point.hx",107,0x10b884db)
HX_LOCAL_STACK_FRAME(_hx_pos_7b5fa247dae29567_114_toString,"openfl._legacy.geom.Point","toString",0x7bb7c4b8,"openfl._legacy.geom.Point.toString","openfl/_legacy/geom/Point.hx",114,0x10b884db)
HX_LOCAL_STACK_FRAME(_hx_pos_7b5fa247dae29567_128_get_length,"openfl._legacy.geom.Point","get_length",0xee0613bb,"openfl._legacy.geom.Point.get_length","openfl/_legacy/geom/Point.hx",128,0x10b884db)
HX_LOCAL_STACK_FRAME(_hx_pos_7b5fa247dae29567_42_distance,"openfl._legacy.geom.Point","distance",0xaf428741,"openfl._legacy.geom.Point.distance","openfl/_legacy/geom/Point.hx",42,0x10b884db)
HX_LOCAL_STACK_FRAME(_hx_pos_7b5fa247dae29567_60_interpolate,"openfl._legacy.geom.Point","interpolate",0x68e8f035,"openfl._legacy.geom.Point.interpolate","openfl/_legacy/geom/Point.hx",60,0x10b884db)
HX_LOCAL_STACK_FRAME(_hx_pos_7b5fa247dae29567_92_polar,"openfl._legacy.geom.Point","polar",0xcb0d3c32,"openfl._legacy.geom.Point.polar","openfl/_legacy/geom/Point.hx",92,0x10b884db)
namespace openfl{
namespace _legacy{
namespace geom{

void Point_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_7b5fa247dae29567_12_new)
HXLINE(  14)		this->x = x;
HXLINE(  15)		this->y = y;
            	}

Dynamic Point_obj::__CreateEmpty() { return new Point_obj; }

void *Point_obj::_hx_vtable = 0;

Dynamic Point_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Point_obj > _hx_result = new Point_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Point_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x18e1a340;
}

 ::openfl::_legacy::geom::Point Point_obj::add( ::openfl::_legacy::geom::Point v){
            	HX_GC_STACKFRAME(&_hx_pos_7b5fa247dae29567_22_add)
HXDLIN(  22)		Float _hx_tmp = (v->x + this->x);
HXDLIN(  22)		return  ::openfl::_legacy::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp,(v->y + this->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,add,return )

 ::openfl::_legacy::geom::Point Point_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_7b5fa247dae29567_29_clone)
HXDLIN(  29)		return  ::openfl::_legacy::geom::Point_obj::__alloc( HX_CTX ,this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,clone,return )

void Point_obj::copyFrom( ::openfl::_legacy::geom::Point sourcePoint){
            	HX_STACKFRAME(&_hx_pos_7b5fa247dae29567_34_copyFrom)
HXLINE(  36)		this->x = sourcePoint->x;
HXLINE(  37)		this->y = sourcePoint->y;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,copyFrom,(void))

bool Point_obj::equals( ::openfl::_legacy::geom::Point toCompare){
            	HX_STACKFRAME(&_hx_pos_7b5fa247dae29567_53_equals)
HXDLIN(  53)		if ((toCompare->x == this->x)) {
HXDLIN(  53)			return (toCompare->y == this->y);
            		}
            		else {
HXDLIN(  53)			return false;
            		}
HXDLIN(  53)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,equals,return )

void Point_obj::normalize(Float thickness){
            	HX_STACKFRAME(&_hx_pos_7b5fa247dae29567_67_normalize)
HXDLIN(  67)		bool _hx_tmp;
HXDLIN(  67)		if ((this->x == (int)0)) {
HXDLIN(  67)			_hx_tmp = (this->y == (int)0);
            		}
            		else {
HXDLIN(  67)			_hx_tmp = false;
            		}
HXDLIN(  67)		if (_hx_tmp) {
HXLINE(  69)			return;
            		}
            		else {
HXLINE(  73)			Float norm = (this->x * this->x);
HXDLIN(  73)			Float norm1 = ((Float)thickness / (Float)::Math_obj::sqrt((norm + (this->y * this->y))));
HXLINE(  74)			 ::openfl::_legacy::geom::Point _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  74)			_hx_tmp1->x = (_hx_tmp1->x * norm1);
HXLINE(  75)			 ::openfl::_legacy::geom::Point _hx_tmp2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  75)			_hx_tmp2->y = (_hx_tmp2->y * norm1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,normalize,(void))

void Point_obj::offset(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_7b5fa247dae29567_82_offset)
HXLINE(  84)		 ::openfl::_legacy::geom::Point _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  84)		_hx_tmp->x = (_hx_tmp->x + dx);
HXLINE(  85)		 ::openfl::_legacy::geom::Point _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  85)		_hx_tmp1->y = (_hx_tmp1->y + dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,offset,(void))

void Point_obj::setTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_7b5fa247dae29567_97_setTo)
HXLINE(  99)		this->x = x;
HXLINE( 100)		this->y = y;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,setTo,(void))

 ::openfl::_legacy::geom::Point Point_obj::subtract( ::openfl::_legacy::geom::Point v){
            	HX_GC_STACKFRAME(&_hx_pos_7b5fa247dae29567_107_subtract)
HXDLIN( 107)		Float _hx_tmp = (this->x - v->x);
HXDLIN( 107)		return  ::openfl::_legacy::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp,(this->y - v->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,subtract,return )

::String Point_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_7b5fa247dae29567_114_toString)
HXDLIN( 114)		return ((((HX_("(",28,00,00,00) + this->x) + HX_(", ",74,26,00,00)) + this->y) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,toString,return )

Float Point_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_7b5fa247dae29567_128_get_length)
HXDLIN( 128)		Float _hx_tmp = (this->x * this->x);
HXDLIN( 128)		return ::Math_obj::sqrt((_hx_tmp + (this->y * this->y)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,get_length,return )

Float Point_obj::distance( ::openfl::_legacy::geom::Point pt1, ::openfl::_legacy::geom::Point pt2){
            	HX_STACKFRAME(&_hx_pos_7b5fa247dae29567_42_distance)
HXLINE(  44)		Float dx = (pt1->x - pt2->x);
HXLINE(  45)		Float dy = (pt1->y - pt2->y);
HXLINE(  46)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,distance,return )

 ::openfl::_legacy::geom::Point Point_obj::interpolate( ::openfl::_legacy::geom::Point pt1, ::openfl::_legacy::geom::Point pt2,Float f){
            	HX_GC_STACKFRAME(&_hx_pos_7b5fa247dae29567_60_interpolate)
HXDLIN(  60)		Float pt21 = pt2->x;
HXDLIN(  60)		Float _hx_tmp = (pt21 + (f * (pt1->x - pt2->x)));
HXDLIN(  60)		Float pt22 = pt2->y;
HXDLIN(  60)		return  ::openfl::_legacy::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp,(pt22 + (f * (pt1->y - pt2->y))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Point_obj,interpolate,return )

 ::openfl::_legacy::geom::Point Point_obj::polar(Float len,Float angle){
            	HX_GC_STACKFRAME(&_hx_pos_7b5fa247dae29567_92_polar)
HXDLIN(  92)		Float _hx_tmp = (len * ::Math_obj::cos(angle));
HXDLIN(  92)		return  ::openfl::_legacy::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp,(len * ::Math_obj::sin(angle)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,polar,return )


hx::ObjectPtr< Point_obj > Point_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y) {
	hx::ObjectPtr< Point_obj > __this = new Point_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

hx::ObjectPtr< Point_obj > Point_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y) {
	Point_obj *__this = (Point_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Point_obj), false, "openfl._legacy.geom.Point"));
	*(void **)__this = Point_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

Point_obj::Point_obj()
{
}

hx::Val Point_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return hx::Val( setTo_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( inCallProp == hx::paccAlways ? get_length() : length ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn() ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return hx::Val( offset_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return hx::Val( subtract_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return hx::Val( normalize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Point_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"polar") ) { outValue = polar_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true; }
	}
	return false;
}

hx::Val Point_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Point_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Point_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(Point_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Point_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Point_obj_sStaticStorageInfo = 0;
#endif

static ::String Point_obj_sMemberFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("subtract","\x14","\x75","\x11","\xf8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

static void Point_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Point_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Point_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Point_obj::__mClass,"__mClass");
};

#endif

hx::Class Point_obj::__mClass;

static ::String Point_obj_sStaticFields[] = {
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("interpolate","\xc1","\xd4","\x32","\x1f"),
	HX_HCSTRING("polar","\xbe","\xef","\x91","\xc6"),
	::String(null())
};

void Point_obj::__register()
{
	hx::Object *dummy = new Point_obj;
	Point_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.geom.Point","\xe2","\x1d","\x2a","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Point_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Point_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Point_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Point_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Point_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Point_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Point_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Point_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace geom
