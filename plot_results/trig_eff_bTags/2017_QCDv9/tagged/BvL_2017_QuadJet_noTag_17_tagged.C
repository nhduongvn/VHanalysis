#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_noTag_17_tagged()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_noTag_17_tagged/BvL_2017_QuadJet_noTag_17_tagged
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_noTag_17_tagged = new TCanvas("BvL_2017_QuadJet_noTag_17_tagged", "BvL_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   BvL_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   BvL_2017_QuadJet_noTag_17_tagged->Range(-0.2183529,-0.002324294,1.171633,0.01704483);
   BvL_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   BvL_2017_QuadJet_noTag_17_tagged->SetFillStyle(4000);
   BvL_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   BvL_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   BvL_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15709);
   BvL_2017_QuadJet_noTag_17_tagged->SetRightMargin(0.1234783);
   BvL_2017_QuadJet_noTag_17_tagged->SetBottomMargin(0.12);
   BvL_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   BvL_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   BvL_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   BvL_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_BvL__94 = new TH1D("_QuadJet_noTag_tagged_BvL__94","",10,0,1);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(1,0.008974359);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(3,0.01438849);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(4,0.00625);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(5,0.006060606);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(6,0.006688963);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(7,0.004048583);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(8,0.01328904);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(9,0.005420054);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(10,0.0123335);
   _QuadJet_noTag_tagged_BvL__94->SetEntries(0.07745359);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5366");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2978");
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
   BvL_2017_QuadJet_noTag_17_tagged->Modified();
   BvL_2017_QuadJet_noTag_17_tagged->cd();
   BvL_2017_QuadJet_noTag_17_tagged->SetSelected(BvL_2017_QuadJet_noTag_17_tagged);
}
