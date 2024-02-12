#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ratio_trigger_2017_QuadJet_17_2b2c()
{
//=========Macro generated from canvas: ratio_trigger_2017_QuadJet_17_2b2c/ratio_trigger_2017_QuadJet_17_2b2c
//=========  (Mon Feb 12 13:48:53 2024) by ROOT version 6.28/10
   TCanvas *ratio_trigger_2017_QuadJet_17_2b2c = new TCanvas("ratio_trigger_2017_QuadJet_17_2b2c", "ratio_trigger_2017_QuadJet_17_2b2c",0,0,600,600);
   gStyle->SetOptStat(0);
   ratio_trigger_2017_QuadJet_17_2b2c->SetHighLightColor(2);
   ratio_trigger_2017_QuadJet_17_2b2c->Range(0,0,1,1);
   ratio_trigger_2017_QuadJet_17_2b2c->SetFillColor(0);
   ratio_trigger_2017_QuadJet_17_2b2c->SetBorderMode(0);
   ratio_trigger_2017_QuadJet_17_2b2c->SetBorderSize(2);
   ratio_trigger_2017_QuadJet_17_2b2c->SetLeftMargin(0.15);
   ratio_trigger_2017_QuadJet_17_2b2c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-548.077,-0.3880514,3394.231,1.170993);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   Double_t xAxis83[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__83 = new TH1D("probeNew__83","",13, xAxis83);
   probeNew__83->SetBinContent(4,0.04360136);
   probeNew__83->SetBinContent(5,0.1336516);
   probeNew__83->SetBinContent(6,0.2146368);
   probeNew__83->SetBinContent(7,0.2229124);
   probeNew__83->SetBinContent(8,0.2683983);
   probeNew__83->SetBinContent(9,0.2783883);
   probeNew__83->SetBinContent(10,0.2716593);
   probeNew__83->SetBinContent(11,0.3008378);
   probeNew__83->SetBinContent(12,0.3451537);
   probeNew__83->SetBinContent(13,0.3556338);
   probeNew__83->SetBinContent(14,0.25);
   probeNew__83->SetEntries(2.434873);
   probeNew__83->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__83->GetXaxis()->SetRange(0,14);
   probeNew__83->GetXaxis()->SetLabelFont(42);
   probeNew__83->GetXaxis()->SetTitleOffset(1);
   probeNew__83->GetXaxis()->SetTitleFont(42);
   probeNew__83->GetYaxis()->SetTitle("Data / MC");
   probeNew__83->GetYaxis()->SetLabelFont(42);
   probeNew__83->GetYaxis()->SetTitleFont(42);
   probeNew__83->GetZaxis()->SetLabelFont(42);
   probeNew__83->GetZaxis()->SetTitleOffset(1);
   probeNew__83->GetZaxis()->SetTitleFont(42);
   probeNew__83->Draw("Aape");
   Double_t xAxis84[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__84 = new TH1D("probeNew__84","",13, xAxis84);
   probeNew__84->SetBinContent(2,0.001293331);
   probeNew__84->SetBinContent(3,0.01484336);
   probeNew__84->SetBinContent(4,0.09903695);
   probeNew__84->SetBinContent(5,0.2352532);
   probeNew__84->SetBinContent(6,0.2939856);
   probeNew__84->SetBinContent(7,0.310375);
   probeNew__84->SetBinContent(8,0.3187108);
   probeNew__84->SetBinContent(9,0.3212715);
   probeNew__84->SetBinContent(10,0.3327544);
   probeNew__84->SetBinContent(11,0.3402252);
   probeNew__84->SetBinContent(12,0.356078);
   probeNew__84->SetBinContent(13,0.3693212);
   probeNew__84->SetBinContent(14,0.3705726);
   probeNew__84->SetBinError(2,0.001294668);
   probeNew__84->SetBinError(3,0.0006659413);
   probeNew__84->SetBinError(4,0.001091544);
   probeNew__84->SetBinError(5,0.00164527);
   probeNew__84->SetBinError(6,0.002010959);
   probeNew__84->SetBinError(7,0.002310215);
   probeNew__84->SetBinError(8,0.002692165);
   probeNew__84->SetBinError(9,0.003113791);
   probeNew__84->SetBinError(10,0.003692352);
   probeNew__84->SetBinError(11,0.002597281);
   probeNew__84->SetBinError(12,0.004614521);
   probeNew__84->SetBinError(13,0.005876143);
   probeNew__84->SetBinError(14,0.04311302);
   probeNew__84->SetEntries(82536.84);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   probeNew__84->SetLineColor(ci);
   probeNew__84->GetXaxis()->SetRange(1,2000);
   probeNew__84->GetXaxis()->SetLabelFont(42);
   probeNew__84->GetXaxis()->SetTitleOffset(1);
   probeNew__84->GetXaxis()->SetTitleFont(42);
   probeNew__84->GetYaxis()->SetLabelFont(42);
   probeNew__84->GetYaxis()->SetTitleFont(42);
   probeNew__84->GetZaxis()->SetLabelFont(42);
   probeNew__84->GetZaxis()->SetTitleOffset(1);
   probeNew__84->GetZaxis()->SetTitleFont(42);
   probeNew__84->Draw("Aapesame");
   upper_pad->Modified();
   ratio_trigger_2017_QuadJet_17_2b2c->cd();
  
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
   
   Double_t Graph_fx3014[12] = { 150, 225, 275, 325, 375, 425, 475, 525, 575, 700, 900, 1500 };
   Double_t Graph_fy3014[12] = { 0, 0, 0.4402534, 0.568118, 0.7300929, 0.7182032, 0.8421374, 0.8665202, 0.8163959, 0.8842313, 0.9693205, 0.9629391 };
   Double_t Graph_felx3014[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fely3014[12] = { 0, 0, 0.4402534, 0.5681152, 0.7296706, 0.7176502, 0.8398862, 0.8636446, 0.8140496, 0.8797165, 0.9595764, 0.9518701 };
   Double_t Graph_fehx3014[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fehy3014[12] = { 4110.331, 124.2601, 18.84019, 8.139089, 6.656301, 6.318432, 6.224932, 6.190882, 5.967427, 5.878206, 5.677531, 5.488089 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,Graph_fx3014,Graph_fy3014,Graph_felx3014,Graph_fehx3014,Graph_fely3014,Graph_fehy3014);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-153.8462,2153.846);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(nullptr);
   Graph_Graph3014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3014->SetLineColor(ci);
   Graph_Graph3014->GetXaxis()->SetRange(1,100);
   Graph_Graph3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3014);
   
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
   ratio_trigger_2017_QuadJet_17_2b2c->cd();
  
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,-0.3100992,1.015088,510,"S");
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
   ratio_trigger_2017_QuadJet_17_2b2c->cd();
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
   ratio_trigger_2017_QuadJet_17_2b2c->Modified();
   ratio_trigger_2017_QuadJet_17_2b2c->cd();
   ratio_trigger_2017_QuadJet_17_2b2c->SetSelected(ratio_trigger_2017_QuadJet_17_2b2c);
}
