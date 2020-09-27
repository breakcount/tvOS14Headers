/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASCLockup, NSString;

@interface ASCLockupProductDetails : NSObject {

	ASCLockup* _lockup;
	NSString* _storeSheetHostBundleID;
	NSString* _storeSheetUsageContext;

}

@property (nonatomic,copy,readonly) ASCLockup * lockup;                             //@synthesize lockup=_lockup - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeSheetHostBundleID;              //@synthesize storeSheetHostBundleID=_storeSheetHostBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeSheetUsageContext;              //@synthesize storeSheetUsageContext=_storeSheetUsageContext - In the implementation block
+(id)URLForLockupID:(id)arg1 ofKind:(id)arg2 withOfferFlags:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)present;
-(ASCLockup *)lockup;
-(id)initWithLockup:(id)arg1 storeSheetHostBundleID:(id)arg2 storeSheetUsageContext:(id)arg3 ;
-(NSString *)storeSheetHostBundleID;
-(NSString *)storeSheetUsageContext;
@end

