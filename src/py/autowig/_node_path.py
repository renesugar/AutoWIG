"""
"""

from .asg import DeclarationProxy, EnumeratorProxy, TypedefProxy, VariableProxy

__all__ = []

from .plugin import PluginManager

node_path = PluginManager('autowig.node_path', brief="",
        details="")
        
def hash_node_path( node, prefix='', suffix=''):
    if not isinstance(node, DeclarationProxy):
        raise TypeError('\'node\' parameter is not \'autowig.asg.CodeNodeProxy\' instance but a \'' + node.__class__.__name__ + '\' instance')
    if prefix and not prefix.endswith('_'):
        prefix = prefix + '_'
    if isinstance(node, (TypedefProxy, VariableProxy, EnumeratorProxy)):
        node = node.parent
    return prefix + node.hash + suffix
