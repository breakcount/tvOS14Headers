/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSSet;

@interface CalDAVPrincipalEmailDetailsResult : NSObject {

	NSURL* _principalURL;
	NSString* _displayName;
	NSSet* _preferredAddresses;

}

@property (nonatomic,retain) NSURL * principalURL;                    //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,retain) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSSet * preferredAddresses;              //@synthesize preferredAddresses=_preferredAddresses - In the implementation block
+(id)resultFromResponseItem:(id)arg1 ;
-(id)description;
-(id)addresses;
-(NSString *)displayName;
-(NSURL *)principalURL;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(NSSet *)preferredAddresses;
-(void)setPreferredAddresses:(NSSet *)arg1 ;
@end

