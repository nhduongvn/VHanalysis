#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_noTag_18_ref/BvL_2018_QuadJet_noTag_18_ref
//=========  (Tue Apr 18 16:14:01 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_noTag_18_ref = new TCanvas("BvL_2018_QuadJet_noTag_18_ref", "BvL_2018_QuadJet_noTag_18_ref",0,0,600,600);
   BvL_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   BvL_2018_QuadJet_noTag_18_ref->Range(-0.2,3.919237,1.133333,6.731815);
   BvL_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   BvL_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   BvL_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   BvL_2018_QuadJet_noTag_18_ref->SetLogy();
   BvL_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   BvL_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   BvL_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_BvL_ref__168 = new TH1D("_QuadJet_noTag_BvL_ref__168","",10,0,1);
   _QuadJet_noTag_BvL_ref__168->SetBinContent(1,1489391);
   _QuadJet_noTag_BvL_ref__168->SetBinContent(2,108612);
   _QuadJet_noTag_BvL_ref__168->SetBinContent(3,55763);
   _QuadJet_noTag_BvL_ref__168->SetBinContent(4,40449);
   _QuadJet_noTag_BvL_ref__168->SetBinContent(5,33606);
   _QuadJet_noTag_BvL_ref__168->SetBinContent(6,32168);
   _QuadJet_noTag_BvL_ref__168->SetBinContent(7,31734);
   _QuadJet_noTag_BvL_ref__168->SetBinContent(8,36699);
   _QuadJet_noTag_BvL_ref__168->SetBinContent(9,48052);
   _QuadJet_noTag_BvL_ref__168->SetBinContent(10,290290);
   _QuadJet_noTag_BvL_ref__168->SetEntries(2166764);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2166764");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2214");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3536");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_BvL_ref__168->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_BvL_ref__168);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_BvL_ref__168->SetLineColor(ci);
   _QuadJet_noTag_BvL_ref__168->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_BvL_ref__168->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_BvL_ref__168->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL_ref__168->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL_ref__168->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL_ref__168->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_BvL_ref__168->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL_ref__168->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL_ref__168->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL_ref__168->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL_ref__168->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL_ref__168->Draw("HIST");
   BvL_2018_QuadJet_noTag_18_ref->Modified();
   BvL_2018_QuadJet_noTag_18_ref->cd();
   BvL_2018_QuadJet_noTag_18_ref->SetSelected(BvL_2018_QuadJet_noTag_18_ref);
}
