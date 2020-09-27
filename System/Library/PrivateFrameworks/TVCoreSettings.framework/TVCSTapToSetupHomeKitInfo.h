/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, TVCSTapToSetupHomeKitHome;

@interface TVCSTapToSetupHomeKitInfo : NSObject {

	NSArray* _homes;
	long long _currentHomeIndex;

}

@property (nonatomic,readonly) long long currentHomeIndex;                           //@synthesize currentHomeIndex=_currentHomeIndex - In the implementation block
@property (nonatomic,copy,readonly) NSArray * homes;                                 //@synthesize homes=_homes - In the implementation block
@property (nonatomic,readonly) TVCSTapToSetupHomeKitHome * currentHome; 
+(id)new;
-(id)debugDescription;
-(id)description;
-(id)init;
-(NSArray *)homes;
-(TVCSTapToSetupHomeKitHome *)currentHome;
-(long long)currentHomeIndex;
-(id)initWithHomes:(id)arg1 currentHomeUniqueIdentifier:(id)arg2 ;
@end
