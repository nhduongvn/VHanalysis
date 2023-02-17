#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_17()
{
//=========Macro generated from canvas: ROC_Z_dR_17/ROC_Z_dR_17
//=========  (Thu Feb 16 10:45:49 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx123[30] = {
   0,
   0,
   0.0001008918,
   0.07810239,
   0.1611882,
   0.2206879,
   0.2812652,
   0.3398272,
   0.3869361,
   0.430631,
   0.4766568,
   0.5261062,
   0.5787058,
   0.6389499,
   0.7104345,
   0.7906903,
   0.8779026,
   0.9222086,
   0.9480755,
   0.9690002,
   0.9803423,
   0.9877954,
   0.9924048,
   0.9961719,
   0.9987986,
   0.9994259,
   0.9996357,
   0.9999373,
   0.9999988,
   1};
   Double_t Graph_fy123[30] = {
   0,
   0,
   1.786156e-05,
   0.07921958,
   0.2172346,
   0.3632602,
   0.4924561,
   0.5741933,
   0.6282233,
   0.6707018,
   0.7062887,
   0.738085,
   0.7761775,
   0.8135401,
   0.8573429,
   0.9100332,
   0.9605461,
   0.980907,
   0.9893236,
   0.9942449,
   0.9971763,
   0.9984227,
   0.9996061,
   0.9998948,
   0.9999583,
   0.9999785,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx123,Graph_fy123);
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
   
   TH1F *Graph_Graph123 = new TH1F("Graph_Graph123","Tagging Only",100,0,1.1);
   Graph_Graph123->SetMinimum(0);
   Graph_Graph123->SetMaximum(1.1);
   Graph_Graph123->SetDirectory(0);
   Graph_Graph123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph123->SetLineColor(ci);
   Graph_Graph123->GetXaxis()->SetLabelFont(42);
   Graph_Graph123->GetXaxis()->SetTitleOffset(1);
   Graph_Graph123->GetXaxis()->SetTitleFont(42);
   Graph_Graph123->GetYaxis()->SetLabelFont(42);
   Graph_Graph123->GetYaxis()->SetTitleFont(42);
   Graph_Graph123->GetZaxis()->SetLabelFont(42);
   Graph_Graph123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph123->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph123);
   
   TLatex *   tex = new TLatex(0.2397488,0.3943873,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(124);
      tex = new TLatex(0.3250716,0.6095401,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(125);
      tex = new TLatex(0.4372098,0.7876308,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(126);
      tex = new TLatex(0.5278345,0.8883093,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(127);
      tex = new TLatex(0.5888658,0.8986407,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(128);
      tex = new TLatex(0.6468728,0.9371353,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(129);
      tex = new TLatex(0.6941989,0.9634702,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(130);
      tex = new TLatex(0.7318518,0.9824246,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(131);
      tex = new TLatex(0.7768957,0.9973348,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(132);
      tex = new TLatex(0.8156986,1.010801,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(133);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx134[30] = {
   0,
   0,
   0.0002734826,
   0.1198072,
   0.2397488,
   0.3250716,
   0.4372098,
   0.5278345,
   0.5888658,
   0.6468728,
   0.6941989,
   0.7318518,
   0.7768957,
   0.8156986,
   0.8726169,
   0.9077597,
   0.9390914,
   0.9720151,
   0.9842541,
   0.9893993,
   0.9929519,
   0.9985784,
   0.9995408,
   0.9999138,
   0.9999728,
   0.9999903,
   0.9999941,
   1,
   1,
   1};
   Double_t Graph_fy134[30] = {
   0,
   0,
   0,
   0.1119028,
   0.2943873,
   0.5095401,
   0.6876308,
   0.7883093,
   0.8586407,
   0.8971353,
   0.9234702,
   0.9424246,
   0.9573348,
   0.9708007,
   0.9809839,
   0.9884409,
   0.9944204,
   0.9964594,
   0.9985186,
   0.9995784,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx134,Graph_fy134);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph134 = new TH1F("Graph_Graph134","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph134->SetMinimum(0);
   Graph_Graph134->SetMaximum(1.1);
   Graph_Graph134->SetDirectory(0);
   Graph_Graph134->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph134->SetLineColor(ci);
   Graph_Graph134->GetXaxis()->SetLabelFont(42);
   Graph_Graph134->GetXaxis()->SetTitleOffset(1);
   Graph_Graph134->GetXaxis()->SetTitleFont(42);
   Graph_Graph134->GetYaxis()->SetLabelFont(42);
   Graph_Graph134->GetYaxis()->SetTitleFont(42);
   Graph_Graph134->GetZaxis()->SetLabelFont(42);
   Graph_Graph134->GetZaxis()->SetTitleOffset(1);
   Graph_Graph134->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph134);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx135[30] = {
   0,
   0,
   0.0001352381,
   0.07813554,
   0.1612199,
   0.2205724,
   0.2808649,
   0.3393621,
   0.3866083,
   0.4306294,
   0.476651,
   0.5263973,
   0.5790496,
   0.6396201,
   0.7111251,
   0.7912477,
   0.8778881,
   0.9223195,
   0.9481521,
   0.9689786,
   0.9802372,
   0.9877673,
   0.992445,
   0.9961198,
   0.9988195,
   0.999437,
   0.9996418,
   0.9999383,
   0.9999989,
   1};
   Double_t Graph_fy135[30] = {
   0,
   0,
   1.74948e-05,
   0.08019993,
   0.2170233,
   0.3635926,
   0.4933877,
   0.5758502,
   0.6307021,
   0.6727945,
   0.7079744,
   0.7392585,
   0.7774625,
   0.8147994,
   0.8579141,
   0.9109678,
   0.9607167,
   0.9810177,
   0.9891124,
   0.9941171,
   0.997083,
   0.9983117,
   0.9994678,
   0.999897,
   0.9999591,
   0.9999789,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx135,Graph_fy135);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph135 = new TH1F("Graph_Graph135","Tagging Prioritized",100,0,1.1);
   Graph_Graph135->SetMinimum(0);
   Graph_Graph135->SetMaximum(1.1);
   Graph_Graph135->SetDirectory(0);
   Graph_Graph135->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph135->SetLineColor(ci);
   Graph_Graph135->GetXaxis()->SetLabelFont(42);
   Graph_Graph135->GetXaxis()->SetTitleOffset(1);
   Graph_Graph135->GetXaxis()->SetTitleFont(42);
   Graph_Graph135->GetYaxis()->SetLabelFont(42);
   Graph_Graph135->GetYaxis()->SetTitleFont(42);
   Graph_Graph135->GetZaxis()->SetLabelFont(42);
   Graph_Graph135->GetZaxis()->SetTitleOffset(1);
   Graph_Graph135->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph135);
   
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
