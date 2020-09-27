/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CTCallCenter : NSObject {

	NSSet* _currentCalls;
	/*^block*/id _callEventHandler;

}

@property (retain,readonly) NSSet * currentCalls;              //@synthesize currentCalls=_currentCalls - In the implementation block
@property (nonatomic,copy) id callEventHandler;                //@synthesize callEventHandler=_callEventHandler - In the implementation block
-(NSSet *)currentCalls;
-(id)callEventHandler;
-(void)setCallEventHandler:(id)arg1 ;
@end

