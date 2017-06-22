// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_FlxVersion
#include <flixel/system/FlxVersion.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0b1354451da86295_15_new,"flixel.system.FlxVersion","new",0xf87933e5,"flixel.system.FlxVersion.new","flixel/system/FlxVersion.hx",15,0x2361490b)
HX_LOCAL_STACK_FRAME(_hx_pos_0b1354451da86295_27_toString,"flixel.system.FlxVersion","toString",0x1c598b07,"flixel.system.FlxVersion.toString","flixel/system/FlxVersion.hx",27,0x2361490b)
HX_LOCAL_STACK_FRAME(_hx_pos_529d5c4ac8cd6d00_39_boot,"flixel.system.FlxVersion","boot",0x69ad350d,"flixel.system.FlxVersion.boot","flixel/system/macros/FlxGitSHA.hx",39,0xdce5962d)
namespace flixel{
namespace _hx_system{

void FlxVersion_obj::__construct(int Major,int Minor,int Patch){
            	HX_STACKFRAME(&_hx_pos_0b1354451da86295_15_new)
HXLINE(  16)		this->major = Major;
HXLINE(  17)		this->minor = Minor;
HXLINE(  18)		this->patch = Patch;
            	}

Dynamic FlxVersion_obj::__CreateEmpty() { return new FlxVersion_obj; }

void *FlxVersion_obj::_hx_vtable = 0;

Dynamic FlxVersion_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxVersion_obj > _hx_result = new FlxVersion_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxVersion_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x613b8031;
}

::String FlxVersion_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_0b1354451da86295_27_toString)
HXLINE(  28)		::String sha = ( (::String)(::flixel::_hx_system::FlxVersion_obj::sha) );
HXLINE(  29)		if ((sha != HX_("",00,00,00,00))) {
HXLINE(  31)			sha = (HX_("@",40,00,00,00) + sha.substring((int)0,(int)7));
            		}
HXLINE(  33)		return ((((((HX_("HaxeFlixel ",9e,ca,f0,de) + this->major) + HX_(".",2e,00,00,00)) + this->minor) + HX_(".",2e,00,00,00)) + this->patch) + sha);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxVersion_obj,toString,return )

 ::Dynamic FlxVersion_obj::sha;


FlxVersion_obj::FlxVersion_obj()
{
}

hx::Val FlxVersion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"major") ) { return hx::Val( major ); }
		if (HX_FIELD_EQ(inName,"minor") ) { return hx::Val( minor ); }
		if (HX_FIELD_EQ(inName,"patch") ) { return hx::Val( patch ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxVersion_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sha") ) { outValue = ( sha ); return true; }
	}
	return false;
}

hx::Val FlxVersion_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"major") ) { major=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minor") ) { minor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"patch") ) { patch=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxVersion_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sha") ) { sha=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void FlxVersion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("major","\x39","\xbd","\x1b","\x03"));
	outFields->push(HX_HCSTRING("minor","\x35","\x7b","\x68","\x08"));
	outFields->push(HX_HCSTRING("patch","\xc8","\x06","\x57","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxVersion_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxVersion_obj,major),HX_HCSTRING("major","\x39","\xbd","\x1b","\x03")},
	{hx::fsInt,(int)offsetof(FlxVersion_obj,minor),HX_HCSTRING("minor","\x35","\x7b","\x68","\x08")},
	{hx::fsInt,(int)offsetof(FlxVersion_obj,patch),HX_HCSTRING("patch","\xc8","\x06","\x57","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FlxVersion_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &FlxVersion_obj::sha,HX_HCSTRING("sha","\x2c","\x9e","\x57","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxVersion_obj_sMemberFields[] = {
	HX_HCSTRING("major","\x39","\xbd","\x1b","\x03"),
	HX_HCSTRING("minor","\x35","\x7b","\x68","\x08"),
	HX_HCSTRING("patch","\xc8","\x06","\x57","\xbd"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void FlxVersion_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVersion_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxVersion_obj::sha,"sha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxVersion_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVersion_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxVersion_obj::sha,"sha");
};

#endif

hx::Class FlxVersion_obj::__mClass;

static ::String FlxVersion_obj_sStaticFields[] = {
	HX_HCSTRING("sha","\x2c","\x9e","\x57","\x00"),
	::String(null())
};

void FlxVersion_obj::__register()
{
	hx::Object *dummy = new FlxVersion_obj;
	FlxVersion_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxVersion","\x73","\x5d","\xb6","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxVersion_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxVersion_obj::__SetStatic;
	__mClass->mMarkFunc = FlxVersion_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxVersion_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxVersion_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxVersion_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxVersion_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxVersion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxVersion_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxVersion_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_529d5c4ac8cd6d00_39_boot)
HXDLIN(  39)		sha = HX_("",00,00,00,00);
            	}
}

} // end namespace flixel
} // end namespace system