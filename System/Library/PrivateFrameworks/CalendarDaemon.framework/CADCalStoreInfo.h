/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CADCalStoreInfo
@property (nonatomic,readonly) int rowID; 
@property (nonatomic,readonly) BOOL isLocalStore; 
@property (nonatomic,readonly) BOOL isEnabled; 
@required
-(BOOL)isEnabled;
-(id)accountIdentifier;
-(id)storeName;
-(id)delegatedAccountOwnerAccountIdentifier;
-(int)rowID;
-(BOOL)isLocalStore;

@end

