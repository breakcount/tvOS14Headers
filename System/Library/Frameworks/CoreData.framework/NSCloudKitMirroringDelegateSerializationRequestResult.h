/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSCloudKitMirroringResult.h>

@class NSDictionary;

@interface NSCloudKitMirroringDelegateSerializationRequestResult : NSCloudKitMirroringResult {

	NSDictionary* _serializedObjects;

}

@property (nonatomic,readonly) NSDictionary * serializedObjects;              //@synthesize serializedObjects=_serializedObjects - In the implementation block
-(void)dealloc;
-(id)initWithRequest:(id)arg1 serializedObjects:(id)arg2 error:(id)arg3 ;
-(NSDictionary *)serializedObjects;
@end

