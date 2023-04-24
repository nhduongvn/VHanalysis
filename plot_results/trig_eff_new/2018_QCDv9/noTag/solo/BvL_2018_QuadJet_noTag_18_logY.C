#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_noTag_18_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_noTag_18/BvL_2018_QuadJet_noTag_18
//=========  (Mon Apr 24 10:45:56 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_noTag_18 = new TCanvas("BvL_2018_QuadJet_noTag_18", "BvL_2018_QuadJet_noTag_18",0,0,600,600);
   BvL_2018_QuadJet_noTag_18->SetHighLightColor(2);
   BvL_2018_QuadJet_noTag_18->Range(-0.2,1.711332,1.133333,4.554361);
   BvL_2018_QuadJet_noTag_18->SetFillColor(0);
   BvL_2018_QuadJet_noTag_18->SetBorderMode(0);
   BvL_2018_QuadJet_noTag_18->SetBorderSize(2);
   BvL_2018_QuadJet_noTag_18->SetLogy();
   BvL_2018_QuadJet_noTag_18->SetLeftMargin(0.15);
   BvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   BvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_BvL__41 = new TH1D("_QuadJet_noTag_BvL__41","",10,0,1);
   _QuadJet_noTag_BvL__41->SetBinContent(1,9829);
   _QuadJet_noTag_BvL__41->SetBinContent(2,717);
   _QuadJet_noTag_BvL__41->SetBinContent(3,358);
   _QuadJet_noTag_BvL__41->SetBinContent(4,246);
   _QuadJet_noTag_BvL__41->SetBinContent(5,212);
   _QuadJet_noTag_BvL__41->SetBinContent(6,201);
   _QuadJet_noTag_BvL__41->SetBinContent(7,198);
   _QuadJet_noTag_BvL__41->SetBinContent(8,249);
   _QuadJet_noTag_BvL__41->SetBinContent(9,303);
   _QuadJet_noTag_BvL__41->SetBinContent(10,2067);
   _QuadJet_noTag_BvL__41->SetEntries(14380);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 14380  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.228");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.361");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_BvL__41->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_BvL__41);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_BvL__41->SetLineColor(ci);
   _QuadJet_noTag_BvL__41->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_BvL__41->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_BvL__41->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__41->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL__41->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__41->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_BvL__41->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__41->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__41->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__41->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL__41->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__41->Draw("HIST");
   BvL_2018_QuadJet_noTag_18->Modified();
   BvL_2018_QuadJet_noTag_18->cd();
   BvL_2018_QuadJet_noTag_18->SetSelected(BvL_2018_QuadJet_noTag_18);
}
