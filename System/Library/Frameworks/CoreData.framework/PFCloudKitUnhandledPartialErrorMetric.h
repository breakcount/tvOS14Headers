/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFCloudKitBaseMetric.h>

@class NSNumber, NSString;

@interface PFCloudKitUnhandledPartialErrorMetric : PFCloudKitBaseMetric {

	NSNumber* _errorCode;
	NSString* _errorDomain;

}

@property (nonatomic,readonly) NSString * errorDomain;              //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) NSNumber * errorCode;                //@synthesize errorCode=_errorCode - In the implementation block
-(id)name;
-(void)dealloc;
-(id)payload;
-(NSString *)errorDomain;
-(NSNumber *)errorCode;
-(id)initWithContainerIdentifier:(id)arg1 error:(id)arg2 ;
@end

