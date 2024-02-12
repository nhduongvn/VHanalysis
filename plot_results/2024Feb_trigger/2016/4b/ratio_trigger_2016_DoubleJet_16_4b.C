#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ratio_trigger_2016_DoubleJet_16_4b()
{
//=========Macro generated from canvas: ratio_trigger_2016_DoubleJet_16_4b/ratio_trigger_2016_DoubleJet_16_4b
//=========  (Mon Feb 12 13:48:52 2024) by ROOT version 6.28/10
   TCanvas *ratio_trigger_2016_DoubleJet_16_4b = new TCanvas("ratio_trigger_2016_DoubleJet_16_4b", "ratio_trigger_2016_DoubleJet_16_4b",0,0,600,600);
   gStyle->SetOptStat(0);
   ratio_trigger_2016_DoubleJet_16_4b->SetHighLightColor(2);
   ratio_trigger_2016_DoubleJet_16_4b->Range(0,0,1,1);
   ratio_trigger_2016_DoubleJet_16_4b->SetFillColor(0);
   ratio_trigger_2016_DoubleJet_16_4b->SetBorderMode(0);
   ratio_trigger_2016_DoubleJet_16_4b->SetBorderSize(2);
   ratio_trigger_2016_DoubleJet_16_4b->SetLeftMargin(0.15);
   ratio_trigger_2016_DoubleJet_16_4b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-548.077,-0.4979996,3394.231,2.305086);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   Double_t xAxis11[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__11 = new TH1D("probeNew__11","",13, xAxis11);
   probeNew__11->SetBinContent(4,0.1428571);
   probeNew__11->SetBinContent(5,0.2647059);
   probeNew__11->SetBinContent(6,0.4814815);
   probeNew__11->SetBinContent(7,0.8275862);
   probeNew__11->SetBinContent(8,0.9047619);
   probeNew__11->SetBinContent(9,0.9166667);
   probeNew__11->SetBinContent(10,0.9411765);
   probeNew__11->SetBinContent(11,0.8780488);
   probeNew__11->SetBinContent(12,0.8571429);
   probeNew__11->SetBinContent(13,0.7777778);
   probeNew__11->SetEntries(6.992205);
   probeNew__11->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__11->GetXaxis()->SetRange(0,14);
   probeNew__11->GetXaxis()->SetLabelFont(42);
   probeNew__11->GetXaxis()->SetTitleOffset(1);
   probeNew__11->GetXaxis()->SetTitleFont(42);
   probeNew__11->GetYaxis()->SetTitle("Data / MC");
   probeNew__11->GetYaxis()->SetLabelFont(42);
   probeNew__11->GetYaxis()->SetTitleFont(42);
   probeNew__11->GetZaxis()->SetLabelFont(42);
   probeNew__11->GetZaxis()->SetTitleOffset(1);
   probeNew__11->GetZaxis()->SetTitleFont(42);
   probeNew__11->Draw("Aape");
   Double_t xAxis12[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__12 = new TH1D("probeNew__12","",13, xAxis12);
   probeNew__12->SetBinContent(3,0.004700399);
   probeNew__12->SetBinContent(4,0.05089323);
   probeNew__12->SetBinContent(5,0.2845166);
   probeNew__12->SetBinContent(6,0.6291139);
   probeNew__12->SetBinContent(7,0.8142642);
   probeNew__12->SetBinContent(8,0.8707112);
   probeNew__12->SetBinContent(9,0.8920796);
   probeNew__12->SetBinContent(10,0.9055507);
   probeNew__12->SetBinContent(11,0.931735);
   probeNew__12->SetBinContent(12,0.9300877);
   probeNew__12->SetBinContent(13,0.9159099);
   probeNew__12->SetBinContent(14,0.9001527);
   probeNew__12->SetBinError(3,0.002815981);
   probeNew__12->SetBinError(4,0.005690443);
   probeNew__12->SetBinError(5,0.01271605);
   probeNew__12->SetBinError(6,0.0213505);
   probeNew__12->SetBinError(7,0.02694551);
   probeNew__12->SetBinError(8,0.0311121);
   probeNew__12->SetBinError(9,0.03602972);
   probeNew__12->SetBinError(10,0.04014334);
   probeNew__12->SetBinError(11,0.02686229);
   probeNew__12->SetBinError(12,0.04234657);
   probeNew__12->SetBinError(13,0.05079341);
   probeNew__12->SetBinError(14,0.3236429);
   probeNew__12->SetEntries(5046.843);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   probeNew__12->SetLineColor(ci);
   probeNew__12->GetXaxis()->SetRange(1,2000);
   probeNew__12->GetXaxis()->SetLabelFont(42);
   probeNew__12->GetXaxis()->SetTitleOffset(1);
   probeNew__12->GetXaxis()->SetTitleFont(42);
   probeNew__12->GetYaxis()->SetLabelFont(42);
   probeNew__12->GetYaxis()->SetTitleFont(42);
   probeNew__12->GetZaxis()->SetLabelFont(42);
   probeNew__12->GetZaxis()->SetTitleOffset(1);
   probeNew__12->GetZaxis()->SetTitleFont(42);
   probeNew__12->Draw("Aapesame");
   upper_pad->Modified();
   ratio_trigger_2016_DoubleJet_16_4b->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad = new TPad("lower_pad", "",0.0025,0.0025,0.9975,0.3);
   lower_pad->Draw();
   lower_pad->cd();
   lower_pad->Range(-442.3077,-0.923077,2442.308,2.153846);
   lower_pad->SetFillColor(0);
   lower_pad->SetBorderMode(0);
   lower_pad->SetBorderSize(2);
   lower_pad->SetTopMargin(0.05);
   lower_pad->SetBottomMargin(0.3);
   lower_pad->SetFrameBorderMode(0);
   lower_pad->SetFrameBorderMode(0);
   
   Double_t Graph_fx3002[11] = { 225, 275, 325, 375, 425, 475, 525, 575, 700, 900, 1500 };
   Double_t Graph_fy3002[11] = { 0, 2.806997, 0.9303708, 0.7653327, 1.016361, 1.039107, 1.027562, 1.039342, 0.9423804, 0.9215721, 0.8491859 };
   Double_t Graph_felx3002[11] = { 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fely3002[11] = { 0, 2.806966, 0.9280875, 0.7380476, 0.886153, 0.8848216, 0.8718765, 0.8753993, 0.8089778, 0.7963404, 0.7520212 };
   Double_t Graph_fehx3002[11] = { 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fehy3002[11] = { 554.9838, 38.20672, 6.981708, 3.31872, 2.745858, 2.603959, 2.548281, 2.522356, 2.420363, 2.420353, 2.42617 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_fx3002,Graph_fy3002,Graph_felx3002,Graph_fehx3002,Graph_fely3002,Graph_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-153.8462,2153.846);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(nullptr);
   Graph_Graph3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3002->SetLineColor(ci);
   Graph_Graph3002->GetXaxis()->SetRange(1,100);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-153.8462,0.7,2153.846,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-153.8462,1,2153.846,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-153.8462,1.3,2153.846,1.3);
   line->SetLineStyle(2);
   line->Draw();
   lower_pad->Modified();
   ratio_trigger_2016_DoubleJet_16_4b->cd();
  
// ------------>Primitives in pad: top_pad
   TPad *top_pad = new TPad("top_pad", "",0.0025,0.0025,0.9975,0.9975);
   top_pad->Draw();
   top_pad->cd();
   top_pad->Range(0,0,1,1);
   top_pad->SetFillColor(0);
   top_pad->SetFillStyle(4000);
   top_pad->SetBorderMode(0);
   top_pad->SetBorderSize(2);
   top_pad->SetFrameBorderMode(0);
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-153.8462,2153.846,510,"+U");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,-0.3578453,2.024777,510,"S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Data / MC");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-153.8462,2153.846,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("H_{T} [GeV]");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,2,510,"-S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.09153846);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   top_pad->Modified();
   ratio_trigger_2016_DoubleJet_16_4b->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   
   TLegend *leg = new TLegend(0.8,0.8,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("probeNew","SingleMuon (Data)","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("probeNew","t#bar{t} (MC)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   ratio_trigger_2016_DoubleJet_16_4b->Modified();
   ratio_trigger_2016_DoubleJet_16_4b->cd();
   ratio_trigger_2016_DoubleJet_16_4b->SetSelected(ratio_trigger_2016_DoubleJet_16_4b);
}
