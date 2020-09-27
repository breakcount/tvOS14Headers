/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPSVectorDescriptor : NSObject {

	unsigned long long _length;
	unsigned long long _vectors;
	unsigned long long _vectorBytes;
	unsigned _dataType;

}

@property (assign,nonatomic) unsigned long long length;                     //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) unsigned long long vectors;                  //@synthesize vectors=_vectors - In the implementation block
@property (assign,nonatomic) unsigned dataType;                             //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) unsigned long long vectorBytes;              //@synthesize vectorBytes=_vectorBytes - In the implementation block
+(id)vectorDescriptorWithLength:(unsigned long long)arg1 vectors:(unsigned long long)arg2 vectorBytes:(unsigned long long)arg3 dataType:(unsigned)arg4 ;
+(unsigned long long)vectorBytesForLength:(unsigned long long)arg1 dataType:(unsigned)arg2 ;
+(id)vectorDescriptorWithLength:(unsigned long long)arg1 dataType:(unsigned)arg2 ;
-(id)init;
-(unsigned long long)length;
-(void)setLength:(unsigned long long)arg1 ;
-(unsigned)dataType;
-(void)setDataType:(unsigned)arg1 ;
-(unsigned long long)vectors;
-(unsigned long long)vectorBytes;
@end

