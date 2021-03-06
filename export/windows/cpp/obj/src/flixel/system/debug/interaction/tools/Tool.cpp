// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d2c099c398a4a018_14_new,"flixel.system.debug.interaction.tools.Tool","new",0xbd6c80c1,"flixel.system.debug.interaction.tools.Tool.new","flixel/system/debug/interaction/tools/Tool.hx",14,0xb5d06f0c)
HX_LOCAL_STACK_FRAME(_hx_pos_d2c099c398a4a018_23_init,"flixel.system.debug.interaction.tools.Tool","init",0xfe3cdf8f,"flixel.system.debug.interaction.tools.Tool.init","flixel/system/debug/interaction/tools/Tool.hx",23,0xb5d06f0c)
HX_LOCAL_STACK_FRAME(_hx_pos_d2c099c398a4a018_28_update,"flixel.system.debug.interaction.tools.Tool","update",0x9e988848,"flixel.system.debug.interaction.tools.Tool.update","flixel/system/debug/interaction/tools/Tool.hx",28,0xb5d06f0c)
HX_LOCAL_STACK_FRAME(_hx_pos_d2c099c398a4a018_30_draw,"flixel.system.debug.interaction.tools.Tool","draw",0xfaf1d083,"flixel.system.debug.interaction.tools.Tool.draw","flixel/system/debug/interaction/tools/Tool.hx",30,0xb5d06f0c)
HX_LOCAL_STACK_FRAME(_hx_pos_d2c099c398a4a018_32_activate,"flixel.system.debug.interaction.tools.Tool","activate",0x49b36bb2,"flixel.system.debug.interaction.tools.Tool.activate","flixel/system/debug/interaction/tools/Tool.hx",32,0xb5d06f0c)
HX_LOCAL_STACK_FRAME(_hx_pos_d2c099c398a4a018_34_deactivate,"flixel.system.debug.interaction.tools.Tool","deactivate",0x2c7be9f3,"flixel.system.debug.interaction.tools.Tool.deactivate","flixel/system/debug/interaction/tools/Tool.hx",34,0xb5d06f0c)
HX_LOCAL_STACK_FRAME(_hx_pos_d2c099c398a4a018_36_destroy,"flixel.system.debug.interaction.tools.Tool","destroy",0xad9521db,"flixel.system.debug.interaction.tools.Tool.destroy","flixel/system/debug/interaction/tools/Tool.hx",36,0xb5d06f0c)
HX_LOCAL_STACK_FRAME(_hx_pos_d2c099c398a4a018_40_isActive,"flixel.system.debug.interaction.tools.Tool","isActive",0xd2b72d4f,"flixel.system.debug.interaction.tools.Tool.isActive","flixel/system/debug/interaction/tools/Tool.hx",40,0xb5d06f0c)
HX_LOCAL_STACK_FRAME(_hx_pos_d2c099c398a4a018_44_setButton,"flixel.system.debug.interaction.tools.Tool","setButton",0x5be68655,"flixel.system.debug.interaction.tools.Tool.setButton","flixel/system/debug/interaction/tools/Tool.hx",44,0xb5d06f0c)
HX_LOCAL_STACK_FRAME(_hx_pos_d2c099c398a4a018_50_setCursor,"flixel.system.debug.interaction.tools.Tool","setCursor",0xc0eeb339,"flixel.system.debug.interaction.tools.Tool.setCursor","flixel/system/debug/interaction/tools/Tool.hx",50,0xb5d06f0c)
HX_LOCAL_STACK_FRAME(_hx_pos_d2c099c398a4a018_57_onButtonClicked,"flixel.system.debug.interaction.tools.Tool","onButtonClicked",0x655fe417,"flixel.system.debug.interaction.tools.Tool.onButtonClicked","flixel/system/debug/interaction/tools/Tool.hx",57,0xb5d06f0c)
HX_LOCAL_STACK_FRAME(_hx_pos_d2c099c398a4a018_62_getName,"flixel.system.debug.interaction.tools.Tool","getName",0xa49116e2,"flixel.system.debug.interaction.tools.Tool.getName","flixel/system/debug/interaction/tools/Tool.hx",62,0xb5d06f0c)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{

void Tool_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d2c099c398a4a018_14_new)
HXLINE(  19)		this->_name = HX_("(Unknown tool)",73,db,28,1c);
HXLINE(  14)		super::__construct();
            	}

Dynamic Tool_obj::__CreateEmpty() { return new Tool_obj; }

void *Tool_obj::_hx_vtable = 0;

Dynamic Tool_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Tool_obj > _hx_result = new Tool_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tool_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x306ae42a) {
		if (inClassId<=(int)0x25b00754) {
			if (inClassId<=(int)0x1e88cdcf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1e88cdcf;
			} else {
				return inClassId==(int)0x25b00754;
			}
		} else {
			return inClassId==(int)0x306ae42a;
		}
	} else {
		if (inClassId<=(int)0x5a9df069) {
			return inClassId==(int)0x3d2d7617 || inClassId==(int)0x5a9df069;
		} else {
			return inClassId==(int)0x5fcdb6d3;
		}
	}
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_system_debug_interaction_tools_Tool__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::_hx_system::debug::interaction::tools::Tool_obj::destroy,
};

void *Tool_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_system_debug_interaction_tools_Tool__hx_flixel_util_IFlxDestroyable;
	}
	return super::_hx_getInterface(inHash);
}

 ::flixel::_hx_system::debug::interaction::tools::Tool Tool_obj::init( ::flixel::_hx_system::debug::interaction::Interaction brain){
            	HX_STACKFRAME(&_hx_pos_d2c099c398a4a018_23_init)
HXLINE(  24)		this->_brain = brain;
HXLINE(  25)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tool_obj,init,return )

void Tool_obj::update(){
            	HX_STACKFRAME(&_hx_pos_d2c099c398a4a018_28_update)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tool_obj,update,(void))

void Tool_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_d2c099c398a4a018_30_draw)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tool_obj,draw,(void))

void Tool_obj::activate(){
            	HX_STACKFRAME(&_hx_pos_d2c099c398a4a018_32_activate)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tool_obj,activate,(void))

void Tool_obj::deactivate(){
            	HX_STACKFRAME(&_hx_pos_d2c099c398a4a018_34_deactivate)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tool_obj,deactivate,(void))

void Tool_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_d2c099c398a4a018_36_destroy)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tool_obj,destroy,(void))

bool Tool_obj::isActive(){
            	HX_STACKFRAME(&_hx_pos_d2c099c398a4a018_40_isActive)
HXDLIN(  40)		if (hx::IsEq( this->_brain->activeTool,hx::ObjectPtr<OBJ_>(this) )) {
HXDLIN(  40)			return this->_brain->get_visible();
            		}
            		else {
HXDLIN(  40)			return false;
            		}
HXDLIN(  40)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tool_obj,isActive,return )

void Tool_obj::setButton(hx::Class Icon){
            	HX_GC_STACKFRAME(&_hx_pos_d2c099c398a4a018_44_setButton)
HXLINE(  45)		this->button =  ::flixel::_hx_system::ui::FlxSystemButton_obj::__alloc( HX_CTX ,::Type_obj::createInstance(Icon,::cpp::VirtualArray_obj::__new(2)->init(0,(int)0)->init(1,(int)0)),this->onButtonClicked_dyn(),true);
HXLINE(  46)		this->button->set_toggled(true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tool_obj,setButton,(void))

void Tool_obj::setCursor( ::openfl::_legacy::display::BitmapData Icon){
            	HX_STACKFRAME(&_hx_pos_d2c099c398a4a018_50_setCursor)
HXLINE(  51)		this->cursor = Icon;
HXLINE(  52)		this->_brain->registerCustomCursor(this->_name,this->cursor);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tool_obj,setCursor,(void))

void Tool_obj::onButtonClicked(){
            	HX_STACKFRAME(&_hx_pos_d2c099c398a4a018_57_onButtonClicked)
HXDLIN(  57)		this->_brain->setActiveTool(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tool_obj,onButtonClicked,(void))

::String Tool_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_d2c099c398a4a018_62_getName)
HXDLIN(  62)		return this->_name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tool_obj,getName,return )


hx::ObjectPtr< Tool_obj > Tool_obj::__new() {
	hx::ObjectPtr< Tool_obj > __this = new Tool_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Tool_obj > Tool_obj::__alloc(hx::Ctx *_hx_ctx) {
	Tool_obj *__this = (Tool_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Tool_obj), true, "flixel.system.debug.interaction.tools.Tool"));
	*(void **)__this = Tool_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Tool_obj::Tool_obj()
{
}

void Tool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tool);
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(cursor,"cursor");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_MEMBER_NAME(_brain,"_brain");
	 ::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(cursor,"cursor");
	HX_VISIT_MEMBER_NAME(_name,"_name");
	HX_VISIT_MEMBER_NAME(_brain,"_brain");
	 ::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Tool_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { return hx::Val( _name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return hx::Val( button ); }
		if (HX_FIELD_EQ(inName,"cursor") ) { return hx::Val( cursor ); }
		if (HX_FIELD_EQ(inName,"_brain") ) { return hx::Val( _brain ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return hx::Val( activate_dyn() ); }
		if (HX_FIELD_EQ(inName,"isActive") ) { return hx::Val( isActive_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setButton") ) { return hx::Val( setButton_dyn() ); }
		if (HX_FIELD_EQ(inName,"setCursor") ) { return hx::Val( setCursor_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return hx::Val( deactivate_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onButtonClicked") ) { return hx::Val( onButtonClicked_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Tool_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cursor") ) { cursor=inValue.Cast<  ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_brain") ) { _brain=inValue.Cast<  ::flixel::_hx_system::debug::interaction::Interaction >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	outFields->push(HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"));
	outFields->push(HX_HCSTRING("_name","\x2a","\x8e","\x10","\xfc"));
	outFields->push(HX_HCSTRING("_brain","\xf7","\x69","\xd0","\xb4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Tool_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_hx_system::ui::FlxSystemButton*/ ,(int)offsetof(Tool_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(Tool_obj,cursor),HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e")},
	{hx::fsString,(int)offsetof(Tool_obj,_name),HX_HCSTRING("_name","\x2a","\x8e","\x10","\xfc")},
	{hx::fsObject /*::flixel::_hx_system::debug::interaction::Interaction*/ ,(int)offsetof(Tool_obj,_brain),HX_HCSTRING("_brain","\xf7","\x69","\xd0","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Tool_obj_sStaticStorageInfo = 0;
#endif

static ::String Tool_obj_sMemberFields[] = {
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"),
	HX_HCSTRING("_name","\x2a","\x8e","\x10","\xfc"),
	HX_HCSTRING("_brain","\xf7","\x69","\xd0","\xb4"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5"),
	HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("isActive","\x50","\xdd","\xaf","\x6e"),
	HX_HCSTRING("setButton","\x34","\xd7","\x87","\x39"),
	HX_HCSTRING("setCursor","\x18","\x04","\x90","\x9e"),
	HX_HCSTRING("onButtonClicked","\x36","\xa6","\x0f","\xa0"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	::String(null()) };

static void Tool_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tool_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Tool_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tool_obj::__mClass,"__mClass");
};

#endif

hx::Class Tool_obj::__mClass;

void Tool_obj::__register()
{
	hx::Object *dummy = new Tool_obj;
	Tool_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.interaction.tools.Tool","\x4f","\x0c","\x93","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Tool_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Tool_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tool_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Tool_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tool_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tool_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
