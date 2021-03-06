/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITransform.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableArray, NSArray, NSString;

@interface UITransformer : UITransform <BSDescriptionProviding, NSMutableCopying> {

	NSMutableArray* _transforms;
	NSMutableArray* _transformReasonAssociations;

}

@property (nonatomic,copy,readonly) NSArray * transforms;              //@synthesize transforms=_transforms - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)transforms;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithTransformer:(id)arg1 ;
@end

