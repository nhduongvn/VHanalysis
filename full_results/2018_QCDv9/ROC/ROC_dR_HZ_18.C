#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_dR_HZ_18()
{
//=========Macro generated from canvas: ROC_dR_HZ_18/ROC_dR_HZ_18
//=========  (Thu Jan 19 10:33:19 2023) by ROOT version 6.26/06
   TCanvas *ROC_dR_HZ_18 = new TCanvas("ROC_dR_HZ_18", "ROC_dR_HZ_18",0,0,600,600);
   ROC_dR_HZ_18->SetHighLightColor(2);
   ROC_dR_HZ_18->Range(-0.2901542,-0.1614138,1.238651,1.183702);
   ROC_dR_HZ_18->SetFillColor(0);
   ROC_dR_HZ_18->SetBorderMode(0);
   ROC_dR_HZ_18->SetBorderSize(2);
   ROC_dR_HZ_18->SetGridx();
   ROC_dR_HZ_18->SetGridy();
   ROC_dR_HZ_18->SetLeftMargin(0.15709);
   ROC_dR_HZ_18->SetRightMargin(0.1234783);
   ROC_dR_HZ_18->SetBottomMargin(0.12);
   ROC_dR_HZ_18->SetFrameBorderMode(0);
   ROC_dR_HZ_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx88[60] = {
   0,
   0.0002252641,
   0.001165877,
   0.002213042,
   0.004264208,
   0.005925849,
   0.009162998,
   0.01282469,
   0.0160697,
   0.02006827,
   0.02413678,
   0.02864645,
   0.03517228,
   0.04185274,
   0.04841598,
   0.05466536,
   0.06213895,
   0.07168406,
   0.08151485,
   0.09266782,
   0.1043047,
   0.1171061,
   0.1345138,
   0.1515084,
   0.1734162,
   0.2020097,
   0.2355455,
   0.2722734,
   0.3224441,
   0.3937578,
   0.4882794,
   0.6275078,
   0.7691946,
   0.8355382,
   0.8787537,
   0.9042331,
   0.9240592,
   0.9382683,
   0.9497492,
   0.9571008,
   0.9636884,
   0.9693441,
   0.9746779,
   0.9794414,
   0.9828607,
   0.9845,
   0.9872211,
   0.9886013,
   0.9902382,
   0.9915564,
   0.9932742,
   0.9953655,
   0.9961614,
   0.9974315,
   0.9981706,
   0.9987158,
   0.9994289,
   0.9996408,
   0.9998078,
   0.9998666};
   Double_t Graph_fy88[60] = {
   0,
   0.0001789137,
   0.000724431,
   0.001929809,
   0.003669054,
   0.005695373,
   0.008159291,
   0.01092006,
   0.01519279,
   0.01926806,
   0.02451261,
   0.03031768,
   0.03514436,
   0.04113839,
   0.04803944,
   0.0554302,
   0.06507863,
   0.07380534,
   0.08432941,
   0.09655518,
   0.1086496,
   0.1238925,
   0.1412125,
   0.1571829,
   0.1771821,
   0.1985885,
   0.2236911,
   0.257815,
   0.2968238,
   0.3416353,
   0.4068404,
   0.4888206,
   0.570011,
   0.626729,
   0.6720127,
   0.710365,
   0.7431026,
   0.773309,
   0.7999283,
   0.8211466,
   0.8442729,
   0.864513,
   0.8813297,
   0.8978967,
   0.9117499,
   0.9234749,
   0.9332453,
   0.9421627,
   0.951759,
   0.95864,
   0.9654065,
   0.9719841,
   0.9762536,
   0.9818577,
   0.9855632,
   0.9883203,
   0.9905512,
   0.9931034,
   0.9960169,
   0.998506};
   TGraph *graph = new TGraph(60,Graph_fx88,Graph_fy88);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Only");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph88 = new TH1F("Graph_Graph88","Tagging Only",100,0,1.099853);
   Graph_Graph88->SetMinimum(0);
   Graph_Graph88->SetMaximum(1.098357);
   Graph_Graph88->SetDirectory(0);
   Graph_Graph88->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph88->SetLineColor(ci);
   Graph_Graph88->GetXaxis()->SetLabelFont(42);
   Graph_Graph88->GetXaxis()->SetTitleOffset(1);
   Graph_Graph88->GetXaxis()->SetTitleFont(42);
   Graph_Graph88->GetYaxis()->SetLabelFont(42);
   Graph_Graph88->GetYaxis()->SetTitleFont(42);
   Graph_Graph88->GetZaxis()->SetLabelFont(42);
   Graph_Graph88->GetZaxis()->SetTitleOffset(1);
   Graph_Graph88->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph88);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx89[60] = {
   0,
   0,
   0,
   0,
   5.793045e-05,
   5.793045e-05,
   0.0007916895,
   0.0008797543,
   0.0008797543,
   0.0008797543,
   0.001584382,
   0.001707567,
   0.00221536,
   0.002332518,
   0.002536999,
   0.003715551,
   0.003893053,
   0.006963295,
   0.007544292,
   0.009318962,
   0.01161492,
   0.01386165,
   0.01610183,
   0.0193338,
   0.02494168,
   0.03400118,
   0.04782137,
   0.06054019,
   0.1014975,
   0.1726496,
   0.2982202,
   0.5078456,
   0.7349952,
   0.8185572,
   0.8754599,
   0.9105045,
   0.9304584,
   0.9468717,
   0.9576579,
   0.9666769,
   0.9727856,
   0.9761663,
   0.9801778,
   0.9835759,
   0.9848678,
   0.9865533,
   0.9889855,
   0.9904354,
   0.9917081,
   0.9923916,
   0.9926453,
   0.9939912,
   0.9946486,
   0.994884,
   0.9957212,
   0.9978912,
   0.9988122,
   0.9991607,
   0.9998377,
   0.9998377};
   Double_t Graph_fy89[60] = {
   0,
   8.739573e-07,
   4.087282e-06,
   4.447303e-05,
   5.132452e-05,
   6.841556e-05,
   8.600392e-05,
   0.0002755706,
   0.0003527411,
   0.0003816236,
   0.0004994645,
   0.0008136863,
   0.003350425,
   0.005638779,
   0.005959346,
   0.006280902,
   0.006843322,
   0.007500246,
   0.008369149,
   0.009522863,
   0.01069179,
   0.01388468,
   0.01960034,
   0.02225817,
   0.03048049,
   0.0404102,
   0.04981443,
   0.07359963,
   0.09194025,
   0.1236623,
   0.1839941,
   0.2779528,
   0.3771181,
   0.4600278,
   0.5181318,
   0.5711458,
   0.6211031,
   0.6652864,
   0.7132271,
   0.7478578,
   0.775382,
   0.8086963,
   0.8455454,
   0.8656444,
   0.8803164,
   0.9007112,
   0.9159645,
   0.9282071,
   0.9463476,
   0.9547556,
   0.95967,
   0.9682071,
   0.9733414,
   0.9798885,
   0.9823528,
   0.9863984,
   0.9884245,
   0.9927117,
   0.9957116,
   0.9992286};
   graph = new TGraph(60,Graph_fx89,Graph_fy89);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph89 = new TH1F("Graph_Graph89","Mass-Matching Prioritized",100,0,1.099822);
   Graph_Graph89->SetMinimum(0);
   Graph_Graph89->SetMaximum(1.099151);
   Graph_Graph89->SetDirectory(0);
   Graph_Graph89->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph89->SetLineColor(ci);
   Graph_Graph89->GetXaxis()->SetLabelFont(42);
   Graph_Graph89->GetXaxis()->SetTitleOffset(1);
   Graph_Graph89->GetXaxis()->SetTitleFont(42);
   Graph_Graph89->GetYaxis()->SetLabelFont(42);
   Graph_Graph89->GetYaxis()->SetTitleFont(42);
   Graph_Graph89->GetZaxis()->SetLabelFont(42);
   Graph_Graph89->GetZaxis()->SetTitleOffset(1);
   Graph_Graph89->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph89);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx90[60] = {
   0,
   0.0001979803,
   0.001097318,
   0.002306388,
   0.004275736,
   0.006144946,
   0.009620671,
   0.01367128,
   0.01717628,
   0.02177341,
   0.026161,
   0.03126073,
   0.03788882,
   0.04443289,
   0.05175145,
   0.05819419,
   0.06683423,
   0.07657161,
   0.08707173,
   0.09867737,
   0.1105141,
   0.1244192,
   0.1421245,
   0.1598808,
   0.1825992,
   0.2129908,
   0.2480002,
   0.2863317,
   0.3372611,
   0.4072742,
   0.4981336,
   0.6339002,
   0.7691263,
   0.8350325,
   0.876259,
   0.9010058,
   0.9212568,
   0.9360572,
   0.9473687,
   0.9556404,
   0.9627038,
   0.9682857,
   0.9733352,
   0.978458,
   0.9821134,
   0.9837593,
   0.9864157,
   0.9880691,
   0.9902585,
   0.9915975,
   0.9932703,
   0.9952034,
   0.9960822,
   0.9972356,
   0.9981315,
   0.9988266,
   0.9994609,
   0.9996658,
   0.9998311,
   0.9998827};
   Double_t Graph_fy90[60] = {
   0,
   0.0001768927,
   0.0007212806,
   0.001975777,
   0.003698493,
   0.005714105,
   0.008374462,
   0.01110553,
   0.01540107,
   0.01977224,
   0.02500496,
   0.03080337,
   0.03594299,
   0.04188875,
   0.04881467,
   0.0565267,
   0.06607679,
   0.07509993,
   0.08630952,
   0.09853872,
   0.1106415,
   0.1258972,
   0.1431056,
   0.1596135,
   0.179773,
   0.2012185,
   0.2265967,
   0.2612614,
   0.3001974,
   0.3455565,
   0.4108688,
   0.4923727,
   0.5723069,
   0.6288462,
   0.6735667,
   0.7120682,
   0.7443031,
   0.774256,
   0.8013087,
   0.8224924,
   0.8457148,
   0.8657034,
   0.8823293,
   0.8986733,
   0.9125402,
   0.9241082,
   0.9338253,
   0.9426837,
   0.952089,
   0.9589106,
   0.9657278,
   0.9721951,
   0.976403,
   0.9818742,
   0.9858105,
   0.9885217,
   0.9907147,
   0.9932345,
   0.9960937,
   0.9985411};
   graph = new TGraph(60,Graph_fx90,Graph_fy90);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph90 = new TH1F("Graph_Graph90","Tagging Prioritized",100,0,1.099871);
   Graph_Graph90->SetMinimum(0);
   Graph_Graph90->SetMaximum(1.098395);
   Graph_Graph90->SetDirectory(0);
   Graph_Graph90->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph90->SetLineColor(ci);
   Graph_Graph90->GetXaxis()->SetLabelFont(42);
   Graph_Graph90->GetXaxis()->SetTitleOffset(1);
   Graph_Graph90->GetXaxis()->SetTitleFont(42);
   Graph_Graph90->GetYaxis()->SetLabelFont(42);
   Graph_Graph90->GetYaxis()->SetTitleFont(42);
   Graph_Graph90->GetZaxis()->SetLabelFont(42);
   Graph_Graph90->GetZaxis()->SetTitleOffset(1);
   Graph_Graph90->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph90);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999414, 1.049877);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.55,0.15,0.85,0.3,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","Tagging Only","lpf");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Mass-Matching Prioritized","lpf");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Tagging Prioritized","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_dR_HZ_18->Modified();
   ROC_dR_HZ_18->cd();
   ROC_dR_HZ_18->SetSelected(ROC_dR_HZ_18);
}
