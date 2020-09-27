/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKCloudRecordObject.h>

@class PKCatalog;

@interface PKCloudRecordPassCatalog : PKCloudRecordObject {

	PKCatalog* _catalog;

}

@property (nonatomic,retain) PKCatalog * catalog;              //@synthesize catalog=_catalog - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)item;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(void)applyCloudRecordObject:(id)arg1 ;
-(id)_descriptionWithIncludeItem:(BOOL)arg1 ;
-(PKCatalog *)catalog;
-(void)setCatalog:(PKCatalog *)arg1 ;
@end

