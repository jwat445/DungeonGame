// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_OptionsState
#include <OptionsState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1f119275e66a7b90_10_new,"MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",10,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_17_create,"MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",17,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_43_update,"MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",43,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_48_firstWord,"MenuState","firstWord",0x3bdc827e,"MenuState.firstWord","MenuState.hx",48,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_53_secondWord,"MenuState","secondWord",0xa2ff9a7a,"MenuState.secondWord","MenuState.hx",53,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_58_clickPlay,"MenuState","clickPlay",0x5f6a9ec0,"MenuState.clickPlay","MenuState.hx",58,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_63_clickOptions,"MenuState","clickOptions",0xe3ab4a12,"MenuState.clickOptions","MenuState.hx",63,0xdfbcb22c)

void MenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_1f119275e66a7b90_10_new)
HXDLIN(  10)		super::__construct(MaxSize);
            	}

Dynamic MenuState_obj::__CreateEmpty() { return new MenuState_obj; }

void *MenuState_obj::_hx_vtable = 0;

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MenuState_obj > _hx_result = new MenuState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2335d9a7) {
		if (inClassId<=(int)0x17fb3926) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x17fb3926;
		} else {
			return inClassId==(int)0x2335d9a7;
		}
	} else {
		return inClassId==(int)0x25a685e0 || inClassId==(int)0x3634c52c;
	}
}

void MenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_17_create)
HXLINE(  18)		::String _hx_tmp = (this->firstWord() + HX_("\n",0a,00,00,00));
HXDLIN(  18)		this->_txtTitle =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(int)20,(int)0,(int)0,(_hx_tmp + this->secondWord()),(int)22,null());
HXLINE(  19)		this->_txtTitle->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  20)		this->_txtTitle->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  21)		this->add(this->_txtTitle);
HXLINE(  23)		this->_btnPlay =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,(int)0,(int)0,HX_("Play",14,5a,33,35),this->clickPlay_dyn());
HXLINE(  24)		 ::flixel::ui::FlxButton _hx_tmp1 = this->_btnPlay;
HXDLIN(  24)		Float _hx_tmp2 = ((Float)::flixel::FlxG_obj::width / (Float)(int)2);
HXDLIN(  24)		_hx_tmp1->set_x(((_hx_tmp2 - this->_btnPlay->get_width()) - (int)10));
HXLINE(  25)		 ::flixel::ui::FlxButton _hx_tmp3 = this->_btnPlay;
HXDLIN(  25)		int _hx_tmp4 = ::flixel::FlxG_obj::height;
HXDLIN(  25)		_hx_tmp3->set_y(((_hx_tmp4 - this->_btnPlay->get_height()) - (int)10));
HXLINE(  26)		this->add(this->_btnPlay);
HXLINE(  27)		this->_btnPlay->onUp->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/select.wav",99,31,ec,2e),null(),null(),null(),null(),null(),null(),null());
HXLINE(  29)		this->_btnOptions =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,(int)0,(int)0,HX_("Options",3e,5b,4f,ad),this->clickOptions_dyn());
HXLINE(  30)		 ::flixel::ui::FlxButton _hx_tmp5 = this->_btnOptions;
HXDLIN(  30)		_hx_tmp5->set_x((((Float)::flixel::FlxG_obj::width / (Float)(int)2) + (int)10));
HXLINE(  31)		 ::flixel::ui::FlxButton _hx_tmp6 = this->_btnOptions;
HXDLIN(  31)		int _hx_tmp7 = ::flixel::FlxG_obj::height;
HXDLIN(  31)		_hx_tmp6->set_y(((_hx_tmp7 - this->_btnOptions->get_height()) - (int)10));
HXLINE(  32)		this->add(this->_btnOptions);
HXLINE(  33)		this->_btnOptions->onUp->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/select.wav",99,31,ec,2e),null(),null(),null(),null(),null(),null(),null());
HXLINE(  35)		if (hx::IsNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  37)			::flixel::FlxG_obj::sound->playMusic(HX_("assets/music/menu.wav",13,44,3a,fd),(int)1,true,null());
            		}
            	}


void MenuState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_1f119275e66a7b90_43_update)
HXDLIN(  43)		this->super::update(elapsed);
            	}


::String MenuState_obj::firstWord(){
            	HX_STACKFRAME(&_hx_pos_1f119275e66a7b90_48_firstWord)
HXDLIN(  48)		return HX_("Flixel",7c,b6,04,72);
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,firstWord,return )

::String MenuState_obj::secondWord(){
            	HX_STACKFRAME(&_hx_pos_1f119275e66a7b90_53_secondWord)
HXDLIN(  53)		return HX_("Game",12,20,38,2f);
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,secondWord,return )

void MenuState_obj::clickPlay(){
            	HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_58_clickPlay)
HXDLIN(  58)		 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null());
HXDLIN(  58)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXDLIN(  58)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickPlay,(void))

void MenuState_obj::clickOptions(){
            	HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_63_clickOptions)
HXDLIN(  63)		 ::flixel::FlxState nextState =  ::OptionsState_obj::__alloc( HX_CTX ,null());
HXDLIN(  63)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXDLIN(  63)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickOptions,(void))


hx::ObjectPtr< MenuState_obj > MenuState_obj::__new( ::Dynamic MaxSize) {
	hx::ObjectPtr< MenuState_obj > __this = new MenuState_obj();
	__this->__construct(MaxSize);
	return __this;
}

hx::ObjectPtr< MenuState_obj > MenuState_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	MenuState_obj *__this = (MenuState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MenuState_obj), true, "MenuState"));
	*(void **)__this = MenuState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(_btnPlay,"_btnPlay");
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_MARK_MEMBER_NAME(_btnOptions,"_btnOptions");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_btnPlay,"_btnPlay");
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(_btnOptions,"_btnOptions");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MenuState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnPlay") ) { return hx::Val( _btnPlay ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { return hx::Val( _txtTitle ); }
		if (HX_FIELD_EQ(inName,"firstWord") ) { return hx::Val( firstWord_dyn() ); }
		if (HX_FIELD_EQ(inName,"clickPlay") ) { return hx::Val( clickPlay_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondWord") ) { return hx::Val( secondWord_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_btnOptions") ) { return hx::Val( _btnOptions ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clickOptions") ) { return hx::Val( clickOptions_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MenuState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_btnPlay") ) { _btnPlay=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_btnOptions") ) { _btnOptions=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11"));
	outFields->push(HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"));
	outFields->push(HX_HCSTRING("_btnOptions","\x81","\xa9","\x6b","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MenuState_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnPlay),HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,_txtTitle),HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnOptions),HX_HCSTRING("_btnOptions","\x81","\xa9","\x6b","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuState_obj_sMemberFields[] = {
	HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11"),
	HX_HCSTRING("_txtTitle","\x67","\xb8","\x4f","\xb5"),
	HX_HCSTRING("_btnOptions","\x81","\xa9","\x6b","\x45"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("firstWord","\x1a","\x7e","\xcb","\x05"),
	HX_HCSTRING("secondWord","\x5e","\xc7","\x2c","\x8a"),
	HX_HCSTRING("clickPlay","\x5c","\x9a","\x59","\x29"),
	HX_HCSTRING("clickOptions","\xf6","\x77","\x28","\xd2"),
	::String(null()) };

static void MenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Object *dummy = new MenuState_obj;
	MenuState_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MenuState","\xd2","\xbf","\xb6","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MenuState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MenuState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

