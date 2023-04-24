#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_noTag_18()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_noTag_18/BvL_2018_QuadJet_noTag_18
//=========  (Mon Apr 24 10:45:57 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_noTag_18 = new TCanvas("BvL_2018_QuadJet_noTag_18", "BvL_2018_QuadJet_noTag_18",0,0,600,600);
   BvL_2018_QuadJet_noTag_18->SetHighLightColor(2);
   BvL_2018_QuadJet_noTag_18->Range(-0.2183529,0.002977526,1.171633,0.007412889);
   BvL_2018_QuadJet_noTag_18->SetFillColor(0);
   BvL_2018_QuadJet_noTag_18->SetFillStyle(4000);
   BvL_2018_QuadJet_noTag_18->SetBorderMode(0);
   BvL_2018_QuadJet_noTag_18->SetBorderSize(2);
   BvL_2018_QuadJet_noTag_18->SetLeftMargin(0.15709);
   BvL_2018_QuadJet_noTag_18->SetRightMargin(0.1234783);
   BvL_2018_QuadJet_noTag_18->SetBottomMargin(0.12);
   BvL_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   BvL_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_BvL__94 = new TH1D("_QuadJet_noTag_tagged_BvL__94","",10,0,1);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(1,0.005024174);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(2,0.004547252);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(3,0.004636974);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(4,0.004062433);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(5,0.00680461);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(6,0.004769965);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(7,0.003666667);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(8,0.004191245);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(9,0.0046412);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(10,0.004412654);
   _QuadJet_noTag_tagged_BvL__94->SetEntries(0.04675717);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.489");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2845");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_BvL__94->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_BvL__94);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_BvL__94->SetLineColor(ci);
   _QuadJet_noTag_tagged_BvL__94->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_tagged_BvL__94->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_tagged_BvL__94->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL__94->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_BvL__94->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL__94->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_BvL__94->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL__94->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL__94->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL__94->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_BvL__94->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL__94->Draw("HIST");
   BvL_2018_QuadJet_noTag_18->Modified();
   BvL_2018_QuadJet_noTag_18->cd();
   BvL_2018_QuadJet_noTag_18->SetSelected(BvL_2018_QuadJet_noTag_18);
}
