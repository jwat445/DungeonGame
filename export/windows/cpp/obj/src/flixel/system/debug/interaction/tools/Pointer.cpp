// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_GraphicCursorCross
#include <flixel/system/debug/interaction/tools/GraphicCursorCross.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Pointer
#include <flixel/system/debug/interaction/tools/Pointer.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_20_new,"flixel.system.debug.interaction.tools.Pointer","new",0x18297018,"flixel.system.debug.interaction.tools.Pointer.new","flixel/system/debug/interaction/tools/Pointer.hx",20,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_23_init,"flixel.system.debug.interaction.tools.Pointer","init",0x08d15c58,"flixel.system.debug.interaction.tools.Pointer.init","flixel/system/debug/interaction/tools/Pointer.hx",23,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_34_update,"flixel.system.debug.interaction.tools.Pointer","update",0xd4dc8951,"flixel.system.debug.interaction.tools.Pointer.update","flixel/system/debug/interaction/tools/Pointer.hx",34,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_52_handleItemClick,"flixel.system.debug.interaction.tools.Pointer","handleItemClick",0xca57dd25,"flixel.system.debug.interaction.tools.Pointer.handleItemClick","flixel/system/debug/interaction/tools/Pointer.hx",52,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_70_pinpointItemInGroup,"flixel.system.debug.interaction.tools.Pointer","pinpointItemInGroup",0x399a4be4,"flixel.system.debug.interaction.tools.Pointer.pinpointItemInGroup","flixel/system/debug/interaction/tools/Pointer.hx",70,0x6c93613b)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{

void Pointer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_20_new)
HXDLIN(  20)		super::__construct();
            	}

Dynamic Pointer_obj::__CreateEmpty() { return new Pointer_obj; }

void *Pointer_obj::_hx_vtable = 0;

Dynamic Pointer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Pointer_obj > _hx_result = new Pointer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Pointer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x350cec4c) {
		if (inClassId<=(int)0x25b00754) {
			if (inClassId<=(int)0x1e88cdcf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1e88cdcf;
			} else {
				return inClassId==(int)0x25b00754;
			}
		} else {
			return inClassId==(int)0x306ae42a || inClassId==(int)0x350cec4c;
		}
	} else {
		if (inClassId<=(int)0x5a9df069) {
			return inClassId==(int)0x3d2d7617 || inClassId==(int)0x5a9df069;
		} else {
			return inClassId==(int)0x5fcdb6d3;
		}
	}
}

 ::flixel::_hx_system::debug::interaction::tools::Tool Pointer_obj::init( ::flixel::_hx_system::debug::interaction::Interaction brain){
            	HX_GC_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_23_init)
HXLINE(  24)		this->super::init(brain);
HXLINE(  26)		this->_name = HX_("Pointer",9d,e8,72,1e);
HXLINE(  27)		this->setButton(hx::ClassOf< ::flixel::_hx_system::debug::interaction::tools::GraphicCursorCross >());
HXLINE(  28)		this->setCursor( ::flixel::_hx_system::debug::interaction::tools::GraphicCursorCross_obj::__alloc( HX_CTX ,(int)0,(int)0,null(),null()));
HXLINE(  30)		return hx::ObjectPtr<OBJ_>(this);
            	}


void Pointer_obj::update(){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_34_update)
HXLINE(  36)		if (!(this->isActive())) {
HXLINE(  37)			return;
            		}
HXLINE(  40)		bool _hx_tmp;
HXDLIN(  40)		if (!(this->_brain->pointerJustPressed)) {
HXLINE(  40)			_hx_tmp = !(this->_brain->pointerJustReleased);
            		}
            		else {
HXLINE(  40)			_hx_tmp = false;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  41)			return;
            		}
HXLINE(  43)		 ::flixel::FlxObject item = this->pinpointItemInGroup(::flixel::FlxG_obj::game->_state->members,this->_brain->flixelPointer);
HXLINE(  44)		if (hx::IsNotNull( item )) {
HXLINE(  45)			this->handleItemClick(item);
            		}
            		else {
HXLINE(  46)			if (this->_brain->pointerJustPressed) {
HXLINE(  48)				this->_brain->clearSelection();
            			}
            		}
            	}


void Pointer_obj::handleItemClick( ::flixel::FlxObject item){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_52_handleItemClick)
HXLINE(  54)		 ::flixel::group::FlxTypedGroup selectedItems = this->_brain->selectedItems;
HXLINE(  55)		bool _hx_tmp;
HXDLIN(  55)		if ((selectedItems->length != (int)0)) {
HXLINE(  55)			_hx_tmp = this->_brain->keyPressed((int)17);
            		}
            		else {
HXLINE(  55)			_hx_tmp = true;
            		}
HXDLIN(  55)		if (_hx_tmp) {
HXLINE(  58)			selectedItems->add(item).StaticCast<  ::flixel::FlxObject >();
            		}
            		else {
HXLINE(  63)			if ((selectedItems->members->indexOf(item,null()) == (int)-1)) {
HXLINE(  64)				this->_brain->clearSelection();
            			}
HXLINE(  65)			selectedItems->add(item).StaticCast<  ::flixel::FlxObject >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pointer_obj,handleItemClick,(void))

 ::flixel::FlxObject Pointer_obj::pinpointItemInGroup(::Array< ::Dynamic> members, ::flixel::math::FlxPoint cursor){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_70_pinpointItemInGroup)
HXLINE(  71)		 ::flixel::FlxObject target = null();
HXLINE(  74)		int i = members->length;
HXLINE(  75)		while(true){
HXLINE(  75)			i = (i - (int)1);
HXDLIN(  75)			if (!(((i + (int)1) > (int)0))) {
HXLINE(  75)				goto _hx_goto_4;
            			}
HXLINE(  77)			 ::flixel::FlxBasic member = members->__get(i).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  79)			bool _hx_tmp;
HXDLIN(  79)			bool _hx_tmp1;
HXDLIN(  79)			if (hx::IsNotNull( member )) {
HXLINE(  79)				_hx_tmp1 = !(member->visible);
            			}
            			else {
HXLINE(  79)				_hx_tmp1 = true;
            			}
HXDLIN(  79)			if (!(_hx_tmp1)) {
HXLINE(  79)				_hx_tmp = !(member->exists);
            			}
            			else {
HXLINE(  79)				_hx_tmp = true;
            			}
HXDLIN(  79)			if (_hx_tmp) {
HXLINE(  80)				continue;
            			}
HXLINE(  82)			if (::Std_obj::is(member,hx::ClassOf< ::flixel::group::FlxTypedGroup >())) {
HXLINE(  83)				target = this->pinpointItemInGroup(( (::Array< ::Dynamic>)(member->__Field(HX_("members",d9,2c,70,1a),hx::paccDynamic)) ),cursor);
            			}
            			else {
HXLINE(  84)				bool _hx_tmp2;
HXDLIN(  84)				if (::Std_obj::is(member,hx::ClassOf< ::flixel::FlxSprite >())) {
HXLINE(  84)					_hx_tmp2 = hx::TCast<  ::flixel::FlxObject >::cast(member)->overlapsPoint(cursor,true,null());
            				}
            				else {
HXLINE(  84)					_hx_tmp2 = false;
            				}
HXDLIN(  84)				if (_hx_tmp2) {
HXLINE(  86)					target = ( ( ::flixel::FlxObject)(member) );
            				}
            			}
HXLINE(  88)			if (hx::IsNotNull( target )) {
HXLINE(  89)				goto _hx_goto_4;
            			}
            		}
            		_hx_goto_4:;
HXLINE(  91)		return target;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Pointer_obj,pinpointItemInGroup,return )


hx::ObjectPtr< Pointer_obj > Pointer_obj::__new() {
	hx::ObjectPtr< Pointer_obj > __this = new Pointer_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Pointer_obj > Pointer_obj::__alloc(hx::Ctx *_hx_ctx) {
	Pointer_obj *__this = (Pointer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Pointer_obj), true, "flixel.system.debug.interaction.tools.Pointer"));
	*(void **)__this = Pointer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Pointer_obj::Pointer_obj()
{
}

hx::Val Pointer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleItemClick") ) { return hx::Val( handleItemClick_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"pinpointItemInGroup") ) { return hx::Val( pinpointItemInGroup_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Pointer_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Pointer_obj_sStaticStorageInfo = 0;
#endif

static ::String Pointer_obj_sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("handleItemClick","\x6d","\x89","\xb5","\x16"),
	HX_HCSTRING("pinpointItemInGroup","\x2c","\xbc","\x17","\xd9"),
	::String(null()) };

static void Pointer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pointer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Pointer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pointer_obj::__mClass,"__mClass");
};

#endif

hx::Class Pointer_obj::__mClass;

void Pointer_obj::__register()
{
	hx::Object *dummy = new Pointer_obj;
	Pointer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.interaction.tools.Pointer","\x26","\xc4","\x01","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Pointer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Pointer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Pointer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Pointer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pointer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pointer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
