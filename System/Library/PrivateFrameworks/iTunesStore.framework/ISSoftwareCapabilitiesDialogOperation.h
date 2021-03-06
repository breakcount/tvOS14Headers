/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSDictionary;

@interface ISSoftwareCapabilitiesDialogOperation : ISOperation {

	NSDictionary* _mismatches;
	id _requiredCapabilities;

}

@property (readonly) NSDictionary * mismatches; 
@property (readonly) id requiredCapabilities; 
-(void)dealloc;
-(void)run;
-(id)requiredCapabilities;
-(void)_postDefaultDialog;
-(NSDictionary *)mismatches;
-(id)initWithRequiredCapabilities:(id)arg1 mismatches:(id)arg2 ;
@end

