/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@interface AXMIDIParser : NSObject
-(unsigned short)_channelForStatusByte:(unsigned char)arg1 ;
-(long long)_eventTypeForStatusByte:(unsigned char)arg1 ;
-(unsigned long long)_expectedPacketLengthForEventType:(long long)arg1 ;
-(id)parse:(const MIDIPacketList*)arg1 error:(id*)arg2 ;
@end

