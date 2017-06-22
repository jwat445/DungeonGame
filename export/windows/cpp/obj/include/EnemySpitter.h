// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_EnemySpitter
#define INCLUDED_EnemySpitter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
HX_DECLARE_CLASS0(Enemy)
HX_DECLARE_CLASS0(EnemySpitter)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES EnemySpitter_obj : public  ::Enemy_obj
{
	public:
		typedef  ::Enemy_obj super;
		typedef EnemySpitter_obj OBJ_;
		EnemySpitter_obj();

	public:
		enum { _hx_ClassId = 0x13e48a35 };

		void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Etype);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="EnemySpitter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"EnemySpitter"); }
		static hx::ObjectPtr< EnemySpitter_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Etype);
		static hx::ObjectPtr< EnemySpitter_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Etype);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnemySpitter_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("EnemySpitter","\xd1","\x83","\xb3","\xd4"); }

		void idle();

		void chase();

};


#endif /* INCLUDED_EnemySpitter */ 