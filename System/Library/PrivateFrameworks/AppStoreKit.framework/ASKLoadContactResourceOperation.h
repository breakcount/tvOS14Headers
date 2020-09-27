/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreKit/ASKLoadResourceOperation.h>

@class NSString;

@interface ASKLoadContactResourceOperation : ASKLoadResourceOperation {

	NSString* _contactId;

}

@property (nonatomic,copy,readonly) NSString * contactId;              //@synthesize contactId=_contactId - In the implementation block
+(double)mainScreenScale;
-(void)main;
-(NSString *)contactId;
-(id)initWithContactId:(id)arg1 ;
-(id)makeFetchError;
@end

