#include <cinolib/meshes/trimesh.h>
#include <cinolib/homotopy_basis.h>
#include <cinolib/canonical_polygonal_schema.h>
#include <cinolib/string_utilities.h>

using namespace cinolib;

int main(int argc, char **argv)
{    
    assert(argc==2);
    std::string path     = get_file_path(argv[1]);
    std::string basename = get_file_name(argv[1],false);

    Trimesh<> m_xyz(argv[1]);
    HomotopyBasisData data;
    data.globally_shortest = false;
    data.root = 0;
    data.detach_loops = true;
    data.split_strategy = HYBRID_SPLIT_STRATEGY;
    data.coplanarity_thresh = 5;
    homotopy_basis(m_xyz, data);
    Trimesh<> m_uvw;
    canonical_polygonal_schema(m_xyz, data, m_uvw);

    m_xyz.save((path + basename + "_cut.obj").c_str());
    m_uvw.save((path + basename + "_cps.obj").c_str());
    return 0;
}
