/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface RMConnectionClientCachedMessage : NSObject {

	NSString* _name;
	NSData* _data;
	/*^block*/id _streamingCallback;

}

@property (nonatomic,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSData * data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) id streamingCallback;              //@synthesize streamingCallback=_streamingCallback - In the implementation block
-(NSString *)name;
-(NSData *)data;
-(id)initWithName:(id)arg1 data:(id)arg2 ;
-(id)initWithName:(id)arg1 data:(id)arg2 streamingCallback:(/*^block*/id)arg3 ;
-(id)streamingCallback;
@end

