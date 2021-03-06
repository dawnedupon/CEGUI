// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "TabControl.pypp.hpp"

namespace bp = boost::python;

struct TabControl_wrapper : CEGUI::TabControl, bp::wrapper< CEGUI::TabControl > {

    TabControl_wrapper(::CEGUI::String const & type, ::CEGUI::String const & name )
    : CEGUI::TabControl( boost::ref(type), boost::ref(name) )
      , bp::wrapper< CEGUI::TabControl >(){
        // constructor
    
    }

    virtual void initialiseComponents(  ) {
        if( bp::override func_initialiseComponents = this->get_override( "initialiseComponents" ) )
            func_initialiseComponents(  );
        else{
            this->CEGUI::TabControl::initialiseComponents(  );
        }
    }
    
    void default_initialiseComponents(  ) {
        CEGUI::TabControl::initialiseComponents( );
    }

    virtual void beginInitialisation(  ) {
        if( bp::override func_beginInitialisation = this->get_override( "beginInitialisation" ) )
            func_beginInitialisation(  );
        else{
            this->CEGUI::Window::beginInitialisation(  );
        }
    }
    
    void default_beginInitialisation(  ) {
        CEGUI::Window::beginInitialisation( );
    }

    virtual void cloneChildWidgetsTo( ::CEGUI::Window & target ) const  {
        if( bp::override func_cloneChildWidgetsTo = this->get_override( "cloneChildWidgetsTo" ) )
            func_cloneChildWidgetsTo( boost::ref(target) );
        else{
            this->CEGUI::Window::cloneChildWidgetsTo( boost::ref(target) );
        }
    }
    
    void default_cloneChildWidgetsTo( ::CEGUI::Window & target ) const  {
        CEGUI::Window::cloneChildWidgetsTo( boost::ref(target) );
    }

    virtual void clonePropertiesTo( ::CEGUI::Window & target ) const  {
        if( bp::override func_clonePropertiesTo = this->get_override( "clonePropertiesTo" ) )
            func_clonePropertiesTo( boost::ref(target) );
        else{
            this->CEGUI::Window::clonePropertiesTo( boost::ref(target) );
        }
    }
    
    void default_clonePropertiesTo( ::CEGUI::Window & target ) const  {
        CEGUI::Window::clonePropertiesTo( boost::ref(target) );
    }

    virtual void destroy(  ) {
        if( bp::override func_destroy = this->get_override( "destroy" ) )
            func_destroy(  );
        else{
            this->CEGUI::Window::destroy(  );
        }
    }
    
    void default_destroy(  ) {
        CEGUI::Window::destroy( );
    }

    virtual void endInitialisation(  ) {
        if( bp::override func_endInitialisation = this->get_override( "endInitialisation" ) )
            func_endInitialisation(  );
        else{
            this->CEGUI::Window::endInitialisation(  );
        }
    }
    
    void default_endInitialisation(  ) {
        CEGUI::Window::endInitialisation( );
    }

    virtual void fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        if( bp::override func_fireEvent = this->get_override( "fireEvent" ) )
            func_fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        else{
            this->CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        }
    }
    
    void default_fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
    }

    virtual void getRenderingContext_impl( ::CEGUI::RenderingContext & ctx ) const  {
        if( bp::override func_getRenderingContext_impl = this->get_override( "getRenderingContext_impl" ) )
            func_getRenderingContext_impl( boost::ref(ctx) );
        else{
            this->CEGUI::Window::getRenderingContext_impl( boost::ref(ctx) );
        }
    }
    
    void default_getRenderingContext_impl( ::CEGUI::RenderingContext & ctx ) const  {
        CEGUI::Window::getRenderingContext_impl( boost::ref(ctx) );
    }

    virtual ::CEGUI::Rect getUnclippedInnerRect_impl(  ) const  {
        if( bp::override func_getUnclippedInnerRect_impl = this->get_override( "getUnclippedInnerRect_impl" ) )
            return func_getUnclippedInnerRect_impl(  );
        else{
            return this->CEGUI::Window::getUnclippedInnerRect_impl(  );
        }
    }
    
    ::CEGUI::Rect default_getUnclippedInnerRect_impl(  ) const  {
        return CEGUI::Window::getUnclippedInnerRect_impl( );
    }

    virtual bool isHit( ::CEGUI::Vector2 const & position, bool const allow_disabled=false ) const  {
        if( bp::override func_isHit = this->get_override( "isHit" ) )
            return func_isHit( boost::ref(position), allow_disabled );
        else{
            return this->CEGUI::Window::isHit( boost::ref(position), allow_disabled );
        }
    }
    
    bool default_isHit( ::CEGUI::Vector2 const & position, bool const allow_disabled=false ) const  {
        return CEGUI::Window::isHit( boost::ref(position), allow_disabled );
    }

    virtual void setLookNFeel( ::CEGUI::String const & look ) {
        if( bp::override func_setLookNFeel = this->get_override( "setLookNFeel" ) )
            func_setLookNFeel( boost::ref(look) );
        else{
            this->CEGUI::Window::setLookNFeel( boost::ref(look) );
        }
    }
    
    void default_setLookNFeel( ::CEGUI::String const & look ) {
        CEGUI::Window::setLookNFeel( boost::ref(look) );
    }

    virtual void setMargin( ::CEGUI::UBox const & margin ) {
        if( bp::override func_setMargin = this->get_override( "setMargin" ) )
            func_setMargin( boost::ref(margin) );
        else{
            this->CEGUI::Window::setMargin( boost::ref(margin) );
        }
    }
    
    void default_setMargin( ::CEGUI::UBox const & margin ) {
        CEGUI::Window::setMargin( boost::ref(margin) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
    }

    virtual void update( float elapsed ) {
        if( bp::override func_update = this->get_override( "update" ) )
            func_update( elapsed );
        else{
            this->CEGUI::Window::update( elapsed );
        }
    }
    
    void default_update( float elapsed ) {
        CEGUI::Window::update( elapsed );
    }

    virtual void writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::ref(xml_stream) );
        else{
            this->CEGUI::Window::writeXMLToStream( boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::Window::writeXMLToStream( boost::ref(xml_stream) );
    }

};

void register_TabControl_class(){

    { //::CEGUI::TabControl
        typedef bp::class_< TabControl_wrapper, bp::bases< CEGUI::Window >, boost::noncopyable > TabControl_exposer_t;
        TabControl_exposer_t TabControl_exposer = TabControl_exposer_t( "TabControl", "*!\n\
        \n\
           Base class for standard Tab Control widget.\n\
        *\n", bp::init< CEGUI::String const &, CEGUI::String const & >(( bp::arg("type"), bp::arg("name") ), "*************************************************************************\n\
           Construction and Destruction\n\
        *************************************************************************\n\
        *!\n\
        \n\
           Constructor for TabControl base class.\n\
        *\n") );
        bp::scope TabControl_scope( TabControl_exposer );
        bp::enum_< CEGUI::TabControl::TabPanePosition>("TabPanePosition")
            .value("Top", CEGUI::TabControl::Top)
            .value("Bottom", CEGUI::TabControl::Bottom)
            .export_values()
            ;
        { //::CEGUI::TabControl::addTab
        
            typedef void ( ::CEGUI::TabControl::*addTab_function_type )( ::CEGUI::Window * ) ;
            
            TabControl_exposer.def( 
                "addTab"
                , addTab_function_type( &::CEGUI::TabControl::addTab )
                , ( bp::arg("wnd") )
                , "*!\n\
            \n\
                Add a new tab to the tab control.\n\
            \n\
                The new tab will be added with the same text as the window passed in.\n\
            @param wnd\n\
                The Window which will be placed in the content area of this new tab.\n\
            *\n" );
        
        }
        { //::CEGUI::TabControl::getSelectedTabIndex
        
            typedef ::size_t ( ::CEGUI::TabControl::*getSelectedTabIndex_function_type )(  ) const;
            
            TabControl_exposer.def( 
                "getSelectedTabIndex"
                , getSelectedTabIndex_function_type( &::CEGUI::TabControl::getSelectedTabIndex )
                , "*!\n\
               \n\
                  Return the index of the currently selected tab.\n\
            \n\
               @return\n\
                  index of the currently selected tab.\n\
               *\n" );
        
        }
        { //::CEGUI::TabControl::getTabContents
        
            typedef ::CEGUI::Window * ( ::CEGUI::TabControl::*getTabContents_function_type )( ::CEGUI::String const & ) const;
            
            TabControl_exposer.def( 
                "getTabContents"
                , getTabContents_function_type( &::CEGUI::TabControl::getTabContents )
                , ( bp::arg("name") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Return the Window which is the tab content with the given name.\n\
            \n\
                @param name\n\
                    Name of the Window which was attached as a tab content.\n\
            \n\
                @return\n\
                    Pointer to the named Window in the tab control.\n\
            \n\
                @exception InvalidRequestException thrown if content is not found.\n\
                *\n" );
        
        }
        { //::CEGUI::TabControl::getTabContents
        
            typedef ::CEGUI::Window * ( ::CEGUI::TabControl::*getTabContents_function_type )( ::CEGUI::uint ) const;
            
            TabControl_exposer.def( 
                "getTabContents"
                , getTabContents_function_type( &::CEGUI::TabControl::getTabContents )
                , ( bp::arg("ID") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Return the Window which is the tab content with the given ID.\n\
            \n\
                @param ID\n\
                    ID of the Window which was attached as a tab content.\n\
            \n\
                @return\n\
                    Pointer to the Window with the given ID in the tab control.\n\
            \n\
                @exception InvalidRequestException thrown if content is not found.\n\
                *\n" );
        
        }
        { //::CEGUI::TabControl::getTabContentsAtIndex
        
            typedef ::CEGUI::Window * ( ::CEGUI::TabControl::*getTabContentsAtIndex_function_type )( ::size_t ) const;
            
            TabControl_exposer.def( 
                "getTabContentsAtIndex"
                , getTabContentsAtIndex_function_type( &::CEGUI::TabControl::getTabContentsAtIndex )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
               \n\
                  Return the Window which is the first child of the tab at index position  index.\n\
            \n\
               @param index\n\
                  Zero based index of the item to be returned.\n\
            \n\
               @return\n\
                  Pointer to the Window at index position  index in the tab control.\n\
            \n\
               @exception  InvalidRequestException thrown if  index is out of range.\n\
               *\n" );
        
        }
        { //::CEGUI::TabControl::getTabCount
        
            typedef ::size_t ( ::CEGUI::TabControl::*getTabCount_function_type )(  ) const;
            
            TabControl_exposer.def( 
                "getTabCount"
                , getTabCount_function_type( &::CEGUI::TabControl::getTabCount )
                , "*************************************************************************\n\
                  Accessor Methods\n\
               *************************************************************************\n\
               *!\n\
               \n\
                  Return number of tabs\n\
            \n\
               @return\n\
                  the number of tabs currently present.\n\
               *\n" );
        
        }
        { //::CEGUI::TabControl::getTabHeight
        
            typedef ::CEGUI::UDim const & ( ::CEGUI::TabControl::*getTabHeight_function_type )(  ) const;
            
            TabControl_exposer.def( 
                "getTabHeight"
                , getTabHeight_function_type( &::CEGUI::TabControl::getTabHeight )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
            \n\
                Return the height of the tabs\n\
            *\n" );
        
        }
        { //::CEGUI::TabControl::getTabPanePosition
        
            typedef ::CEGUI::TabControl::TabPanePosition ( ::CEGUI::TabControl::*getTabPanePosition_function_type )(  ) const;
            
            TabControl_exposer.def( 
                "getTabPanePosition"
                , getTabPanePosition_function_type( &::CEGUI::TabControl::getTabPanePosition )
                , "*!\n\
            \n\
               Return the positioning of the tab pane.\n\
            @return\n\
               The positioning of the tab window within the tab control.\n\
            *\n" );
        
        }
        { //::CEGUI::TabControl::getTabTextPadding
        
            typedef ::CEGUI::UDim const & ( ::CEGUI::TabControl::*getTabTextPadding_function_type )(  ) const;
            
            TabControl_exposer.def( 
                "getTabTextPadding"
                , getTabTextPadding_function_type( &::CEGUI::TabControl::getTabTextPadding )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
            \n\
                Return the amount of padding to add either side of the text in the tab\n\
            *\n" );
        
        }
        { //::CEGUI::TabControl::initialiseComponents
        
            typedef void ( ::CEGUI::TabControl::*initialiseComponents_function_type )(  ) ;
            typedef void ( TabControl_wrapper::*default_initialiseComponents_function_type )(  ) ;
            
            TabControl_exposer.def( 
                "initialiseComponents"
                , initialiseComponents_function_type(&::CEGUI::TabControl::initialiseComponents)
                , default_initialiseComponents_function_type(&TabControl_wrapper::default_initialiseComponents) );
        
        }
        { //::CEGUI::TabControl::isTabContentsSelected
        
            typedef bool ( ::CEGUI::TabControl::*isTabContentsSelected_function_type )( ::CEGUI::Window * ) const;
            
            TabControl_exposer.def( 
                "isTabContentsSelected"
                , isTabContentsSelected_function_type( &::CEGUI::TabControl::isTabContentsSelected )
                , ( bp::arg("wnd") )
                , "*!\n\
               \n\
                  Return whether the tab contents window is currently selected.\n\
            \n\
                @param wnd\n\
                    The tab contents window to query.\n\
            \n\
               @return\n\
                  true if the tab is currently selected, false otherwise.\n\
            \n\
               @exception  InvalidRequestException thrown if  wnd is not a valid tab contents window.\n\
               *\n" );
        
        }
        { //::CEGUI::TabControl::makeTabVisible
        
            typedef void ( ::CEGUI::TabControl::*makeTabVisible_function_type )( ::CEGUI::String const & ) ;
            
            TabControl_exposer.def( 
                "makeTabVisible"
                , makeTabVisible_function_type( &::CEGUI::TabControl::makeTabVisible )
                , ( bp::arg("name") )
                , "*!\n\
            \n\
                Ensure that the tab by the name of the root window within it is visible.\n\
            @exception InvalidRequestException thrown if there's no tab named  name.\n\
            *\n" );
        
        }
        { //::CEGUI::TabControl::makeTabVisible
        
            typedef void ( ::CEGUI::TabControl::*makeTabVisible_function_type )( ::CEGUI::uint ) ;
            
            TabControl_exposer.def( 
                "makeTabVisible"
                , makeTabVisible_function_type( &::CEGUI::TabControl::makeTabVisible )
                , ( bp::arg("ID") )
                , "*!\n\
            \n\
                Ensure that the tab by the ID of the root window within it is visible.\n\
            @exception InvalidRequestException thrown if  index is out of range.\n\
            *\n" );
        
        }
        { //::CEGUI::TabControl::makeTabVisibleAtIndex
        
            typedef void ( ::CEGUI::TabControl::*makeTabVisibleAtIndex_function_type )( ::size_t ) ;
            
            TabControl_exposer.def( 
                "makeTabVisibleAtIndex"
                , makeTabVisibleAtIndex_function_type( &::CEGUI::TabControl::makeTabVisibleAtIndex )
                , ( bp::arg("index") )
                , "*!\n\
            \n\
                Ensure that the tab by the index position in the tab control is visible.\n\
            @exception InvalidRequestException thrown if  index is out of range.\n\
            *\n" );
        
        }
        { //::CEGUI::TabControl::removeTab
        
            typedef void ( ::CEGUI::TabControl::*removeTab_function_type )( ::CEGUI::String const & ) ;
            
            TabControl_exposer.def( 
                "removeTab"
                , removeTab_function_type( &::CEGUI::TabControl::removeTab )
                , ( bp::arg("name") )
                , "*!\n\
            \n\
                Add a new tab to the tab control.\n\
            \n\
                The new tab will be added with the same text as the window passed in.\n\
            @param wnd\n\
                The Window which will be placed in the content area of this new tab.\n\
            *\n\
            *!\n\
            \n\
                Remove the named tab from the tab control.\n\
            \n\
                The tab content will be destroyed.\n\
            *\n" );
        
        }
        { //::CEGUI::TabControl::removeTab
        
            typedef void ( ::CEGUI::TabControl::*removeTab_function_type )( ::CEGUI::uint ) ;
            
            TabControl_exposer.def( 
                "removeTab"
                , removeTab_function_type( &::CEGUI::TabControl::removeTab )
                , ( bp::arg("ID") )
                , "*!\n\
            \n\
                Remove the named tab from the tab control.\n\
            \n\
                The tab content will be destroyed.\n\
            *\n\
            *!\n\
            \n\
            Remove the tab with the given ID from the tab control.\n\
            \n\
            The tab content will be destroyed.\n\
            *\n" );
        
        }
        { //::CEGUI::TabControl::setSelectedTab
        
            typedef void ( ::CEGUI::TabControl::*setSelectedTab_function_type )( ::CEGUI::String const & ) ;
            
            TabControl_exposer.def( 
                "setSelectedTab"
                , setSelectedTab_function_type( &::CEGUI::TabControl::setSelectedTab )
                , ( bp::arg("name") )
                , "*!\n\
            \n\
                Set the selected tab by the name of the root window within it.\n\
              Also ensures that the tab is made visible (tab pane is scrolled if required).\n\
            @exception InvalidRequestException thrown if there's no tab named  name.\n\
            *\n" );
        
        }
        { //::CEGUI::TabControl::setSelectedTab
        
            typedef void ( ::CEGUI::TabControl::*setSelectedTab_function_type )( ::CEGUI::uint ) ;
            
            TabControl_exposer.def( 
                "setSelectedTab"
                , setSelectedTab_function_type( &::CEGUI::TabControl::setSelectedTab )
                , ( bp::arg("ID") )
                , "*!\n\
            \n\
                Set the selected tab by the ID of the root window within it.\n\
              Also ensures that the tab is made visible (tab pane is scrolled if required).\n\
            @exception InvalidRequestException thrown if  index is out of range.\n\
            *\n" );
        
        }
        { //::CEGUI::TabControl::setSelectedTabAtIndex
        
            typedef void ( ::CEGUI::TabControl::*setSelectedTabAtIndex_function_type )( ::size_t ) ;
            
            TabControl_exposer.def( 
                "setSelectedTabAtIndex"
                , setSelectedTabAtIndex_function_type( &::CEGUI::TabControl::setSelectedTabAtIndex )
                , ( bp::arg("index") )
                , "*!\n\
            \n\
                Set the selected tab by the index position in the tab control.\n\
              Also ensures that the tab is made visible (tab pane is scrolled if required).\n\
            @exception InvalidRequestException thrown if  index is out of range.\n\
            *\n" );
        
        }
        { //::CEGUI::TabControl::setTabHeight
        
            typedef void ( ::CEGUI::TabControl::*setTabHeight_function_type )( ::CEGUI::UDim const & ) ;
            
            TabControl_exposer.def( 
                "setTabHeight"
                , setTabHeight_function_type( &::CEGUI::TabControl::setTabHeight )
                , ( bp::arg("height") )
                , "*!\n\
            \n\
                Set the height of the tabs\n\
            *\n" );
        
        }
        { //::CEGUI::TabControl::setTabPanePosition
        
            typedef void ( ::CEGUI::TabControl::*setTabPanePosition_function_type )( ::CEGUI::TabControl::TabPanePosition ) ;
            
            TabControl_exposer.def( 
                "setTabPanePosition"
                , setTabPanePosition_function_type( &::CEGUI::TabControl::setTabPanePosition )
                , ( bp::arg("pos") )
                , "*!\n\
            \n\
               Change the positioning of the tab button pane.\n\
            @param pos\n\
               The new positioning of the tab pane\n\
            *\n" );
        
        }
        { //::CEGUI::TabControl::setTabTextPadding
        
            typedef void ( ::CEGUI::TabControl::*setTabTextPadding_function_type )( ::CEGUI::UDim const & ) ;
            
            TabControl_exposer.def( 
                "setTabTextPadding"
                , setTabTextPadding_function_type( &::CEGUI::TabControl::setTabTextPadding )
                , ( bp::arg("padding") )
                , "*!\n\
            \n\
                Set the amount of padding to add either side of the text in the tab\n\
            *\n" );
        
        }
        TabControl_exposer.add_static_property( "ButtonScrollLeftSuffix"
                        , bp::make_getter( &CEGUI::TabControl::ButtonScrollLeftSuffix
                                , bp::return_value_policy< bp::return_by_value >() ) );
        TabControl_exposer.add_static_property( "ButtonScrollRightSuffix"
                        , bp::make_getter( &CEGUI::TabControl::ButtonScrollRightSuffix
                                , bp::return_value_policy< bp::return_by_value >() ) );
        TabControl_exposer.add_static_property( "ContentPaneNameSuffix"
                        , bp::make_getter( &CEGUI::TabControl::ContentPaneNameSuffix
                                , bp::return_value_policy< bp::return_by_value >() ) );
        TabControl_exposer.add_static_property( "EventSelectionChanged"
                        , bp::make_getter( &CEGUI::TabControl::EventSelectionChanged
                                , bp::return_value_policy< bp::return_by_value >() ) );
        TabControl_exposer.add_static_property( "TabButtonNameSuffix"
                        , bp::make_getter( &CEGUI::TabControl::TabButtonNameSuffix
                                , bp::return_value_policy< bp::return_by_value >() ) );
        TabControl_exposer.add_static_property( "TabButtonPaneNameSuffix"
                        , bp::make_getter( &CEGUI::TabControl::TabButtonPaneNameSuffix
                                , bp::return_value_policy< bp::return_by_value >() ) );
        { //::CEGUI::Window::beginInitialisation
        
            typedef void ( ::CEGUI::Window::*beginInitialisation_function_type )(  ) ;
            typedef void ( TabControl_wrapper::*default_beginInitialisation_function_type )(  ) ;
            
            TabControl_exposer.def( 
                "beginInitialisation"
                , beginInitialisation_function_type(&::CEGUI::Window::beginInitialisation)
                , default_beginInitialisation_function_type(&TabControl_wrapper::default_beginInitialisation) );
        
        }
        { //::CEGUI::Window::cloneChildWidgetsTo
        
            typedef void ( ::CEGUI::Window::*cloneChildWidgetsTo_function_type )( ::CEGUI::Window & ) const;
            typedef void ( TabControl_wrapper::*default_cloneChildWidgetsTo_function_type )( ::CEGUI::Window & ) const;
            
            TabControl_exposer.def( 
                "cloneChildWidgetsTo"
                , cloneChildWidgetsTo_function_type(&::CEGUI::Window::cloneChildWidgetsTo)
                , default_cloneChildWidgetsTo_function_type(&TabControl_wrapper::default_cloneChildWidgetsTo)
                , ( bp::arg("target") ) );
        
        }
        { //::CEGUI::Window::clonePropertiesTo
        
            typedef void ( ::CEGUI::Window::*clonePropertiesTo_function_type )( ::CEGUI::Window & ) const;
            typedef void ( TabControl_wrapper::*default_clonePropertiesTo_function_type )( ::CEGUI::Window & ) const;
            
            TabControl_exposer.def( 
                "clonePropertiesTo"
                , clonePropertiesTo_function_type(&::CEGUI::Window::clonePropertiesTo)
                , default_clonePropertiesTo_function_type(&TabControl_wrapper::default_clonePropertiesTo)
                , ( bp::arg("target") ) );
        
        }
        { //::CEGUI::Window::destroy
        
            typedef void ( ::CEGUI::Window::*destroy_function_type )(  ) ;
            typedef void ( TabControl_wrapper::*default_destroy_function_type )(  ) ;
            
            TabControl_exposer.def( 
                "destroy"
                , destroy_function_type(&::CEGUI::Window::destroy)
                , default_destroy_function_type(&TabControl_wrapper::default_destroy) );
        
        }
        { //::CEGUI::Window::endInitialisation
        
            typedef void ( ::CEGUI::Window::*endInitialisation_function_type )(  ) ;
            typedef void ( TabControl_wrapper::*default_endInitialisation_function_type )(  ) ;
            
            TabControl_exposer.def( 
                "endInitialisation"
                , endInitialisation_function_type(&::CEGUI::Window::endInitialisation)
                , default_endInitialisation_function_type(&TabControl_wrapper::default_endInitialisation) );
        
        }
        { //::CEGUI::EventSet::fireEvent
        
            typedef void ( ::CEGUI::EventSet::*fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            typedef void ( TabControl_wrapper::*default_fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            
            TabControl_exposer.def( 
                "fireEvent"
                , fireEvent_function_type(&::CEGUI::EventSet::fireEvent)
                , default_fireEvent_function_type(&TabControl_wrapper::default_fireEvent)
                , ( bp::arg("name"), bp::arg("args"), bp::arg("eventNamespace")="" ) );
        
        }
        { //::CEGUI::Window::getRenderedStringParser
        
            typedef ::CEGUI::RenderedStringParser & ( ::CEGUI::Window::*getRenderedStringParser_function_type )(  ) const;
            
            TabControl_exposer.def( 
                "getRenderedStringParser"
                , getRenderedStringParser_function_type(&::CEGUI::Window::getRenderedStringParser)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::Window::getRenderingContext_impl
        
            typedef void ( ::CEGUI::Window::*getRenderingContext_impl_function_type )( ::CEGUI::RenderingContext & ) const;
            typedef void ( TabControl_wrapper::*default_getRenderingContext_impl_function_type )( ::CEGUI::RenderingContext & ) const;
            
            TabControl_exposer.def( 
                "getRenderingContext_impl"
                , getRenderingContext_impl_function_type(&::CEGUI::Window::getRenderingContext_impl)
                , default_getRenderingContext_impl_function_type(&TabControl_wrapper::default_getRenderingContext_impl)
                , ( bp::arg("ctx") ) );
        
        }
        { //::CEGUI::Window::getUnclippedInnerRect_impl
        
            typedef ::CEGUI::Rect ( ::CEGUI::Window::*getUnclippedInnerRect_impl_function_type )(  ) const;
            typedef ::CEGUI::Rect ( TabControl_wrapper::*default_getUnclippedInnerRect_impl_function_type )(  ) const;
            
            TabControl_exposer.def( 
                "getUnclippedInnerRect_impl"
                , getUnclippedInnerRect_impl_function_type(&::CEGUI::Window::getUnclippedInnerRect_impl)
                , default_getUnclippedInnerRect_impl_function_type(&TabControl_wrapper::default_getUnclippedInnerRect_impl) );
        
        }
        { //::CEGUI::Window::isHit
        
            typedef bool ( ::CEGUI::Window::*isHit_function_type )( ::CEGUI::Vector2 const &,bool const ) const;
            typedef bool ( TabControl_wrapper::*default_isHit_function_type )( ::CEGUI::Vector2 const &,bool const ) const;
            
            TabControl_exposer.def( 
                "isHit"
                , isHit_function_type(&::CEGUI::Window::isHit)
                , default_isHit_function_type(&TabControl_wrapper::default_isHit)
                , ( bp::arg("position"), bp::arg("allow_disabled")=(bool const)(false) ) );
        
        }
        { //::CEGUI::Window::setLookNFeel
        
            typedef void ( ::CEGUI::Window::*setLookNFeel_function_type )( ::CEGUI::String const & ) ;
            typedef void ( TabControl_wrapper::*default_setLookNFeel_function_type )( ::CEGUI::String const & ) ;
            
            TabControl_exposer.def( 
                "setLookNFeel"
                , setLookNFeel_function_type(&::CEGUI::Window::setLookNFeel)
                , default_setLookNFeel_function_type(&TabControl_wrapper::default_setLookNFeel)
                , ( bp::arg("look") ) );
        
        }
        { //::CEGUI::Window::setMargin
        
            typedef void ( ::CEGUI::Window::*setMargin_function_type )( ::CEGUI::UBox const & ) ;
            typedef void ( TabControl_wrapper::*default_setMargin_function_type )( ::CEGUI::UBox const & ) ;
            
            TabControl_exposer.def( 
                "setMargin"
                , setMargin_function_type(&::CEGUI::Window::setMargin)
                , default_setMargin_function_type(&TabControl_wrapper::default_setMargin)
                , ( bp::arg("margin") ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( TabControl_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            TabControl_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&TabControl_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( TabControl_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            
            TabControl_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&TabControl_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("group"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::Window::update
        
            typedef void ( ::CEGUI::Window::*update_function_type )( float ) ;
            typedef void ( TabControl_wrapper::*default_update_function_type )( float ) ;
            
            TabControl_exposer.def( 
                "update"
                , update_function_type(&::CEGUI::Window::update)
                , default_update_function_type(&TabControl_wrapper::default_update)
                , ( bp::arg("elapsed") ) );
        
        }
        { //::CEGUI::Window::writeXMLToStream
        
            typedef void ( ::CEGUI::Window::*writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            typedef void ( TabControl_wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            TabControl_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::Window::writeXMLToStream)
                , default_writeXMLToStream_function_type(&TabControl_wrapper::default_writeXMLToStream)
                , ( bp::arg("xml_stream") ) );
        
        }
    }

}
