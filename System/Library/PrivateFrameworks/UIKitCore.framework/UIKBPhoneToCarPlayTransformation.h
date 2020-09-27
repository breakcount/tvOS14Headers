/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIKeyboardKeyplaneTransformation.h>

@class NSString;

@interface UIKBPhoneToCarPlayTransformation : NSObject <UIKeyboardKeyplaneTransformation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationIdentifier;
+(id)transformKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
+(id)cachedKeysForTransformationContext:(id)arg1 ;
+(id)cachedKeys;
+(void)removeAddedKeysFromKeyplane:(id)arg1 ;
+(id)fillFrame:(CGRect)arg1 withEmptyKeyNamed:(id)arg2 inKeyplane:(id)arg3 withTransformationContext:(id)arg4 ;
+(unsigned long long)columnBySwappingForLeftHandDriveIfNeeded:(unsigned long long)arg1 ;
+(id)transform10KeyKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
+(id)transformQWERTYKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
@end

