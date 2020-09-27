/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDVendorModelEntry, NSMutableSet;

@interface HMDVendorModelCollection : HMFObject {

	HMDVendorModelEntry* _defaultEntry;
	NSMutableSet* _entries;

}

@property (nonatomic,readonly) NSMutableSet * entries;                        //@synthesize entries=_entries - In the implementation block
@property (nonatomic,retain) HMDVendorModelEntry * defaultEntry;              //@synthesize defaultEntry=_defaultEntry - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)init;
-(NSMutableSet *)entries;
-(void)addEntry:(id)arg1 ;
-(id)attributeDescriptions;
-(HMDVendorModelEntry *)defaultEntry;
-(id)lookupModel:(id)arg1 ;
-(id)lookupProductData:(id)arg1 ;
-(void)setDefaultEntry:(HMDVendorModelEntry *)arg1 ;
@end
