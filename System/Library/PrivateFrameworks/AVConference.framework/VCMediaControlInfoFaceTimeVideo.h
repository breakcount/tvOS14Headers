/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaControlInfo.h>

@interface VCMediaControlInfoFaceTimeVideo : VCMediaControlInfo {

	unsigned char _controlInfoCameraStatus;
	unsigned char _controlInfoLTRBits;
	unsigned _controlInfoLTRTimestamp;
	SCD_Struct_VC116 _controlInfoFrameExtensionData;
	unsigned char _controlInfoFEC[36];
	unsigned long long _controlInfoFECLength;
	unsigned _controlInfoProbe;
	unsigned _controlInfoReceivedKbits;
	unsigned _controlInfoReceivedPackets;
	unsigned _controlInfoVideoPacketSize;
	unsigned _controlInfoVideoTimestamp;
	double _controlInfoVideoArrivalTime;

}
-(id)description;
-(int)configureWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC90*)arg3 ;
-(int)setInfo:(void*)arg1 size:(unsigned long long)arg2 type:(unsigned)arg3 ;
-(BOOL)hasInfoType:(unsigned)arg1 ;
-(int)getInfo:(void*)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long*)arg3 type:(unsigned)arg4 ;
-(int)serializeToBuffer:(char*)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long*)arg3 ;
-(unsigned long long)serializedSize;
-(int)handleOptionalControlInfo:(SCD_Struct_VC90*)arg1 ;
@end

