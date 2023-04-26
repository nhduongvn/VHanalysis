#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_DoubleTag_16_tagged/pt_jet3_2016_QuadJet_DoubleTag_16_tagged
//=========  (Tue Apr 25 23:03:07 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("pt_jet3_2016_QuadJet_DoubleTag_16_tagged", "pt_jet3_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->Range(-109.1764,-0.03230769,585.8166,0.2369231);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetFillColor(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetFillStyle(4000);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetBorderSize(2);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_pt_jet3__148 = new TH1D("_QuadJet_DoubleTag_tagged_pt_jet3__148","",50,0,500);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(5,0.01326607);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(6,0.02184874);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(7,0.02694449);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(8,0.0294701);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(9,0.03391473);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(10,0.03225806);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(11,0.030837);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(12,0.03010033);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(13,0.04201681);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(14,0.02834008);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(15,0.0130719);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(16,0.00990099);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(17,0.02564103);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(18,0.03571429);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(19,0.02272727);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(20,0.04545455);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(22,0.1428571);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetBinContent(24,0.2);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetEntries(0.7843636);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  168.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   61.9");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_pt_jet3__148->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_pt_jet3__148);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_tagged_pt_jet3__148->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_tagged_pt_jet3__148->GetXaxis()->SetRange(1,500);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_tagged_pt_jet3__148->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__148->Draw("HIST");
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->Modified();
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->cd();
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetSelected(pt_jet3_2016_QuadJet_DoubleTag_16_tagged);
}
