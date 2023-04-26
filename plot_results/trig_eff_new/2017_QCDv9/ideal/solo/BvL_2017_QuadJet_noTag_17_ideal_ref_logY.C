#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_noTag_17_ideal_ref_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_noTag_17_ideal_ref/BvL_2017_QuadJet_noTag_17_ideal_ref
//=========  (Tue Apr 25 23:02:19 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_noTag_17_ideal_ref = new TCanvas("BvL_2017_QuadJet_noTag_17_ideal_ref", "BvL_2017_QuadJet_noTag_17_ideal_ref",0,0,600,600);
   BvL_2017_QuadJet_noTag_17_ideal_ref->SetHighLightColor(2);
   BvL_2017_QuadJet_noTag_17_ideal_ref->Range(-0.2,2.946707,1.133333,5.169033);
   BvL_2017_QuadJet_noTag_17_ideal_ref->SetFillColor(0);
   BvL_2017_QuadJet_noTag_17_ideal_ref->SetBorderMode(0);
   BvL_2017_QuadJet_noTag_17_ideal_ref->SetBorderSize(2);
   BvL_2017_QuadJet_noTag_17_ideal_ref->SetLogy();
   BvL_2017_QuadJet_noTag_17_ideal_ref->SetLeftMargin(0.15);
   BvL_2017_QuadJet_noTag_17_ideal_ref->SetFrameBorderMode(0);
   BvL_2017_QuadJet_noTag_17_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_BvL_ref__150 = new TH1D("_QuadJet_noTag_ideal_BvL_ref__150","",10,0,1);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(1,46693);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(2,7797);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(3,4077);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(4,4592);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(5,3716);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(6,3256);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(7,2951);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(8,3217);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(9,4443);
   _QuadJet_noTag_ideal_BvL_ref__150->SetBinContent(10,28918);
   _QuadJet_noTag_ideal_BvL_ref__150->SetEntries(109660);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 109660 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4126");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4096");
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
   BvL_2017_QuadJet_noTag_17_ideal_ref->Modified();
   BvL_2017_QuadJet_noTag_17_ideal_ref->cd();
   BvL_2017_QuadJet_noTag_17_ideal_ref->SetSelected(BvL_2017_QuadJet_noTag_17_ideal_ref);
}
