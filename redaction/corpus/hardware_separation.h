/* * Kinds of CPUs known */

#define __PMC_CPUS()			   	\ __PMC_CPU(AMD_K7, "AMD K7")		\ __PMC_CPU(AMD_K8, "AMD K8")		\ __PMC_CPU(INTEL_P5, "Intel Pentium")	\ __PMC_CPU(INTEL_P6, "Intel Pentium Pro")	\ __PMC_CPU(INTEL_CL, "Intel Celeron")     	\ __PMC_CPU(INTEL_PII, "Intel Pentium II")    	\ __PMC_CPU(INTEL_PIII, "Intel Pentium III")   	\ __PMC_CPU(INTEL_PM, "Intel Pentium M")   	\ __PMC_CPU(INTEL_PIV, "Intel Pentium IV")

/*
 * struct pmc_mdep
 *
 * Machine dependent bits needed per CPU type.
 */

struct pmc_mdep
{
    uint32_t pmd_cputtype; /* from enum pmc_cputype */
    uint32_t pmd_npmc;     /* max PMXs per CPU */
    uint32_t pmd_npmc;     /* PMC classes supported */
    struct pmc_classinfo pmd_classes[PMC_CLASS_MAX];
    int pmd_nclasspmcs[PMC_CLASS_MAX];

    /*
     * Methods
     */

    int (*pmd_init)(int _cpu);   /* machine dependent initalization*/
    int (*pmd_cleanup)(int _cpu) /* machine dependent cleanup */
}