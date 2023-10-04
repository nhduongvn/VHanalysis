#ifdef __CLING__
#pragma cling optimize(0)
#endif
void OPT_SR_shift18()
{
//=========Macro generated from canvas: OPT_SR_shift18/OPT_SR_shift18
//=========  (Wed Oct  4 11:53:07 2023) by ROOT version 6.28/04
   TCanvas *OPT_SR_shift18 = new TCanvas("OPT_SR_shift18", "OPT_SR_shift18",0,0,600,600);
   OPT_SR_shift18->SetHighLightColor(2);
   OPT_SR_shift18->Range(97.6875,-0.1327036,151.3125,0.9861903);
   OPT_SR_shift18->SetFillColor(0);
   OPT_SR_shift18->SetFillStyle(4000);
   OPT_SR_shift18->SetBorderMode(0);
   OPT_SR_shift18->SetBorderSize(2);
   OPT_SR_shift18->SetFrameFillStyle(1000);
   OPT_SR_shift18->SetFrameBorderMode(0);
   OPT_SR_shift18->SetFrameFillStyle(1000);
   OPT_SR_shift18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("Percentages of Events inside Regions");
   
   Double_t Graph_fx17[40] = { 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
   122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
   138, 139, 140, 141, 142, 143, 144 };
   Double_t Graph_fy17[40] = { 0.764154, 0.7788386, 0.7905077, 0.8011497, 0.8116371, 0.8178851, 0.8253608, 0.831628, 0.8322811, 0.8336139, 0.8319576, 0.8293118, 0.8290013, 0.8256224, 0.8238711, 0.8197821, 0.8124112,
   0.8060951, 0.7958849, 0.7860478, 0.7774053, 0.7699085, 0.7581003, 0.7490813, 0.7383733, 0.7269257, 0.7160902, 0.7008596, 0.683059, 0.6642294, 0.6450128, 0.626676, 0.6106214,
   0.5899729, 0.5669847, 0.5385748, 0.512749, 0.4796071, 0.4518432, 0.4238459 };
   TGraph *graph = new TGraph(40,Graph_fx17,Graph_fy17);
   graph->SetName("Graph");
   graph->SetTitle("SR");
   graph->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph17 = new TH1F("Graph_Graph17","SR",100,101.1,147.9);
   Graph_Graph17->SetMinimum(0.3828691);
   Graph_Graph17->SetMaximum(0.8745907);
   Graph_Graph17->SetDirectory(nullptr);
   Graph_Graph17->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph17->SetLineColor(ci);
   Graph_Graph17->GetXaxis()->SetLabelFont(42);
   Graph_Graph17->GetXaxis()->SetTitleOffset(1);
   Graph_Graph17->GetXaxis()->SetTitleFont(42);
   Graph_Graph17->GetYaxis()->SetLabelFont(42);
   Graph_Graph17->GetYaxis()->SetTitleFont(42);
   Graph_Graph17->GetZaxis()->SetLabelFont(42);
   Graph_Graph17->GetZaxis()->SetTitleOffset(1);
   Graph_Graph17->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph17);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx18[40] = { 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
   122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
   138, 139, 140, 141, 142, 143, 144 };
   Double_t Graph_fy18[40] = { 0.154886, 0.1436931, 0.1347515, 0.1266924, 0.1173979, 0.1123737, 0.1051676, 0.09721886, 0.09580531, 0.09500235, 0.09705564, 0.0988253, 0.09536801, 0.0952532, 0.09327797, 0.09530485, 0.100182,
   0.1029224, 0.109291, 0.1147287, 0.1205616, 0.1213457, 0.1288222, 0.132762, 0.1382216, 0.1433659, 0.1466822, 0.1554169, 0.1659566, 0.1746884, 0.1856328, 0.1948952, 0.1990393,
   0.2092213, 0.2188045, 0.2346589, 0.243698, 0.2611927, 0.2742373, 0.2817135 };
   graph = new TGraph(40,Graph_fx18,Graph_fy18);
   graph->SetName("Graph");
   graph->SetTitle("VR");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph18 = new TH1F("Graph_Graph18","VR",100,101.1,147.9);
   Graph_Graph18->SetMinimum(0.07443442);
   Graph_Graph18->SetMaximum(0.3005571);
   Graph_Graph18->SetDirectory(nullptr);
   Graph_Graph18->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph18->SetLineColor(ci);
   Graph_Graph18->GetXaxis()->SetLabelFont(42);
   Graph_Graph18->GetXaxis()->SetTitleOffset(1);
   Graph_Graph18->GetXaxis()->SetTitleFont(42);
   Graph_Graph18->GetYaxis()->SetLabelFont(42);
   Graph_Graph18->GetYaxis()->SetTitleFont(42);
   Graph_Graph18->GetZaxis()->SetLabelFont(42);
   Graph_Graph18->GetZaxis()->SetTitleOffset(1);
   Graph_Graph18->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph18);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx19[40] = { 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
   122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
   138, 139, 140, 141, 142, 143, 144 };
   Double_t Graph_fy19[40] = { 0.02811756, 0.02700131, 0.02614728, 0.02499856, 0.02442757, 0.02370256, 0.02283745, 0.02157943, 0.02133728, 0.0216203, 0.02149287, 0.02050275, 0.02042996, 0.02019976, 0.02019976, 0.01987282, 0.02025861,
   0.02073184, 0.02120291, 0.02170892, 0.0224644, 0.02283604, 0.02381601, 0.02506132, 0.02563381, 0.02616427, 0.02706804, 0.02806989, 0.02943973, 0.02968264, 0.03057185, 0.03236844, 0.03499511,
   0.04086791, 0.04403051, 0.04636486, 0.04807228, 0.05089871, 0.05406388, 0.05914464 };
   graph = new TGraph(40,Graph_fx19,Graph_fy19);
   graph->SetName("Graph");
   graph->SetTitle("other");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph19 = new TH1F("Graph_Graph19","other",100,101.1,147.9);
   Graph_Graph19->SetMinimum(0.01594564);
   Graph_Graph19->SetMaximum(0.06307183);
   Graph_Graph19->SetDirectory(nullptr);
   Graph_Graph19->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph19->SetLineColor(ci);
   Graph_Graph19->GetXaxis()->SetLabelFont(42);
   Graph_Graph19->GetXaxis()->SetTitleOffset(1);
   Graph_Graph19->GetXaxis()->SetTitleFont(42);
   Graph_Graph19->GetYaxis()->SetLabelFont(42);
   Graph_Graph19->GetYaxis()->SetTitleFont(42);
   Graph_Graph19->GetZaxis()->SetLabelFont(42);
   Graph_Graph19->GetZaxis()->SetTitleOffset(1);
   Graph_Graph19->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph19);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx20[40] = { 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
   122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
   138, 139, 140, 141, 142, 143, 144 };
   Double_t Graph_fy20[40] = { 0.05284248, 0.050467, 0.04859352, 0.04715934, 0.04653744, 0.04603868, 0.04663413, 0.04957372, 0.05057633, 0.04976346, 0.04949389, 0.05136011, 0.05520076, 0.05892459, 0.06265116, 0.06504024, 0.06714813,
   0.07025073, 0.07362118, 0.07751463, 0.07956872, 0.08590974, 0.08926151, 0.09309536, 0.09777132, 0.1035441, 0.1101595, 0.1156536, 0.1215447, 0.1313995, 0.1387825, 0.1460604, 0.1553442,
   0.1599379, 0.1701803, 0.1804014, 0.1954807, 0.2083015, 0.2198556, 0.235296 };
   graph = new TGraph(40,Graph_fx20,Graph_fy20);
   graph->SetName("Graph");
   graph->SetTitle("CR");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph20 = new TH1F("Graph_Graph20","CR",100,101.1,147.9);
   Graph_Graph20->SetMinimum(0.02711295);
   Graph_Graph20->SetMaximum(0.2542217);
   Graph_Graph20->SetDirectory(nullptr);
   Graph_Graph20->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph20->SetLineColor(ci);
   Graph_Graph20->GetXaxis()->SetLabelFont(42);
   Graph_Graph20->GetXaxis()->SetTitleOffset(1);
   Graph_Graph20->GetXaxis()->SetTitleFont(42);
   Graph_Graph20->GetYaxis()->SetLabelFont(42);
   Graph_Graph20->GetYaxis()->SetTitleFont(42);
   Graph_Graph20->GetZaxis()->SetLabelFont(42);
   Graph_Graph20->GetZaxis()->SetTitleOffset(1);
   Graph_Graph20->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph20);
   
   multigraph->Add(graph,"");
   multigraph->Draw("AC");
   multigraph->GetXaxis()->SetLimits(103.05, 145.95);
   multigraph->GetXaxis()->SetTitle("x-center of ellipse [GeV]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("percentage of events");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.7,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","SR","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","VR","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","other","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","CR","lp");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.9341608,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Percentages of Events inside Regions");
   pt->Draw();
   OPT_SR_shift18->Modified();
   OPT_SR_shift18->cd();
   OPT_SR_shift18->SetSelected(OPT_SR_shift18);
}
