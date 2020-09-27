/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitShieldDataSource.h>

@class NSString;

@interface MKTransitShield : NSObject <GEOTransitShieldDataSource> {

	long long _shieldType;
	NSString* _shieldText;
	NSString* _shieldColorString;

}

@property (nonatomic,readonly) long long shieldType;                      //@synthesize shieldType=_shieldType - In the implementation block
@property (nonatomic,readonly) NSString * shieldText;                     //@synthesize shieldText=_shieldText - In the implementation block
@property (nonatomic,readonly) NSString * shieldColorString;              //@synthesize shieldColorString=_shieldColorString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)shieldType;
-(NSString *)shieldText;
-(NSString *)shieldColorString;
-(id)initWithShieldType:(long long)arg1 text:(id)arg2 color:(id)arg3 ;
@end

