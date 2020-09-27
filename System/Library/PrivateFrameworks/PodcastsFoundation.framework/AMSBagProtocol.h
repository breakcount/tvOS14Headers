/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString, AMSProcessInfo;


@protocol AMSBagProtocol <NSObject>
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@optional
-(AMSProcessInfo *)processInfo;
-(id)URLForKey:(id)arg1 account:(id)arg2;

@required
-(NSDate *)expirationDate;
-(id)boolForKey:(id)arg1;
-(id)integerForKey:(id)arg1;
-(id)stringForKey:(id)arg1;
-(id)arrayForKey:(id)arg1;
-(id)dictionaryForKey:(id)arg1;
-(id)doubleForKey:(id)arg1;
-(id)URLForKey:(id)arg1;
-(BOOL)isExpired;
-(NSString *)profile;
-(NSString *)profileVersion;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1;

@end

