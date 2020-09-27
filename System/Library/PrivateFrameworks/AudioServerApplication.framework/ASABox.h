/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerApplication/ASAObject.h>

@class NSString, NSArray;

@interface ASABox : ASAObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * modelName; 
@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (nonatomic,copy,readonly) NSString * firmwareVersion; 
@property (nonatomic,copy,readonly) NSString * boxUID; 
@property (nonatomic,copy,readonly) NSString * modelUID; 
@property (nonatomic,readonly) unsigned transportType; 
@property (nonatomic,readonly) BOOL hasAudio; 
@property (nonatomic,readonly) BOOL hasVideo; 
@property (nonatomic,readonly) BOOL hasMIDI; 
@property (nonatomic,readonly) BOOL isProtected; 
@property (assign,getter=isAcquired,nonatomic) BOOL acquired; 
@property (nonatomic,readonly) int acquisitionFailure; 
@property (assign,nonatomic) BOOL identify; 
@property (nonatomic,copy,readonly) NSArray * audioDeviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * deviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * clockDeviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * audioDevices; 
@property (nonatomic,copy,readonly) NSArray * clockDevices; 
@property (getter=isNameSettable,nonatomic,readonly) BOOL nameSettable; 
@property (getter=isAcquireSettable,nonatomic,readonly) BOOL acquireSettable; 
@property (getter=isIdentifySettable,nonatomic,readonly) BOOL identifySettable; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned)transportType;
-(NSString *)serialNumber;
-(NSString *)manufacturer;
-(NSString *)firmwareVersion;
-(NSString *)modelName;
-(BOOL)hasVideo;
-(BOOL)hasAudio;
-(BOOL)isProtected;
-(BOOL)identify;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(NSString *)modelUID;
-(NSArray *)audioDeviceObjectIDs;
-(NSArray *)clockDeviceObjectIDs;
-(NSArray *)deviceObjectIDs;
-(NSArray *)audioDevices;
-(NSArray *)clockDevices;
-(BOOL)isAcquireSettable;
-(BOOL)isIdentifySettable;
-(NSString *)boxUID;
-(BOOL)hasMIDI;
-(BOOL)isAcquired;
-(BOOL)isNameSettable;
-(int)acquisitionFailure;
-(void)setAcquired:(BOOL)arg1 ;
-(void)setIdentify:(BOOL)arg1 ;
@end

