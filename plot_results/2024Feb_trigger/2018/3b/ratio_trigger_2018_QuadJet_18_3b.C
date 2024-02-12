#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ratio_trigger_2018_QuadJet_18_3b()
{
//=========Macro generated from canvas: ratio_trigger_2018_QuadJet_18_3b/ratio_trigger_2018_QuadJet_18_3b
//=========  (Mon Feb 12 13:48:52 2024) by ROOT version 6.28/10
   TCanvas *ratio_trigger_2018_QuadJet_18_3b = new TCanvas("ratio_trigger_2018_QuadJet_18_3b", "ratio_trigger_2018_QuadJet_18_3b",0,0,600,600);
   gStyle->SetOptStat(0);
   ratio_trigger_2018_QuadJet_18_3b->SetHighLightColor(2);
   ratio_trigger_2018_QuadJet_18_3b->Range(0,0,1,1);
   ratio_trigger_2018_QuadJet_18_3b->SetFillColor(0);
   ratio_trigger_2018_QuadJet_18_3b->SetBorderMode(0);
   ratio_trigger_2018_QuadJet_18_3b->SetBorderSize(2);
   ratio_trigger_2018_QuadJet_18_3b->SetLeftMargin(0.15);
   ratio_trigger_2018_QuadJet_18_3b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-548.077,-0.434008,3394.231,1.675501);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   Double_t xAxis59[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__59 = new TH1D("probeNew__59","",13, xAxis59);
   probeNew__59->SetBinContent(3,0.003278689);
   probeNew__59->SetBinContent(4,0.03196046);
   probeNew__59->SetBinContent(5,0.1742287);
   probeNew__59->SetBinContent(6,0.4057143);
   probeNew__59->SetBinContent(7,0.5280414);
   probeNew__59->SetBinContent(8,0.5578465);
   probeNew__59->SetBinContent(9,0.5643411);
   probeNew__59->SetBinContent(10,0.576);
   probeNew__59->SetBinContent(11,0.5846403);
   probeNew__59->SetBinContent(12,0.5636672);
   probeNew__59->SetBinContent(13,0.6027778);
   probeNew__59->SetBinContent(14,0.2);
   probeNew__59->SetEntries(4.592496);
   probeNew__59->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__59->GetXaxis()->SetRange(0,14);
   probeNew__59->GetXaxis()->SetLabelFont(42);
   probeNew__59->GetXaxis()->SetTitleOffset(1);
   probeNew__59->GetXaxis()->SetTitleFont(42);
   probeNew__59->GetYaxis()->SetTitle("Data / MC");
   probeNew__59->GetYaxis()->SetLabelFont(42);
   probeNew__59->GetYaxis()->SetTitleFont(42);
   probeNew__59->GetZaxis()->SetLabelFont(42);
   probeNew__59->GetZaxis()->SetTitleOffset(1);
   probeNew__59->GetZaxis()->SetTitleFont(42);
   probeNew__59->Draw("Aape");
   Double_t xAxis60[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__60 = new TH1D("probeNew__60","",13, xAxis60);
   probeNew__60->SetBinContent(2,0.004764479);
   probeNew__60->SetBinContent(3,0.01303554);
   probeNew__60->SetBinContent(4,0.0936563);
   probeNew__60->SetBinContent(5,0.3095794);
   probeNew__60->SetBinContent(6,0.4991783);
   probeNew__60->SetBinContent(7,0.5544191);
   probeNew__60->SetBinContent(8,0.564996);
   probeNew__60->SetBinContent(9,0.5744237);
   probeNew__60->SetBinContent(10,0.5784351);
   probeNew__60->SetBinContent(11,0.583248);
   probeNew__60->SetBinContent(12,0.5811618);
   probeNew__60->SetBinContent(13,0.5750056);
   probeNew__60->SetBinContent(14,0.4839676);
   probeNew__60->SetBinError(2,0.002788144);
   probeNew__60->SetBinError(3,0.0006305461);
   probeNew__60->SetBinError(4,0.001088499);
   probeNew__60->SetBinError(5,0.00213603);
   probeNew__60->SetBinError(6,0.002965268);
   probeNew__60->SetBinError(7,0.003498545);
   probeNew__60->SetBinError(8,0.004233482);
   probeNew__60->SetBinError(9,0.004835182);
   probeNew__60->SetBinError(10,0.006001162);
   probeNew__60->SetBinError(11,0.00418967);
   probeNew__60->SetBinError(12,0.007753023);
   probeNew__60->SetBinError(13,0.009204215);
   probeNew__60->SetBinError(14,0.05592899);
   probeNew__60->SetEntries(88563.4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   probeNew__60->SetLineColor(ci);
   probeNew__60->GetXaxis()->SetRange(1,2000);
   probeNew__60->GetXaxis()->SetLabelFont(42);
   probeNew__60->GetXaxis()->SetTitleOffset(1);
   probeNew__60->GetXaxis()->SetTitleFont(42);
   probeNew__60->GetYaxis()->SetLabelFont(42);
   probeNew__60->GetYaxis()->SetTitleFont(42);
   probeNew__60->GetZaxis()->SetLabelFont(42);
   probeNew__60->GetZaxis()->SetTitleOffset(1);
   probeNew__60->GetZaxis()->SetTitleFont(42);
   probeNew__60->Draw("Aapesame");
   upper_pad->Modified();
   ratio_trigger_2018_QuadJet_18_3b->cd();
  
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
   
   Double_t Graph_fx3010[12] = { 150, 225, 275, 325, 375, 425, 475, 525, 575, 700, 900, 1500 };
   Double_t Graph_fy3010[12] = { 0, 0.2515192, 0.3412526, 0.5627915, 0.8127642, 0.9524228, 0.987346, 0.9824475, 0.9957902, 1.002387, 0.9698972, 1.048299 };
   Double_t Graph_felx3010[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fely3010[12] = { 0, 0.2515192, 0.3412526, 0.5627382, 0.7967282, 0.9076712, 0.9334026, 0.9271026, 0.936632, 0.9405303, 0.9154353, 0.9785139 };
   Double_t Graph_fehx3010[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fehy3010[12] = { 538.4129, 141.6805, 19.85323, 6.253845, 4.106743, 3.798189, 3.750517, 3.694006, 3.677403, 3.653248, 3.651192, 3.720361 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,Graph_fx3010,Graph_fy3010,Graph_felx3010,Graph_fehx3010,Graph_fely3010,Graph_fehy3010);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-153.8462,2153.846);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(nullptr);
   Graph_Graph3010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3010->SetLineColor(ci);
   Graph_Graph3010->GetXaxis()->SetRange(1,100);
   Graph_Graph3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3010);
   
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
   ratio_trigger_2018_QuadJet_18_3b->cd();
  
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,-0.3285325,1.46455,510,"S");
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
   ratio_trigger_2018_QuadJet_18_3b->cd();
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
   ratio_trigger_2018_QuadJet_18_3b->Modified();
   ratio_trigger_2018_QuadJet_18_3b->cd();
   ratio_trigger_2018_QuadJet_18_3b->SetSelected(ratio_trigger_2018_QuadJet_18_3b);
}
