#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_pt_18()
{
//=========Macro generated from canvas: ROC_Z_pt_18/ROC_Z_pt_18
//=========  (Wed Mar  1 15:31:59 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_pt_18 = new TCanvas("ROC_Z_pt_18", "ROC_Z_pt_18",0,0,600,600);
   ROC_Z_pt_18->SetHighLightColor(2);
   ROC_Z_pt_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_pt_18->SetFillColor(0);
   ROC_Z_pt_18->SetBorderMode(0);
   ROC_Z_pt_18->SetBorderSize(2);
   ROC_Z_pt_18->SetGridx();
   ROC_Z_pt_18->SetGridy();
   ROC_Z_pt_18->SetLeftMargin(0.15709);
   ROC_Z_pt_18->SetRightMargin(0.1234783);
   ROC_Z_pt_18->SetBottomMargin(0.12);
   ROC_Z_pt_18->SetFrameBorderMode(0);
   ROC_Z_pt_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx231[41] = {
   0,
   2.775292e-07,
   5.630211e-07,
   9.835725e-07,
   1.486581e-06,
   1.90352e-06,
   2.844727e-06,
   3.778631e-06,
   5.20983e-06,
   6.966072e-06,
   9.291581e-06,
   1.233727e-05,
   1.732161e-05,
   2.288241e-05,
   2.967992e-05,
   3.887696e-05,
   5.18292e-05,
   6.906072e-05,
   9.353321e-05,
   0.000123777,
   0.0001674436,
   0.0002247869,
   0.0003067379,
   0.0004200169,
   0.0005779328,
   0.0008067255,
   0.001132821,
   0.001630849,
   0.002364627,
   0.003499178,
   0.005364977,
   0.008276239,
   0.0132436,
   0.0218377,
   0.03780597,
   0.07164552,
   0.1438055,
   0.2929607,
   0.6014237,
   0.8533712,
   1};
   Double_t Graph_fy231[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   2.843702e-05,
   2.843702e-05,
   0.0008752902,
   0.001235399,
   0.001235399,
   0.002191419,
   0.002339899,
   0.003501127,
   0.004783736,
   0.01101287,
   0.02218055,
   0.04993124,
   0.09058641,
   0.1651408,
   0.2834616,
   0.4779124,
   0.7407878,
   0.9223138,
   1};
   TGraph *graph = new TGraph(41,Graph_fx231,Graph_fy231);
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
   
   TH1F *Graph_Graph231 = new TH1F("Graph_Graph231","Tagging Only",100,0,1.1);
   Graph_Graph231->SetMinimum(0);
   Graph_Graph231->SetMaximum(1.1);
   Graph_Graph231->SetDirectory(0);
   Graph_Graph231->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph231->SetLineColor(ci);
   Graph_Graph231->GetXaxis()->SetLabelFont(42);
   Graph_Graph231->GetXaxis()->SetTitleOffset(1);
   Graph_Graph231->GetXaxis()->SetTitleFont(42);
   Graph_Graph231->GetYaxis()->SetLabelFont(42);
   Graph_Graph231->GetYaxis()->SetTitleFont(42);
   Graph_Graph231->GetZaxis()->SetLabelFont(42);
   Graph_Graph231->GetZaxis()->SetTitleOffset(1);
   Graph_Graph231->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph231);
   
   TLatex *   tex = new TLatex(0.289602,0.6462236,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(232);
      tex = new TLatex(0.6607765,0.8996919,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(233);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx234[41] = {
   0,
   3.964973e-07,
   7.305288e-07,
   1.181598e-06,
   1.51929e-06,
   2.216959e-06,
   3.000856e-06,
   4.442527e-06,
   5.942714e-06,
   7.809115e-06,
   9.85578e-06,
   1.309847e-05,
   1.814728e-05,
   2.542076e-05,
   3.304684e-05,
   4.265585e-05,
   5.529525e-05,
   7.284735e-05,
   9.419562e-05,
   0.0001213735,
   0.0001642303,
   0.0002193934,
   0.0003057611,
   0.0004125623,
   0.0005564692,
   0.0007970135,
   0.001076461,
   0.001509463,
   0.002201707,
   0.003262491,
   0.005010661,
   0.007943536,
   0.01281405,
   0.02093159,
   0.03638677,
   0.06747197,
   0.1348228,
   0.289602,
   0.6607765,
   0.9151594,
   1};
   Double_t Graph_fy234[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.003222648,
   0.003222648,
   0.003222648,
   0.003222648,
   0.004171233,
   0.005033615,
   0.008644319,
   0.01269787,
   0.02564867,
   0.04928972,
   0.09213929,
   0.1745181,
   0.3097189,
   0.5462236,
   0.8596919,
   0.9758052,
   1};
   graph = new TGraph(41,Graph_fx234,Graph_fy234);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph234 = new TH1F("Graph_Graph234","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph234->SetMinimum(0);
   Graph_Graph234->SetMaximum(1.1);
   Graph_Graph234->SetDirectory(0);
   Graph_Graph234->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph234->SetLineColor(ci);
   Graph_Graph234->GetXaxis()->SetLabelFont(42);
   Graph_Graph234->GetXaxis()->SetTitleOffset(1);
   Graph_Graph234->GetXaxis()->SetTitleFont(42);
   Graph_Graph234->GetYaxis()->SetLabelFont(42);
   Graph_Graph234->GetYaxis()->SetTitleFont(42);
   Graph_Graph234->GetZaxis()->SetLabelFont(42);
   Graph_Graph234->GetZaxis()->SetTitleOffset(1);
   Graph_Graph234->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph234);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx235[41] = {
   0,
   2.727201e-07,
   5.53265e-07,
   9.728268e-07,
   1.473582e-06,
   1.901314e-06,
   2.957195e-06,
   3.928153e-06,
   5.354494e-06,
   7.12252e-06,
   9.529625e-06,
   1.261311e-05,
   1.770325e-05,
   2.336781e-05,
   3.037545e-05,
   3.983731e-05,
   5.306422e-05,
   7.091615e-05,
   9.625808e-05,
   0.0001272377,
   0.0001722256,
   0.0002315259,
   0.0003156451,
   0.0004309057,
   0.0005930138,
   0.000826835,
   0.001160559,
   0.00167079,
   0.002417478,
   0.003566642,
   0.005457538,
   0.008409571,
   0.01344952,
   0.02212289,
   0.038231,
   0.07228613,
   0.1446279,
   0.2941987,
   0.6020523,
   0.8538519,
   1};
   Double_t Graph_fy235[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   2.669962e-05,
   5.4567e-05,
   5.4567e-05,
   0.001102193,
   0.001455088,
   0.00165786,
   0.002594729,
   0.002950463,
   0.004116483,
   0.005410985,
   0.01151505,
   0.02252043,
   0.05005379,
   0.09048116,
   0.1658053,
   0.2841105,
   0.4786869,
   0.74125,
   0.9226861,
   1};
   graph = new TGraph(41,Graph_fx235,Graph_fy235);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph235 = new TH1F("Graph_Graph235","Tagging Prioritized",100,0,1.1);
   Graph_Graph235->SetMinimum(0);
   Graph_Graph235->SetMaximum(1.1);
   Graph_Graph235->SetDirectory(0);
   Graph_Graph235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph235->SetLineColor(ci);
   Graph_Graph235->GetXaxis()->SetLabelFont(42);
   Graph_Graph235->GetXaxis()->SetTitleOffset(1);
   Graph_Graph235->GetXaxis()->SetTitleFont(42);
   Graph_Graph235->GetYaxis()->SetLabelFont(42);
   Graph_Graph235->GetYaxis()->SetTitleFont(42);
   Graph_Graph235->GetZaxis()->SetLabelFont(42);
   Graph_Graph235->GetZaxis()->SetTitleOffset(1);
   Graph_Graph235->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph235);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_pt_18->Modified();
   ROC_Z_pt_18->cd();
   ROC_Z_pt_18->SetSelected(ROC_Z_pt_18);
}
