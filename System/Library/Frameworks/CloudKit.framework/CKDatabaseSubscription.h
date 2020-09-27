/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKSubscription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDatabaseSubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (nonatomic,copy) NSString * recordType; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSubscriptionID:(id)arg1 ;
-(void)setRecordType:(NSString *)arg1 ;
-(id)CKPropertiesDescription;
@end
