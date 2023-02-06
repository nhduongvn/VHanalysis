#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_17()
{
//=========Macro generated from canvas: ROC_Z_dR_17/ROC_Z_dR_17
//=========  (Tue Jan 24 15:01:27 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_17 = new TCanvas("ROC_Z_dR_17", "ROC_Z_dR_17",0,0,600,600);
   ROC_Z_dR_17->SetHighLightColor(2);
   ROC_Z_dR_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_dR_17->SetFillColor(0);
   ROC_Z_dR_17->SetBorderMode(0);
   ROC_Z_dR_17->SetBorderSize(2);
   ROC_Z_dR_17->SetGridx();
   ROC_Z_dR_17->SetGridy();
   ROC_Z_dR_17->SetLeftMargin(0.15709);
   ROC_Z_dR_17->SetRightMargin(0.1234783);
   ROC_Z_dR_17->SetBottomMargin(0.12);
   ROC_Z_dR_17->SetFrameBorderMode(0);
   ROC_Z_dR_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx190[30] = {
   0,
   0,
   2.716768e-05,
   0.05962005,
   0.1351277,
   0.1940947,
   0.2479483,
   0.2976492,
   0.3496959,
   0.397141,
   0.4485449,
   0.4999516,
   0.5546475,
   0.6169786,
   0.6839559,
   0.7578578,
   0.8406742,
   0.8940549,
   0.926271,
   0.9495277,
   0.9664357,
   0.9794853,
   0.9871557,
   0.9937563,
   0.996458,
   0.9981301,
   0.9991762,
   0.9996689,
   0.9999998,
   1};
   Double_t Graph_fy190[30] = {
   0,
   0,
   0,
   0.03097228,
   0.08873427,
   0.1788678,
   0.2826942,
   0.3755598,
   0.4590426,
   0.5328124,
   0.5978481,
   0.6613126,
   0.716991,
   0.7744343,
   0.834818,
   0.8920341,
   0.9503629,
   0.9741589,
   0.985637,
   0.9907289,
   0.9946958,
   0.9962427,
   0.9978237,
   0.9989239,
   0.9995161,
   0.9999787,
   0.9999787,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx190,Graph_fy190);
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
   
   TH1F *Graph_Graph190 = new TH1F("Graph_Graph190","Tagging Only",100,0,1.1);
   Graph_Graph190->SetMinimum(0);
   Graph_Graph190->SetMaximum(1.1);
   Graph_Graph190->SetDirectory(0);
   Graph_Graph190->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph190->SetLineColor(ci);
   Graph_Graph190->GetXaxis()->SetLabelFont(42);
   Graph_Graph190->GetXaxis()->SetTitleOffset(1);
   Graph_Graph190->GetXaxis()->SetTitleFont(42);
   Graph_Graph190->GetYaxis()->SetLabelFont(42);
   Graph_Graph190->GetYaxis()->SetTitleFont(42);
   Graph_Graph190->GetZaxis()->SetLabelFont(42);
   Graph_Graph190->GetZaxis()->SetTitleOffset(1);
   Graph_Graph190->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph190);
   
   TLatex *   tex = new TLatex(0.05962005,0.09097228,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(191);
      tex = new TLatex(0.1351277,0.1487343,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(192);
      tex = new TLatex(0.1940947,0.2388678,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(193);
      tex = new TLatex(0.2479483,0.3426942,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(194);
      tex = new TLatex(0.2976492,0.4355598,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(195);
      tex = new TLatex(0.3496959,0.5190426,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(196);
      tex = new TLatex(0.397141,0.5928124,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(197);
      tex = new TLatex(0.4485449,0.6578481,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(198);
      tex = new TLatex(0.4999516,0.7213126,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(199);
      tex = new TLatex(0.5546475,0.776991,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(200);
      tex = new TLatex(0.6169786,0.8344343,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(201);
      tex = new TLatex(0.6839559,0.894818,"2.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(202);
      tex = new TLatex(0.7578578,0.9520341,"3.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(203);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx204[30] = {
   0,
   0,
   1.082018e-05,
   0.08616166,
   0.2084576,
   0.2996315,
   0.3723279,
   0.4454223,
   0.5278753,
   0.5865917,
   0.6508428,
   0.7116619,
   0.7678222,
   0.8103015,
   0.8676944,
   0.9087305,
   0.9436288,
   0.9685024,
   0.9837435,
   0.9945154,
   0.9972002,
   0.9986459,
   0.9995702,
   0.9998323,
   0.999952,
   0.9999932,
   0.9999982,
   1,
   1,
   1};
   Double_t Graph_fy204[30] = {
   0,
   0,
   0,
   0.0395571,
   0.1071507,
   0.2433116,
   0.4111855,
   0.5563586,
   0.6724121,
   0.7644103,
   0.8385513,
   0.8889509,
   0.9211105,
   0.941327,
   0.961738,
   0.976867,
   0.9898388,
   0.9953809,
   0.9981137,
   0.998495,
   0.9991838,
   0.9999069,
   0.9999995,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx204,Graph_fy204);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph204 = new TH1F("Graph_Graph204","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph204->SetMinimum(0);
   Graph_Graph204->SetMaximum(1.1);
   Graph_Graph204->SetDirectory(0);
   Graph_Graph204->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph204->SetLineColor(ci);
   Graph_Graph204->GetXaxis()->SetLabelFont(42);
   Graph_Graph204->GetXaxis()->SetTitleOffset(1);
   Graph_Graph204->GetXaxis()->SetTitleFont(42);
   Graph_Graph204->GetYaxis()->SetLabelFont(42);
   Graph_Graph204->GetYaxis()->SetTitleFont(42);
   Graph_Graph204->GetZaxis()->SetLabelFont(42);
   Graph_Graph204->GetZaxis()->SetTitleOffset(1);
   Graph_Graph204->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph204);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx205[30] = {
   0,
   0,
   3.276313e-05,
   0.05917159,
   0.1343349,
   0.1926721,
   0.2464861,
   0.2964847,
   0.348091,
   0.3968023,
   0.4482364,
   0.4993134,
   0.553756,
   0.6160712,
   0.6829201,
   0.7575016,
   0.840474,
   0.8942343,
   0.9265989,
   0.949666,
   0.9664172,
   0.9793294,
   0.9869515,
   0.9935422,
   0.9964526,
   0.9981249,
   0.999175,
   0.9996553,
   0.9999998,
   1};
   Double_t Graph_fy205[30] = {
   0,
   0,
   0,
   0.03300856,
   0.09298301,
   0.1817316,
   0.2837083,
   0.3741384,
   0.4555219,
   0.5292885,
   0.5932521,
   0.6558379,
   0.7123084,
   0.7695547,
   0.831585,
   0.890346,
   0.9491255,
   0.9742976,
   0.9856217,
   0.9909793,
   0.9948162,
   0.9965486,
   0.9979767,
   0.999022,
   0.999551,
   0.9999651,
   0.9999817,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx205,Graph_fy205);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph205 = new TH1F("Graph_Graph205","Tagging Prioritized",100,0,1.1);
   Graph_Graph205->SetMinimum(0);
   Graph_Graph205->SetMaximum(1.1);
   Graph_Graph205->SetDirectory(0);
   Graph_Graph205->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph205->SetLineColor(ci);
   Graph_Graph205->GetXaxis()->SetLabelFont(42);
   Graph_Graph205->GetXaxis()->SetTitleOffset(1);
   Graph_Graph205->GetXaxis()->SetTitleFont(42);
   Graph_Graph205->GetYaxis()->SetLabelFont(42);
   Graph_Graph205->GetYaxis()->SetTitleFont(42);
   Graph_Graph205->GetZaxis()->SetLabelFont(42);
   Graph_Graph205->GetZaxis()->SetTitleOffset(1);
   Graph_Graph205->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph205);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.05, 1.05);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_dR_17->Modified();
   ROC_Z_dR_17->cd();
   ROC_Z_dR_17->SetSelected(ROC_Z_dR_17);
}
