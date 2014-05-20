#import <Cocoa/Cocoa.h>

@protocol MKDragFileWellProtocol
- (void)droppedInWell:sender;
- (BOOL)acceptsDrop:sender;
@end

@interface MKDragFileWell : NSImageView

@property (strong, nonatomic) NSArray *filePaths;
@property (assign, nonatomic) id delegate;
@property (assign, nonatomic) BOOL canDrag;
@property (assign, nonatomic) BOOL canDrop;

- (void)filePaths:(NSArray *)array;
- (NSArray *)filePaths;

- (void)setImage:(NSImage *)image;
//- (NSImage *)image;

// -- dragging destination

- (NSDragOperation)draggingSourceOperationMaskForLocal:(BOOL)isLocal;
- (unsigned int)draggingEntered:(id <NSDraggingInfo>)sender;
- (BOOL)draggingUpdated:(id <NSDraggingInfo>)sender;
- (void)draggingExited:(id <NSDraggingInfo>)sender;
- (BOOL)performDragOperation:(id <NSDraggingInfo>)sender;

// delegate methods -- dragging source

- (void)copy:sender;

@end
