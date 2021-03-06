/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIStoryboard;

@interface UISceneConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hadResolutionErrorsOnLoad;
	BOOL _isDefault;
	BOOL _fromPlist;
	NSString* _name;
	NSString* _role;
	Class _sceneClass;
	Class _delegateClass;
	UIStoryboard* _storyboard;

}

@property (nonatomic,readonly) BOOL _hadResolutionErrorsOnLoad;              //@synthesize hadResolutionErrorsOnLoad=_hadResolutionErrorsOnLoad - In the implementation block
@property (nonatomic,readonly) BOOL _isDefault;                              //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,readonly) BOOL _fromPlist;                              //@synthesize fromPlist=_fromPlist - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * role;                              //@synthesize role=_role - In the implementation block
@property (nonatomic,retain) Class sceneClass; 
@property (nonatomic,retain) Class delegateClass; 
@property (nonatomic,retain) UIStoryboard * storyboard; 
+(BOOL)supportsSecureCoding;
+(id)configurationWithName:(id)arg1 sessionRole:(id)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithConfiguration:(id)arg1 ;
-(NSString *)role;
-(BOOL)_isDefault;
-(Class)delegateClass;
-(void)setDelegateClass:(Class)arg1 ;
-(id)initWithName:(id)arg1 sessionRole:(id)arg2 ;
-(Class)sceneClass;
-(BOOL)_fromPlist;
-(id)_initWithLoadErrorForSessionRole:(id)arg1 ;
-(void)setSceneClass:(Class)arg1 ;
-(UIStoryboard *)storyboard;
-(void)setStoryboard:(UIStoryboard *)arg1 ;
-(BOOL)_hadResolutionErrorsOnLoad;
@end

