/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMRoom, NSString;

@interface TVCSRoom : NSObject {

	HMRoom* _hmRoom;

}

@property (nonatomic,retain) HMRoom * hmRoom;              //@synthesize hmRoom=_hmRoom - In the implementation block
@property (readonly) NSString * name; 
+(id)_roomWithHMRoom:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setHmRoom:(HMRoom *)arg1 ;
-(HMRoom *)hmRoom;
@end

