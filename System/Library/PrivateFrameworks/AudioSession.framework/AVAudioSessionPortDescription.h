/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/AudioSession
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioSession/AudioSession-Structs.h>
@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSString * portType; 
@property (nonatomic,readonly) NSString * portName; 
@property (nonatomic,readonly) NSString * UID; 
@property (readonly) BOOL hasHardwareVoiceCallProcessing; 
@property (nonatomic,readonly) NSArray * channels; 
@property (nonatomic,readonly) NSArray * dataSources; 
@property (nonatomic,readonly) AVAudioSessionDataSourceDescription * selectedDataSource; 
@property (nonatomic,readonly) AVAudioSessionDataSourceDescription * preferredDataSource; 
+(id)privateCreateArray:(id)arg1 owningSession:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(NSArray *)channels;
-(NSString *)portType;
-(BOOL)isHeadphones;
-(NSString *)portName;
-(NSArray *)dataSources;
-(AVAudioSessionDataSourceDescription *)selectedDataSource;
-(AVAudioSessionDataSourceDescription *)preferredDataSource;
-(unsigned long long)endpointType;
-(id)initWithSession:(id)arg1 ;
-(NSString *)UID;
-(BOOL)isEqualToPort:(id)arg1 compareStrict:(BOOL)arg2 ;
-(PortDescriptionImpl*)privateGetImplementation;
-(id)privateGetID;
-(void)configureChannelsAndDataSources:(id)arg1 ;
-(id)initWithRawPortDescription:(id)arg1 owningSession:(id)arg2 ;
-(BOOL)hasHardwareVoiceCallProcessing;
-(BOOL)isLiveListenSupported;
-(BOOL)setPreferredDataSource:(id)arg1 error:(id*)arg2 ;
@end

