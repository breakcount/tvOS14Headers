/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSCloudKitMirroringRequest.h>

@class NSError;

@interface NSCloudKitMirroringDelegateResetRequest : NSCloudKitMirroringRequest {

	NSError* _causedByError;

}

@property (nonatomic,readonly) NSError * causedByError;              //@synthesize causedByError=_causedByError - In the implementation block
-(void)dealloc;
-(id)initWithError:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSError *)causedByError;
@end
