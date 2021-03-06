/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISOperation.h>

@class NSURL, NSArray;

@interface ISURLResolverOperation : ISOperation {

	CFHostRef _host;
	NSURL* _url;
	NSURL* _URL;

}

@property (nonatomic,copy) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (readonly) NSArray * resolvedAddresses; 
@property (readonly) NSArray * resolvedAddressStrings; 
-(void)dealloc;
-(void)run;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)setUrl:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(id)url;
-(NSArray *)resolvedAddresses;
-(void)_runLookupForHostname:(id)arg1 ;
-(void)_resolutionCompletedWithError:(id)arg1 ;
-(NSArray *)resolvedAddressStrings;
@end

