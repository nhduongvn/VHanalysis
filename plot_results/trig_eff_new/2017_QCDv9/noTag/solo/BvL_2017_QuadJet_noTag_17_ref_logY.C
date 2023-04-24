#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_noTag_17_ref/BvL_2017_QuadJet_noTag_17_ref
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_noTag_17_ref = new TCanvas("BvL_2017_QuadJet_noTag_17_ref", "BvL_2017_QuadJet_noTag_17_ref",0,0,600,600);
   BvL_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   BvL_2017_QuadJet_noTag_17_ref->Range(-0.2,3.850819,1.133333,6.672747);
   BvL_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   BvL_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   BvL_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   BvL_2017_QuadJet_noTag_17_ref->SetLogy();
   BvL_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   BvL_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   BvL_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_BvL_ref__162 = new TH1D("_QuadJet_noTag_BvL_ref__162","",10,0,1);
   _QuadJet_noTag_BvL_ref__162->SetBinContent(1,1297196);
   _QuadJet_noTag_BvL_ref__162->SetBinContent(2,90647);
   _QuadJet_noTag_BvL_ref__162->SetBinContent(3,46761);
   _QuadJet_noTag_BvL_ref__162->SetBinContent(4,33992);
   _QuadJet_noTag_BvL_ref__162->SetBinContent(5,28517);
   _QuadJet_noTag_BvL_ref__162->SetBinContent(6,27602);
   _QuadJet_noTag_BvL_ref__162->SetBinContent(7,27167);
   _QuadJet_noTag_BvL_ref__162->SetBinContent(8,31512);
   _QuadJet_noTag_BvL_ref__162->SetBinContent(9,41651);
   _QuadJet_noTag_BvL_ref__162->SetBinContent(10,279595);
   _QuadJet_noTag_BvL_ref__162->SetEntries(1904640);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1904640");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2313");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3637");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_BvL_ref__162->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_BvL_ref__162);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_BvL_ref__162->SetLineColor(ci);
   _QuadJet_noTag_BvL_ref__162->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_BvL_ref__162->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_BvL_ref__162->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL_ref__162->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL_ref__162->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL_ref__162->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_BvL_ref__162->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL_ref__162->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL_ref__162->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL_ref__162->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL_ref__162->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL_ref__162->Draw("HIST");
   BvL_2017_QuadJet_noTag_17_ref->Modified();
   BvL_2017_QuadJet_noTag_17_ref->cd();
   BvL_2017_QuadJet_noTag_17_ref->SetSelected(BvL_2017_QuadJet_noTag_17_ref);
}
