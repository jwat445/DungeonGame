// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_StageScaleMode
#include <openfl/_legacy/display/StageScaleMode.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::StageScaleMode StageScaleMode_obj::EXACT_FIT;

::openfl::_legacy::display::StageScaleMode StageScaleMode_obj::NO_BORDER;

::openfl::_legacy::display::StageScaleMode StageScaleMode_obj::NO_SCALE;

::openfl::_legacy::display::StageScaleMode StageScaleMode_obj::SHOW_ALL;

bool StageScaleMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EXACT_FIT",d1,38,ee,79)) { outValue = StageScaleMode_obj::EXACT_FIT; return true; }
	if (inName==HX_("NO_BORDER",6a,40,33,71)) { outValue = StageScaleMode_obj::NO_BORDER; return true; }
	if (inName==HX_("NO_SCALE",ac,b8,22,35)) { outValue = StageScaleMode_obj::NO_SCALE; return true; }
	if (inName==HX_("SHOW_ALL",7f,39,6f,2a)) { outValue = StageScaleMode_obj::SHOW_ALL; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(StageScaleMode_obj)

int StageScaleMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("EXACT_FIT",d1,38,ee,79)) return 3;
	if (inName==HX_("NO_BORDER",6a,40,33,71)) return 2;
	if (inName==HX_("NO_SCALE",ac,b8,22,35)) return 1;
	if (inName==HX_("SHOW_ALL",7f,39,6f,2a)) return 0;
	return super::__FindIndex(inName);
}

int StageScaleMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("EXACT_FIT",d1,38,ee,79)) return 0;
	if (inName==HX_("NO_BORDER",6a,40,33,71)) return 0;
	if (inName==HX_("NO_SCALE",ac,b8,22,35)) return 0;
	if (inName==HX_("SHOW_ALL",7f,39,6f,2a)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val StageScaleMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EXACT_FIT",d1,38,ee,79)) return EXACT_FIT;
	if (inName==HX_("NO_BORDER",6a,40,33,71)) return NO_BORDER;
	if (inName==HX_("NO_SCALE",ac,b8,22,35)) return NO_SCALE;
	if (inName==HX_("SHOW_ALL",7f,39,6f,2a)) return SHOW_ALL;
	return super::__Field(inName,inCallProp);
}

static ::String StageScaleMode_obj_sStaticFields[] = {
	HX_("SHOW_ALL",7f,39,6f,2a),
	HX_("NO_SCALE",ac,b8,22,35),
	HX_("NO_BORDER",6a,40,33,71),
	HX_("EXACT_FIT",d1,38,ee,79),
	::String(null())
};

static void StageScaleMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageScaleMode_obj::EXACT_FIT,"EXACT_FIT");
	HX_MARK_MEMBER_NAME(StageScaleMode_obj::NO_BORDER,"NO_BORDER");
	HX_MARK_MEMBER_NAME(StageScaleMode_obj::NO_SCALE,"NO_SCALE");
	HX_MARK_MEMBER_NAME(StageScaleMode_obj::SHOW_ALL,"SHOW_ALL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StageScaleMode_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageScaleMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StageScaleMode_obj::EXACT_FIT,"EXACT_FIT");
	HX_VISIT_MEMBER_NAME(StageScaleMode_obj::NO_BORDER,"NO_BORDER");
	HX_VISIT_MEMBER_NAME(StageScaleMode_obj::NO_SCALE,"NO_SCALE");
	HX_VISIT_MEMBER_NAME(StageScaleMode_obj::SHOW_ALL,"SHOW_ALL");
};
#endif

hx::Class StageScaleMode_obj::__mClass;

Dynamic __Create_StageScaleMode_obj() { return new StageScaleMode_obj; }

void StageScaleMode_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._legacy.display.StageScaleMode","\x1f","\x74","\xdb","\x99"), hx::TCanCast< StageScaleMode_obj >,StageScaleMode_obj_sStaticFields,0,
	&__Create_StageScaleMode_obj, &__Create,
	&super::__SGetClass(), &CreateStageScaleMode_obj, StageScaleMode_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , StageScaleMode_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &StageScaleMode_obj::__GetStatic;
}

void StageScaleMode_obj::__boot()
{
EXACT_FIT = hx::CreateEnum< StageScaleMode_obj >(HX_HCSTRING("EXACT_FIT","\xd1","\x38","\xee","\x79"),3,0);
NO_BORDER = hx::CreateEnum< StageScaleMode_obj >(HX_HCSTRING("NO_BORDER","\x6a","\x40","\x33","\x71"),2,0);
NO_SCALE = hx::CreateEnum< StageScaleMode_obj >(HX_HCSTRING("NO_SCALE","\xac","\xb8","\x22","\x35"),1,0);
SHOW_ALL = hx::CreateEnum< StageScaleMode_obj >(HX_HCSTRING("SHOW_ALL","\x7f","\x39","\x6f","\x2a"),0,0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
