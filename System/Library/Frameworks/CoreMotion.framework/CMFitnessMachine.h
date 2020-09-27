/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMFitnessMachineInternal;

@interface CMFitnessMachine : NSObject {

	CMFitnessMachineInternal* _internal;

}

@property (nonatomic,readonly) CMFitnessMachineInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(id)init;
-(void)dealloc;
-(CMFitnessMachineInternal *)_internal;
-(void)feedFitnessMachineData:(id)arg1 ;
@end
