/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSUUID;

@interface AXSS_PunctuationEntry : NSManagedObject

@property (nonatomic,copy) NSString * ckChangeTag; 
@property (nonatomic,copy) NSDate * ckRecordProcessDate; 
@property (nonatomic,copy) NSUUID * groupUUID; 
@property (assign,nonatomic) BOOL inCloud; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,copy) NSString * punctuation; 
@property (nonatomic,copy) NSString * replacement; 
@property (nonatomic,copy) NSString * rule; 
@property (nonatomic,copy) NSUUID * uuid; 
@property (assign,nonatomic) short version; 
+(id)fetchRequest;
@end
