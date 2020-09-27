/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaLibraryRequestOperation.h>

@class NSString;

@interface TVHKMediaLibraryDAAPDatabasesOperation : TVHKMediaLibraryRequestOperation {

	unsigned _databaseID;
	NSString* _databaseName;
	unsigned long long _databasePersistentID;

}

@property (nonatomic,copy) NSString * databaseName;                                //@synthesize databaseName=_databaseName - In the implementation block
@property (assign,nonatomic) unsigned databaseID;                                  //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) unsigned long long databasePersistentID;              //@synthesize databasePersistentID=_databasePersistentID - In the implementation block
-(void)setDatabaseName:(NSString *)arg1 ;
-(NSString *)databaseName;
-(void)setDatabaseID:(unsigned)arg1 ;
-(unsigned)databaseID;
-(void)_handleResponse:(id)arg1 ;
-(id)initWithRequest:(id)arg1 requestSession:(id)arg2 ;
-(id)initWithSessionState:(id)arg1 requestSession:(id)arg2 ;
-(unsigned long long)databasePersistentID;
-(void)setDatabasePersistentID:(unsigned long long)arg1 ;
@end

