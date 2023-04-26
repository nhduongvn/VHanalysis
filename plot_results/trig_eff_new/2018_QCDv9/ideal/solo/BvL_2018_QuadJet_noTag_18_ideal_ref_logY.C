#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_noTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_noTag_18_ideal_ref/BvL_2018_QuadJet_noTag_18_ideal_ref
//=========  (Tue Apr 25 23:01:42 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_noTag_18_ideal_ref = new TCanvas("BvL_2018_QuadJet_noTag_18_ideal_ref", "BvL_2018_QuadJet_noTag_18_ideal_ref",0,0,600,600);
   BvL_2018_QuadJet_noTag_18_ideal_ref->SetHighLightColor(2);
   BvL_2018_QuadJet_noTag_18_ideal_ref->Range(-0.2,3.221037,1.133333,5.423694);
   BvL_2018_QuadJet_noTag_18_ideal_ref->SetFillColor(0);
   BvL_2018_QuadJet_noTag_18_ideal_ref->SetBorderMode(0);
   BvL_2018_QuadJet_noTag_18_ideal_ref->SetBorderSize(2);
   BvL_2018_QuadJet_noTag_18_ideal_ref->SetLogy();
   BvL_2018_QuadJet_noTag_18_ideal_ref->SetLeftMargin(0.15);
   BvL_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   BvL_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_BvL_ref__150 = new TH1D("_QuadJet_noTag_ideal_BvL_ref__150","",10,0,1);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(1,84310);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(2,14033);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(3,7578);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(4,8593);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(5,6692);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(6,5983);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(7,5525);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(8,5961);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(9,7774);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(10,52151);
   _QuadJet_noTag_ideal_BvL_ref__150->SetEntries(198600);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 198600 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.412");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4086");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_BvL_ref__150->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_BvL_ref__150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_BvL_ref__150->SetLineColor(ci);
   _QuadJet_noTag_ideal_BvL_ref__150->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_ideal_BvL_ref__150->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_ideal_BvL_ref__150->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_BvL_ref__150->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_BvL_ref__150->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_BvL_ref__150->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_BvL_ref__150->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_BvL_ref__150->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_BvL_ref__150->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_BvL_ref__150->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_BvL_ref__150->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_BvL_ref__150->Draw("HIST");
   BvL_2018_QuadJet_noTag_18_ideal_ref->Modified();
   BvL_2018_QuadJet_noTag_18_ideal_ref->cd();
   BvL_2018_QuadJet_noTag_18_ideal_ref->SetSelected(BvL_2018_QuadJet_noTag_18_ideal_ref);
}
