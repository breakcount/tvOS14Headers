/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, HMFClassRegistry, NSArray, NSString;

@interface HMFPreferences : HMFObject <HMFObject> {

	os_unfair_recursive_lock_s _lock;
	NSMutableDictionary* _preferences;
	HMFClassRegistry* _classRegistry;

}

@property (readonly) HMFClassRegistry * classRegistry;                            //@synthesize classRegistry=_classRegistry - In the implementation block
@property (copy,readonly) NSArray * preferences; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPreferences;
+(id)defaultValues;
+(id)classRegistry;
+(Class)preferenceClassForPreferenceKey:(id)arg1 ;
+(id)defaultValueForPreferenceKey:(id)arg1 ;
+(void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2 ;
+(void)setDefaultValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)init;
-(NSString *)propertyDescription;
-(NSArray *)preferences;
-(HMFClassRegistry *)classRegistry;
-(Class)preferenceClassForPreferenceKey:(id)arg1 ;
-(void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2 ;
-(id)preferenceForKey:(id)arg1 ;
@end
