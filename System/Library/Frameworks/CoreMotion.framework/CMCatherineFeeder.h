/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMCatherineFeederInternal;

@interface CMCatherineFeeder : NSObject {

	CMCatherineFeederInternal* _internal;

}

@property (nonatomic,readonly) CMCatherineFeederInternal * internal;              //@synthesize internal=_internal - In the implementation block
-(id)init;
-(void)dealloc;
-(CMCatherineFeederInternal *)internal;
-(void)feedCatherine:(double)arg1 confidence:(double)arg2 ;
@end
