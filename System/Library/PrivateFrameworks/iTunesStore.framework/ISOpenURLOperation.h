/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation {

	ISOpenURLRequest* _request;

}

@property (readonly) ISOpenURLRequest * openURLRequest; 
-(id)init;
-(void)run;
-(id)initWithOpenURLRequest:(id)arg1 ;
-(BOOL)_openURL:(id)arg1 ;
-(id)_newSortedTargetsArray;
-(ISOpenURLRequest *)openURLRequest;
@end

