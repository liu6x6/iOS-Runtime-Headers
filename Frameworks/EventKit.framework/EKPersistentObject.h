/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKEventStore, NSMutableDictionary, NSMutableSet;

@interface EKPersistentObject : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    NSMutableDictionary *_committedProperties;
    NSMutableSet *_dirtyProperties;
    EKEventStore *_eventStore;
    unsigned int _flags;
    struct __CFDictionary { } *_loadedProperties;
    } _lock;
    id _objectID;
    NSMutableDictionary *_referencers;
}

@property(retain) NSMutableDictionary * committedProperties;
@property(readonly) int entityType;
@property(readonly) EKEventStore * eventStore;

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (void)_addDirtyProperty:(id)arg1;
- (void)_addObjectCore:(id)arg1 toValues:(id)arg2 relation:(id)arg3;
- (void)_addReference:(id)arg1 forKey:(id)arg2;
- (BOOL)_areDefaultPropertiesLoaded;
- (void)_clearReferences;
- (void)_clearWeakRelations;
- (void)_fastpathSetProperty:(id)arg1 forKey:(id)arg2 isRelation:(BOOL)arg3;
- (BOOL)_isPendingDelete;
- (BOOL)_isPendingInsert;
- (BOOL)_isPendingUpdate;
- (BOOL)_loadChildIdentifiersForKey:(id)arg1 values:(id*)arg2;
- (void)_loadDefaultPropertiesIfNeeded;
- (BOOL)_loadRelationForKey:(id)arg1 value:(id*)arg2;
- (id)_loadStringValueForKey:(id)arg1;
- (id)_loadedPropertyKeys;
- (void)_primitiveSetValue:(id)arg1 forKey:(id)arg2 daemonSetter:(id)arg3;
- (id)_primitiveValueForKey:(id)arg1 loader:(id)arg2;
- (id)_propertyForKey:(id)arg1;
- (id)_relationForKey:(id)arg1;
- (void)_releaseLoadedProperties;
- (void)_removeObjectCore:(id)arg1 fromValues:(id)arg2 relation:(id)arg3;
- (void)_removeReference:(id)arg1 forKey:(id)arg2;
- (void)_setDefaultPropertiesLoaded:(BOOL)arg1;
- (void)_setEventStore:(id)arg1;
- (void)_setObjectID:(id)arg1;
- (void)_setPendingDelete:(BOOL)arg1;
- (void)_setPendingInsert:(BOOL)arg1;
- (void)_setPendingUpdate:(BOOL)arg1;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (BOOL)_shouldRetainPropertyForKey:(id)arg1;
- (void)_takeValues:(id)arg1 forProperties:(id)arg2;
- (void)_takeValuesForDefaultProperties:(id)arg1 inSet:(id)arg2;
- (void)changed;
- (id)committedProperties;
- (id)committedValueForKey:(id)arg1;
- (void)dealloc;
- (id)dirtyProperties;
- (id)dump;
- (int)entityType;
- (id)eventStore;
- (BOOL)existsInStore;
- (void)faultPropertiesWithNames:(id)arg1;
- (id)init;
- (id)initCommon;
- (BOOL)isDirty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNew;
- (BOOL)isPropertyDirty:(id)arg1;
- (BOOL)isPropertyLoaded:(id)arg1;
- (id)objectID;
- (void)primitiveAddRelatedObject:(id)arg1 forKey:(id)arg2;
- (BOOL)primitiveBoolValueForKey:(id)arg1;
- (id)primitiveDataValueForKey:(id)arg1;
- (id)primitiveDateValueForKey:(id)arg1;
- (double)primitiveDoubleValueForKey:(id)arg1;
- (int)primitiveIntValueForKey:(id)arg1;
- (id)primitiveNumberValueForKey:(id)arg1;
- (id)primitiveRelationValueForKey:(id)arg1;
- (void)primitiveRemoveRelatedObject:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (void)primitiveSetDataValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetDateValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetDoubleValue:(double)arg1 forKey:(id)arg2;
- (void)primitiveSetIntValue:(int)arg1 forKey:(id)arg2;
- (void)primitiveSetNumberValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetRelationValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetStringValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetURLValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetUnboundedStringValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveStringValueForKey:(id)arg1;
- (id)primitiveURLValueForKey:(id)arg1;
- (id)primitiveUnboundedStringValueForKey:(id)arg1;
- (void)primitiveValueChangedForKey:(id)arg1;
- (BOOL)pushDirtyProperties:(id*)arg1;
- (BOOL)refresh;
- (BOOL)refreshExcludingProperties:(id)arg1;
- (void)reset;
- (void)rollback;
- (void)saved;
- (void)setCommittedProperties:(id)arg1;
- (void)takeValues:(id)arg1 forProperties:(id)arg2;
- (void)takeValuesForDefaultProperties:(id)arg1 inSet:(id)arg2;
- (void)unloadPropertyForKey:(id)arg1;
- (BOOL)validate:(id*)arg1;

@end
