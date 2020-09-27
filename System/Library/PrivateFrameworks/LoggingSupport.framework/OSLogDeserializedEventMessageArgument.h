/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/OSLogEventMessageArgument.h>

@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedEventMessageArgument : OSLogEventMessageArgument {

	NSDictionary* _backingDict;
	_OSLogEventSerializationMetadata* _metadata;

}

@property (nonatomic,readonly) NSDictionary * backingDict;                               //@synthesize backingDict=_backingDict - In the implementation block
@property (nonatomic,readonly) _OSLogEventSerializationMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(double)doubleValue;
-(unsigned long long)category;
-(_OSLogEventSerializationMetadata *)metadata;
-(unsigned long long)availability;
-(const void*)rawBytes;
-(long long)int64Value;
-(id)objectRepresentation;
-(unsigned long long)privacy;
-(unsigned short)rawBytesLength;
-(unsigned long long)scalarCategory;
-(unsigned long long)scalarType;
-(unsigned long long)unsignedInt64Value;
-(D)longDoubleValue;
-(id)initWithDict:(id)arg1 metadata:(id)arg2 ;
-(NSDictionary *)backingDict;
-(id)_numValue;
@end
