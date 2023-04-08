/*
** EPITECH PROJECT, 2023
** t_xml_token.h
** File description:
** desc
*/
#ifndef t_xml_token
    #define t_xml_token

    #include <t_path.h>

    typedef struct xml_attribute {
        char *key;
        char *value;
    } t_xml_attribute;

    typedef struct xml_node {
        char *tag;
        t_list *list_attributes;
        char *inner_text;
        struct xml_node *parent;
        t_list *list_children;
    } t_xml_node;

    typedef struct xml {
        char *source;
        t_xml_node *root;
    } t_xml;

    t_xml *t_xml_load(const char *path);
    void t_xml_free(t_xml *doc);
    t_xml_node *t_xml_new_node(t_xml_node *parent);
    void t_xml_node_free(t_xml_node *node);
    bool t_xml_token_parser(t_xml *doc, tfile_s *file);
    void t_xml_token_add_datas(t_xml *doc, t_xml_node **current,
        size_t *index, char *buf);
    int t_xml_token_is_valide_end_tag(char *buf, t_xml_node *current,
        size_t *index);

#endif //t_xml_token
