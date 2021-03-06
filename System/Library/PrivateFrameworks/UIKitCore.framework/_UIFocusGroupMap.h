/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, _UIFocusGroup;

@interface _UIFocusGroupMap : NSObject {

	NSMapTable* _environmentToGroupMap;
	NSMapTable* _identifierToGroupMap;
	NSMapTable* _identifierToPrimaryItemMap;
	_UIFocusGroup* _nullGroup;

}
-(id)init;
-(id)focusGroupForEnvironment:(id)arg1 ;
-(id)primaryFocusItemForGroup:(id)arg1 ;
-(id)_focusGroupForIdentifier:(id)arg1 withParent:(id)arg2 groupRootEnvironment:(id)arg3 ;
@end

