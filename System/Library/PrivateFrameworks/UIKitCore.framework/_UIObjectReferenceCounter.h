/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet;

@interface _UIObjectReferenceCounter : NSObject {

	NSCountedSet* _objectReferences;

}
-(id)init;
-(id)allObjects;
-(void)incrementReferenceForObject:(id)arg1 ;
-(void)decrementReferenceForObject:(id)arg1 invalidationHandler:(/*^block*/id)arg2 ;
@end
