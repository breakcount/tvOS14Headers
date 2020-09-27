/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRVolumeControlAvailabilityProtobuf, NSString;

@interface _MRVolumeControlCapabilitiesDidChangeMessageProtobuf : PBCodable <NSCopying> {

	_MRVolumeControlAvailabilityProtobuf* _capabilities;
	NSString* _endpointUID;
	NSString* _outputDeviceUID;

}

@property (nonatomic,readonly) BOOL hasCapabilities; 
@property (nonatomic,retain) _MRVolumeControlAvailabilityProtobuf * capabilities;              //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) BOOL hasEndpointUID; 
@property (nonatomic,retain) NSString * endpointUID;                                           //@synthesize endpointUID=_endpointUID - In the implementation block
@property (nonatomic,readonly) BOOL hasOutputDeviceUID; 
@property (nonatomic,retain) NSString * outputDeviceUID;                                       //@synthesize outputDeviceUID=_outputDeviceUID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_MRVolumeControlAvailabilityProtobuf *)capabilities;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCapabilities:(_MRVolumeControlAvailabilityProtobuf *)arg1 ;
-(BOOL)hasCapabilities;
-(void)setOutputDeviceUID:(NSString *)arg1 ;
-(NSString *)outputDeviceUID;
-(BOOL)hasOutputDeviceUID;
-(void)setEndpointUID:(NSString *)arg1 ;
-(BOOL)hasEndpointUID;
-(NSString *)endpointUID;
@end

