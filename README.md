**Runtime GLB Model Downloader for Unreal Engine**

A lightweight Unreal Engine plugin that downloads .glb (glTF Binary) models at runtime, converts them into UStaticMesh objects, and spawns them into the scene.

**Features**
Download GLB models from URLs
Save downloaded files locally
Import GLB files at runtime
Generate UStaticMesh objects dynamically
Spawn imported meshes into the world
Blueprint accessible functions
No editor import required

**Supported Versions**
Unreal Engine 5.3+
Windows
Android (untested/experimental if applicable)

**Blueprint Functions**
**Download Model**

Downloads a GLB file and saves it locally.

DownloadModel(URL, SavePath)

Returns:

Success
Saved File Path
Error Message

**Import GLB Model**

Imports a local GLB file into a runtime Static Mesh.

ImportGLBModel(FilePath)

Returns:

Success
Static Mesh
Error Message

**Download and Import Model**

Downloads and imports a model in a single call.

DownloadAndImportModel(URL, SavePath)

Returns:

Success
Static Mesh
Error Message

**Spawn Static Mesh**

Spawns a runtime-generated mesh into the scene.

SpawnStaticMesh(
    StaticMesh,
    Location,
    Rotation,
    Scale
)

Returns:

Spawned Actor

**Example Workflow**
URL
 ↓
DownloadAndImportModel
 ↓
StaticMesh
 ↓
SpawnStaticMesh
 ↓
Model Appears In Scene

**Example**
DownloadAndImportModel(
    "https://example.com/model.glb",
    "DownloadedModel.glb"
);

**Limitations**

Current version supports:

✅ Static Meshes

Current version does NOT support:

❌ Materials
❌ Textures
❌ Skeletal Meshes
❌ Animations
❌ Morph Targets
❌ LODs

**Dependencies**
Unreal Engine GLTF Runtime libraries
HTTP Module
MeshDescription Module
