#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ratio_trigger_2018_QuadJet_18_4b()
{
//=========Macro generated from canvas: ratio_trigger_2018_QuadJet_18_4b/ratio_trigger_2018_QuadJet_18_4b
//=========  (Mon Feb 12 13:48:52 2024) by ROOT version 6.28/10
   TCanvas *ratio_trigger_2018_QuadJet_18_4b = new TCanvas("ratio_trigger_2018_QuadJet_18_4b", "ratio_trigger_2018_QuadJet_18_4b",0,0,600,600);
   gStyle->SetOptStat(0);
   ratio_trigger_2018_QuadJet_18_4b->SetHighLightColor(2);
   ratio_trigger_2018_QuadJet_18_4b->Range(0,0,1,1);
   ratio_trigger_2018_QuadJet_18_4b->SetFillColor(0);
   ratio_trigger_2018_QuadJet_18_4b->SetBorderMode(0);
   ratio_trigger_2018_QuadJet_18_4b->SetBorderSize(2);
   ratio_trigger_2018_QuadJet_18_4b->SetLeftMargin(0.15);
   ratio_trigger_2018_QuadJet_18_4b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-548.077,-0.4658656,3394.231,2.141015);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   Double_t xAxis29[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__29 = new TH1D("probeNew__29","",13, xAxis29);
   probeNew__29->SetBinContent(4,0.08695652);
   probeNew__29->SetBinContent(5,0.3873239);
   probeNew__29->SetBinContent(6,0.6187845);
   probeNew__29->SetBinContent(7,0.7163121);
   probeNew__29->SetBinContent(8,0.779661);
   probeNew__29->SetBinContent(9,0.8125);
   probeNew__29->SetBinContent(10,0.8518519);
   probeNew__29->SetBinContent(11,0.8129032);
   probeNew__29->SetBinContent(12,0.8064516);
   probeNew__29->SetBinContent(13,0.8484848);
   probeNew__29->SetEntries(6.72123);
   probeNew__29->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__29->GetXaxis()->SetRange(0,14);
   probeNew__29->GetXaxis()->SetLabelFont(42);
   probeNew__29->GetXaxis()->SetTitleOffset(1);
   probeNew__29->GetXaxis()->SetTitleFont(42);
   probeNew__29->GetYaxis()->SetTitle("Data / MC");
   probeNew__29->GetYaxis()->SetLabelFont(42);
   probeNew__29->GetYaxis()->SetTitleFont(42);
   probeNew__29->GetZaxis()->SetLabelFont(42);
   probeNew__29->GetZaxis()->SetTitleOffset(1);
   probeNew__29->GetZaxis()->SetTitleFont(42);
   probeNew__29->Draw("Aape");
   Double_t xAxis30[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__30 = new TH1D("probeNew__30","",13, xAxis30);
   probeNew__30->SetBinContent(3,0.03958985);
   probeNew__30->SetBinContent(4,0.218998);
   probeNew__30->SetBinContent(5,0.5558396);
   probeNew__30->SetBinContent(6,0.7502227);
   probeNew__30->SetBinContent(7,0.8081335);
   probeNew__30->SetBinContent(8,0.8319732);
   probeNew__30->SetBinContent(9,0.8184378);
   probeNew__30->SetBinContent(10,0.8315313);
   probeNew__30->SetBinContent(11,0.8257367);
   probeNew__30->SetBinContent(12,0.8289856);
   probeNew__30->SetBinContent(13,0.8055189);
   probeNew__30->SetBinContent(14,0.7100235);
   probeNew__30->SetBinError(3,0.006833518);
   probeNew__30->SetBinError(4,0.009528232);
   probeNew__30->SetBinError(5,0.02387222);
   probeNew__30->SetBinError(6,0.01860105);
   probeNew__30->SetBinError(7,0.01969354);
   probeNew__30->SetBinError(8,0.02306124);
   probeNew__30->SetBinError(9,0.0252972);
   probeNew__30->SetBinError(10,0.02870949);
   probeNew__30->SetBinError(11,0.01968642);
   probeNew__30->SetBinError(12,0.03170211);
   probeNew__30->SetBinError(13,0.03872279);
   probeNew__30->SetBinError(14,0.1849152);
   probeNew__30->SetEntries(8454.214);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   probeNew__30->SetLineColor(ci);
   probeNew__30->GetXaxis()->SetRange(1,2000);
   probeNew__30->GetXaxis()->SetLabelFont(42);
   probeNew__30->GetXaxis()->SetTitleOffset(1);
   probeNew__30->GetXaxis()->SetTitleFont(42);
   probeNew__30->GetYaxis()->SetLabelFont(42);
   probeNew__30->GetYaxis()->SetTitleFont(42);
   probeNew__30->GetZaxis()->SetLabelFont(42);
   probeNew__30->GetZaxis()->SetTitleOffset(1);
   probeNew__30->GetZaxis()->SetTitleFont(42);
   probeNew__30->Draw("Aapesame");
   upper_pad->Modified();
   ratio_trigger_2018_QuadJet_18_4b->cd();
  
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
   
   Double_t Graph_fx3005[11] = { 225, 275, 325, 375, 425, 475, 525, 575, 700, 900, 1500 };
   Double_t Graph_fy3005[11] = { 0, 0.3970653, 0.6968269, 0.8248012, 0.8863784, 0.9371228, 0.9927449, 1.024438, 0.9844582, 0.9728174, 1.05334 };
   Double_t Graph_felx3005[11] = { 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fely3005[11] = { 0, 0.3970653, 0.6853702, 0.7663309, 0.7997341, 0.8292054, 0.869583, 0.8865609, 0.8621766, 0.8537708, 0.9126533 };
   Double_t Graph_fehx3005[11] = { 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fehy3005[11] = { 47.80134, 8.644321, 3.680664, 2.862096, 2.708136, 2.662678, 2.723818, 2.700981, 2.698353, 2.688265, 2.791343 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_fx3005,Graph_fy3005,Graph_felx3005,Graph_fehx3005,Graph_fely3005,Graph_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-153.8462,2153.846);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(2);
   Graph_Graph3005->SetDirectory(nullptr);
   Graph_Graph3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3005->SetLineColor(ci);
   Graph_Graph3005->GetXaxis()->SetRange(1,100);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
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
   ratio_trigger_2018_QuadJet_18_4b->cd();
  
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,-0.3355216,1.880327,510,"S");
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
   ratio_trigger_2018_QuadJet_18_4b->cd();
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
   ratio_trigger_2018_QuadJet_18_4b->Modified();
   ratio_trigger_2018_QuadJet_18_4b->cd();
   ratio_trigger_2018_QuadJet_18_4b->SetSelected(ratio_trigger_2018_QuadJet_18_4b);
}
