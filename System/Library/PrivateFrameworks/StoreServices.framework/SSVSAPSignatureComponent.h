/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSVSAPSignatureComponent : NSObject <NSCopying> {

	long long _componentType;
	NSString* _key;

}

@property (nonatomic,readonly) long long componentType;              //@synthesize componentType=_componentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                  //@synthesize key=_key - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(long long)componentType;
-(id)initWithComponentType:(long long)arg1 key:(id)arg2 ;
-(id)dataToSignWithURLResponse:(id)arg1 responseData:(id)arg2 ;
-(id)dataToSignWithURLRequest:(id)arg1 ;
-(id)_dataToSignWithDataSource:(id)arg1 ;
-(id)dataToSignWithRequestProperties:(id)arg1 ;
@end

