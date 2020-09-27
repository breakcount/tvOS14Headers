/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFSerializableContentProviderEntry : NSObject {

	/*^block*/id _serializationBlock;
	/*^block*/id _deserializationBlock;

}

@property (nonatomic,readonly) id serializationBlock;                //@synthesize serializationBlock=_serializationBlock - In the implementation block
@property (nonatomic,readonly) id deserializationBlock;              //@synthesize deserializationBlock=_deserializationBlock - In the implementation block
-(id)initWithSerializedRepresentationBlock:(/*^block*/id)arg1 deserializationBlock:(/*^block*/id)arg2 ;
-(id)serializationBlock;
-(id)deserializationBlock;
@end

