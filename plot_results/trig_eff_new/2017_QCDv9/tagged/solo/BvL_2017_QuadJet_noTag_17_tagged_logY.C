#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_noTag_17_tagged_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_noTag_17_tagged/BvL_2017_QuadJet_noTag_17_tagged
//=========  (Wed Apr 26 16:41:50 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_noTag_17_tagged = new TCanvas("BvL_2017_QuadJet_noTag_17_tagged", "BvL_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   BvL_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   BvL_2017_QuadJet_noTag_17_tagged->Range(-0.2,0.3993529,1.133333,2.937949);
   BvL_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   BvL_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   BvL_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   BvL_2017_QuadJet_noTag_17_tagged->SetLogy();
   BvL_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15);
   BvL_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   BvL_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_BvL__95 = new TH1D("_QuadJet_noTag_tagged_BvL__95","",10,0,1);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(1,255);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(2,35);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(3,19);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(4,27);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(5,26);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(6,10);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(7,16);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(8,9);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(9,26);
   _QuadJet_noTag_tagged_BvL__95->SetBinContent(10,133);
   _QuadJet_noTag_tagged_BvL__95->SetEntries(556);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 556    ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3846");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4048");
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
   BvL_2017_QuadJet_noTag_17_tagged->Modified();
   BvL_2017_QuadJet_noTag_17_tagged->cd();
   BvL_2017_QuadJet_noTag_17_tagged->SetSelected(BvL_2017_QuadJet_noTag_17_tagged);
}
