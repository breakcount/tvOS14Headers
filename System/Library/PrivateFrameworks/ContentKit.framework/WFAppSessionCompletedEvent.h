/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFAppSessionCompletedEvent : WFEvent {

	unsigned _duration;
	NSString* _key;
	NSString* _source;

}

@property (nonatomic,copy) NSString * key;                   //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * source;                //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned duration;              //@synthesize duration=_duration - In the implementation block
+(Class)codableEventClass;
+(id)serializablePropertyTransformers;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
@end

