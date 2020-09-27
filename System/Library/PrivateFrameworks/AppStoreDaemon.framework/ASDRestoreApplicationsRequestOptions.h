/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDRestoreApplicationsRequestOptions : ASDRequestOptions {

	BOOL _completeDataPromise;
	BOOL _createsPlaceholders;
	BOOL _createAsMobileBackup;
	BOOL _restoreApplicationData;
	NSArray* _items;

}

@property (assign,nonatomic) BOOL completeDataPromise;                 //@synthesize completeDataPromise=_completeDataPromise - In the implementation block
@property (assign,nonatomic) BOOL createsPlaceholders;                 //@synthesize createsPlaceholders=_createsPlaceholders - In the implementation block
@property (assign,nonatomic) BOOL createAsMobileBackup;                //@synthesize createAsMobileBackup=_createAsMobileBackup - In the implementation block
@property (assign,nonatomic) BOOL restoreApplicationData;              //@synthesize restoreApplicationData=_restoreApplicationData - In the implementation block
@property (nonatomic,readonly) NSArray * items;                        //@synthesize items=_items - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)items;
-(id)initWithApplicationMetadata:(id)arg1 ;
-(BOOL)completeDataPromise;
-(void)setCompleteDataPromise:(BOOL)arg1 ;
-(BOOL)createsPlaceholders;
-(void)setCreatesPlaceholders:(BOOL)arg1 ;
-(BOOL)createAsMobileBackup;
-(void)setCreateAsMobileBackup:(BOOL)arg1 ;
-(BOOL)restoreApplicationData;
-(void)setRestoreApplicationData:(BOOL)arg1 ;
@end
