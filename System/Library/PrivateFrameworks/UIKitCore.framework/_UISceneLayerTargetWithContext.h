/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UISceneLayerTarget.h>

@class NSString;

@interface _UISceneLayerTargetWithContext : NSObject <UISceneLayerTarget> {

	id _context;
	unsigned long long _equalityType;
	/*^block*/id _block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(BOOL)matchesLayer:(id)arg1 ;
-(id)initWithContext:(id)arg1 equalityType:(unsigned long long)arg2 matchingBlock:(/*^block*/id)arg3 ;
@end

