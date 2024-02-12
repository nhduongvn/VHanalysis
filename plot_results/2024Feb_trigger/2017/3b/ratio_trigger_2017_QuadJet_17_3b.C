#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ratio_trigger_2017_QuadJet_17_3b()
{
//=========Macro generated from canvas: ratio_trigger_2017_QuadJet_17_3b/ratio_trigger_2017_QuadJet_17_3b
//=========  (Mon Feb 12 13:48:52 2024) by ROOT version 6.28/10
   TCanvas *ratio_trigger_2017_QuadJet_17_3b = new TCanvas("ratio_trigger_2017_QuadJet_17_3b", "ratio_trigger_2017_QuadJet_17_3b",0,0,600,600);
   gStyle->SetOptStat(0);
   ratio_trigger_2017_QuadJet_17_3b->SetHighLightColor(2);
   ratio_trigger_2017_QuadJet_17_3b->Range(0,0,1,1);
   ratio_trigger_2017_QuadJet_17_3b->SetFillColor(0);
   ratio_trigger_2017_QuadJet_17_3b->SetBorderMode(0);
   ratio_trigger_2017_QuadJet_17_3b->SetBorderSize(2);
   ratio_trigger_2017_QuadJet_17_3b->SetLeftMargin(0.15);
   ratio_trigger_2017_QuadJet_17_3b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-548.077,-0.4166289,3394.231,1.480549);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   Double_t xAxis53[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__53 = new TH1D("probeNew__53","",13, xAxis53);
   probeNew__53->SetBinContent(3,0.006382979);
   probeNew__53->SetBinContent(4,0.06115965);
   probeNew__53->SetBinContent(5,0.2144344);
   probeNew__53->SetBinContent(6,0.3417611);
   probeNew__53->SetBinContent(7,0.3870626);
   probeNew__53->SetBinContent(8,0.4427793);
   probeNew__53->SetBinContent(9,0.4561069);
   probeNew__53->SetBinContent(10,0.4465753);
   probeNew__53->SetBinContent(11,0.4530026);
   probeNew__53->SetBinContent(12,0.504065);
   probeNew__53->SetBinContent(13,0.4295775);
   probeNew__53->SetEntries(3.742907);
   probeNew__53->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__53->GetXaxis()->SetRange(0,14);
   probeNew__53->GetXaxis()->SetLabelFont(42);
   probeNew__53->GetXaxis()->SetTitleOffset(1);
   probeNew__53->GetXaxis()->SetTitleFont(42);
   probeNew__53->GetYaxis()->SetTitle("Data / MC");
   probeNew__53->GetYaxis()->SetLabelFont(42);
   probeNew__53->GetYaxis()->SetTitleFont(42);
   probeNew__53->GetZaxis()->SetLabelFont(42);
   probeNew__53->GetZaxis()->SetTitleOffset(1);
   probeNew__53->GetZaxis()->SetTitleFont(42);
   probeNew__53->Draw("Aape");
   Double_t xAxis54[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__54 = new TH1D("probeNew__54","",13, xAxis54);
   probeNew__54->SetBinContent(2,0.001405332);
   probeNew__54->SetBinContent(3,0.02196578);
   probeNew__54->SetBinContent(4,0.138861);
   probeNew__54->SetBinContent(5,0.3625532);
   probeNew__54->SetBinContent(6,0.4731834);
   probeNew__54->SetBinContent(7,0.5006816);
   probeNew__54->SetBinContent(8,0.5137429);
   probeNew__54->SetBinContent(9,0.5250996);
   probeNew__54->SetBinContent(10,0.5279866);
   probeNew__54->SetBinContent(11,0.5290762);
   probeNew__54->SetBinContent(12,0.537508);
   probeNew__54->SetBinContent(13,0.5453082);
   probeNew__54->SetBinContent(14,0.5823896);
   probeNew__54->SetBinError(2,0.001406754);
   probeNew__54->SetBinError(3,0.0009068941);
   probeNew__54->SetBinError(4,0.00143244);
   probeNew__54->SetBinError(5,0.002391977);
   probeNew__54->SetBinError(6,0.003091622);
   probeNew__54->SetBinError(7,0.003681203);
   probeNew__54->SetBinError(8,0.004375941);
   probeNew__54->SetBinError(9,0.005247336);
   probeNew__54->SetBinError(10,0.006198529);
   probeNew__54->SetBinError(11,0.004464733);
   probeNew__54->SetBinError(12,0.007963619);
   probeNew__54->SetBinError(13,0.01018777);
   probeNew__54->SetBinError(14,0.07397082);
   probeNew__54->SetEntries(71511.73);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   probeNew__54->SetLineColor(ci);
   probeNew__54->GetXaxis()->SetRange(1,2000);
   probeNew__54->GetXaxis()->SetLabelFont(42);
   probeNew__54->GetXaxis()->SetTitleOffset(1);
   probeNew__54->GetXaxis()->SetTitleFont(42);
   probeNew__54->GetYaxis()->SetLabelFont(42);
   probeNew__54->GetYaxis()->SetTitleFont(42);
   probeNew__54->GetZaxis()->SetLabelFont(42);
   probeNew__54->GetZaxis()->SetTitleOffset(1);
   probeNew__54->GetZaxis()->SetTitleFont(42);
   probeNew__54->Draw("Aapesame");
   upper_pad->Modified();
   ratio_trigger_2017_QuadJet_17_3b->cd();
  
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
   
   Double_t Graph_fx3009[12] = { 150, 225, 275, 325, 375, 425, 475, 525, 575, 700, 900, 1500 };
   Double_t Graph_fy3009[12] = { 0, 0.2905874, 0.440438, 0.5914564, 0.7222593, 0.7730713, 0.8618694, 0.8686103, 0.8458081, 0.8562143, 0.9377814, 0.7877701 };
   Double_t Graph_felx3009[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fely3009[12] = { 0, 0.2905874, 0.440438, 0.5911169, 0.7153197, 0.7603797, 0.8385293, 0.8425995, 0.8222232, 0.8311538, 0.8992887, 0.7685889 };
   Double_t Graph_fehx3009[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fehy3009[12] = { 3782.558, 84.11181, 13.50702, 5.39713, 4.268357, 4.077027, 4.023968, 3.948728, 3.919041, 3.916218, 3.898651, 3.781166 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,Graph_fx3009,Graph_fy3009,Graph_felx3009,Graph_fehx3009,Graph_fely3009,Graph_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-153.8462,2153.846);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(2);
   Graph_Graph3009->SetDirectory(nullptr);
   Graph_Graph3009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3009->SetLineColor(ci);
   Graph_Graph3009->GetXaxis()->SetRange(1,100);
   Graph_Graph3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3009);
   
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
   ratio_trigger_2017_QuadJet_17_3b->cd();
  
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,-0.3217701,1.290831,510,"S");
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
   ratio_trigger_2017_QuadJet_17_3b->cd();
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
   ratio_trigger_2017_QuadJet_17_3b->Modified();
   ratio_trigger_2017_QuadJet_17_3b->cd();
   ratio_trigger_2017_QuadJet_17_3b->SetSelected(ratio_trigger_2017_QuadJet_17_3b);
}
