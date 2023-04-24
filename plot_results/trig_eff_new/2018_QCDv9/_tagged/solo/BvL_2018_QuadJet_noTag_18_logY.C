#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_noTag_18_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_noTag_18/BvL_2018_QuadJet_noTag_18
//=========  (Mon Apr 24 10:45:57 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_noTag_18 = new TCanvas("BvL_2018_QuadJet_noTag_18", "BvL_2018_QuadJet_noTag_18",0,0,600,600);
   BvL_2018_QuadJet_noTag_18->SetHighLightColor(2);
   BvL_2018_QuadJet_noTag_18->Range(-0.2,0.8051011,1.133333,3.168017);
   BvL_2018_QuadJet_noTag_18->SetFillColor(0);
   BvL_2018_QuadJet_noTag_18->SetBorderMode(0);
   BvL_2018_QuadJet_noTag_18->SetBorderSize(2);
   BvL_2018_QuadJet_noTag_18->SetLogy();
   BvL_2018_QuadJet_noTag_18->SetLeftMargin(0.15);
   BvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   BvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_BvL__95 = new TH1D("_QuadJet_noTag_tagged_BvL__95","",10,0,1);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(1,451);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(2,69);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(3,38);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(4,38);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(5,49);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(6,31);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(7,22);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(8,27);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(9,39);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(10,248);
   _QuadJet_noTag_tagged_BvL__95->SetEntries(1012);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1012   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3918");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4031");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_BvL__95->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_BvL__95);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_BvL__95->SetLineColor(ci);
   _QuadJet_noTag_tagged_BvL__95->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_tagged_BvL__95->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_tagged_BvL__95->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL__95->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_BvL__95->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL__95->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_BvL__95->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL__95->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL__95->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL__95->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_BvL__95->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL__95->Draw("HIST");
   BvL_2018_QuadJet_noTag_18->Modified();
   BvL_2018_QuadJet_noTag_18->cd();
   BvL_2018_QuadJet_noTag_18->SetSelected(BvL_2018_QuadJet_noTag_18);
}
