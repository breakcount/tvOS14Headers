/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSKeyValueContainerClass, NSString;

@interface NSKeyValueProperty : NSObject <NSCopying> {

	NSKeyValueContainerClass* _containerClass;
	NSString* _keyPath;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)keyPath;
-(id)dependentValueKeyOrKeysIsASet:(BOOL*)arg1 ;
-(void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(BOOL)arg3 ;
-(Class)isaForAutonotifying;
-(void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(BOOL)arg3 ;
-(id)restOfKeyPathIfContainedByValueForKeyPath:(id)arg1 ;
-(BOOL)matchesWithoutOperatorComponentsKeyPath:(id)arg1 ;
-(id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1 ;
-(id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(BOOL*)arg2 ;
-(BOOL)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(SCD_Struct_NS37*)arg5 ;
-(void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(SCD_Struct_NS37)arg5 ;
-(id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(CFSetRef)arg3 ;
@end

