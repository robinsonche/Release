﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "Demo.h"
/* CodePack:BeginIgnore() */
#ifndef VCZH_DEBUG_NO_REFLECTION
/* CodePack:ConditionOff(VCZH_DEBUG_NO_REFLECTION, DemoReflection.h) */
#include "DemoReflection.h"
#endif
/* CodePack:EndIgnore() */

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

#define GLOBAL_SYMBOL ::vl_workflow_global::Demo::
#define GLOBAL_NAME ::vl_workflow_global::Demo::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::Demo::Instance()
#define USERIMPL(...)

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)
	vl_workflow_global::Demo instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	Demo& Demo::Instance()
	{
		return Getvl_workflow_global_Demo().instance;
	}

/***********************************************************************
Closures
***********************************************************************/

	//-------------------------------------------------------------------

	__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__::operator()(const ::vl::reflection::description::Value& __vwsn_value_) const
	{
		auto __vwsn_old_ = ::vl::__vwsn::This(__vwsnthis_0->__vwsn_precompile_4)->GetEnabled();
		auto __vwsn_new_ = ::vl::__vwsn::Unbox<bool>(__vwsn_value_);
		if ((__vwsn_old_ == __vwsn_new_))
		{
			return;
		}
		::vl::__vwsn::This(__vwsnthis_0->__vwsn_precompile_4)->SetEnabled(__vwsn_new_);
	}

	//-------------------------------------------------------------------

	__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__::__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf2_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__::operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const
	{
		(::vl::__vwsn::This(__vwsnthis_0->self)->integerState = ::vl::__vwsn::Parse<::vl::vint>(::vl::__vwsn::This(__vwsnthis_0->textBoxA)->GetText()));
	}

	//-------------------------------------------------------------------

	__vwsno3_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__::__vwsno3_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__(::demo::MainWindow* __vwsnctor___vwsn_this_, ::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsn_this_(__vwsnctor___vwsn_this_)
		, __vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsno3_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__::operator()(::vl::presentation::compositions::GuiGraphicsComposition* __vwsno_1, ::vl::presentation::compositions::GuiEventArgs* __vwsno_2) const
	{
		return ::vl::__vwsn::This(__vwsn_this_)->buttonPaste_Clicked(__vwsno_1, __vwsno_2);
	}

	//-------------------------------------------------------------------

	__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
		this->__vwsn_bind_cache_0 = static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr);
		this->__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>();
		this->__vwsn_bind_opened_ = false;
		this->__vwsn_bind_closed_ = false;
	}

	void __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::__vwsn_bind_activator_()
	{
		auto __vwsn_bind_activator_result_ = [&](){ try{ return true; } catch(...){ return false; } }();
		::vl::__vwsn::EventInvoke(this->ValueChanged)(::vl::__vwsn::Box(__vwsn_bind_activator_result_));
	}

	void __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0(::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_bind_callback_argument_0, ::vl::presentation::compositions::GuiEventArgs* __vwsn_bind_callback_argument_1)
	{
		this->__vwsn_bind_activator_();
	}

	bool __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::Open()
	{
		if ((! __vwsn_bind_opened_))
		{
			(__vwsn_bind_opened_ = true);
			(__vwsn_bind_cache_0 = [&](){ try{ return __vwsnthis_0->textBoxA; } catch(...){ return static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr); } }());
			(__vwsn_bind_handler_0_0 = [&](){ try{ return ::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_bind_cache_0)->TextChanged, ::vl::Func<void(::vl::presentation::compositions::GuiGraphicsComposition*, ::vl::presentation::compositions::GuiEventArgs*)>(this, &__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0)); } catch(...){ return ::vl::Ptr<::vl::reflection::description::IEventHandler>(); } }());
			return true;
		}
		return false;
	}

	bool __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::Update()
	{
		if ((__vwsn_bind_opened_ && (! __vwsn_bind_closed_)))
		{
			this->__vwsn_bind_activator_();
			return true;
		}
		return false;
	}

	bool __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::Close()
	{
		if ((! __vwsn_bind_closed_))
		{
			(__vwsn_bind_closed_ = true);
			if (static_cast<bool>(__vwsn_bind_handler_0_0))
			{
				::vl::__vwsn::EventDetach(::vl::__vwsn::This(__vwsn_bind_cache_0)->TextChanged, __vwsn_bind_handler_0_0);
				(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			}
			(__vwsn_bind_cache_0 = static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr));
			(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			return true;
		}
		return false;
	}

}

/***********************************************************************
Class (::demo::MainWindowConstructor)
***********************************************************************/

namespace demo
{
	void MainWindowConstructor::__vwsn_initialize_instance_(::demo::MainWindow* __vwsn_this_)
	{
		(this->self = __vwsn_this_);
		(this->__vwsn_precompile_11 = ::vl::__vwsn::This(this->self)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_11)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(480); __vwsn_temp__.y = static_cast<::vl::vint>(320); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->self)->SetClientSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(480); __vwsn_temp__.y = static_cast<::vl::vint>(320); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->self)->SetText(::vl::WString(L"Member_Field", false));
		}
		(this->__vwsn_precompile_0 = new ::vl::presentation::compositions::GuiTableComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetCellPadding(::vl::__vwsn::Parse<::vl::vint>(::vl::WString(L"5", false)));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetRowsAndColumns(static_cast<::vl::vint>(3), static_cast<::vl::vint>(3));
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetRowOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetRowOption(static_cast<::vl::vint>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetRowOption(static_cast<::vl::vint>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetColumnOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Absolute; __vwsn_temp__.absolute = static_cast<::vl::vint>(100); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetColumnOption(static_cast<::vl::vint>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetColumnOption(static_cast<::vl::vint>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
		}
		(this->__vwsn_precompile_1 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetSite(static_cast<::vl::vint>(0), static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->textBoxA = new ::vl::presentation::controls::GuiSinglelineTextBox(::vl::presentation::theme::ThemeName::SinglelineTextBox));
		}
		(this->__vwsn_precompile_2 = ::vl::__vwsn::This(this->textBoxA)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_2)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->textBoxA)->SetText(::vl::WString(L"12345", false));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->textBoxA)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_1));
		}
		(this->__vwsn_precompile_3 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetSite(static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_4 = new ::vl::presentation::controls::GuiButton(::vl::presentation::theme::ThemeName::Button));
		}
		(this->__vwsn_precompile_5 = ::vl::__vwsn::This(this->__vwsn_precompile_4)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_5)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4)->SetText(::vl::WString(L"Copy in Script", false));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_4)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_3));
		}
		(this->__vwsn_precompile_6 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->SetSite(static_cast<::vl::vint>(1), static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->textBoxB = new ::vl::presentation::controls::GuiSinglelineTextBox(::vl::presentation::theme::ThemeName::SinglelineTextBox));
		}
		(this->__vwsn_precompile_7 = ::vl::__vwsn::This(this->textBoxB)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_7)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->textBoxB)->SetText(::vl::WString(L"", false));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->textBoxB)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_6));
		}
		(this->__vwsn_precompile_8 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_8)->SetSite(static_cast<::vl::vint>(1), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_9 = new ::vl::presentation::controls::GuiButton(::vl::presentation::theme::ThemeName::Button));
		}
		(this->__vwsn_precompile_10 = ::vl::__vwsn::This(this->__vwsn_precompile_9)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_10)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_9)->SetText(::vl::WString(L"Paste in C++", false));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_8)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_9)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_8));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this->self)->GetContainerComposition())->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_0));
		}
		{
			auto __vwsn_created_subscription_ = ::vl::Ptr<::vl::reflection::description::IValueSubscription>(new ::vl_workflow_global::__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_created_subscription_.Obj())->ValueChanged, LAMBDA(::vl_workflow_global::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__(this)));
			::vl::__vwsn::This(__vwsn_this_)->AddSubscription(__vwsn_created_subscription_);
		}
		{
			auto __vwsn_event_handler_ = LAMBDA(::vl_workflow_global::__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(this->__vwsn_precompile_4)->Clicked, __vwsn_event_handler_);
		}
		{
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(this->__vwsn_precompile_9)->Clicked, LAMBDA(::vl_workflow_global::__vwsno3_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__(__vwsn_this_, this)));
		}
	}

	MainWindowConstructor::MainWindowConstructor()
		: self(static_cast<::demo::MainWindow*>(nullptr))
		, textBoxA(static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr))
		, textBoxB(static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr))
		, __vwsn_precompile_0(static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr))
		, __vwsn_precompile_1(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_2(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_3(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_4(static_cast<::vl::presentation::controls::GuiButton*>(nullptr))
		, __vwsn_precompile_5(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_6(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_7(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_8(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_9(static_cast<::vl::presentation::controls::GuiButton*>(nullptr))
		, __vwsn_precompile_10(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_11(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
	{
	}

}
#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ
#undef USERIMPL

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
