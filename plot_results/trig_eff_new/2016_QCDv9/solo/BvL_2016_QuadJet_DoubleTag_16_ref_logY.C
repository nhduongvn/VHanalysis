#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_DoubleTag_16_ref_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_DoubleTag_16_ref/BvL_2016_QuadJet_DoubleTag_16_ref
//=========  (Tue Apr 18 16:14:01 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_DoubleTag_16_ref = new TCanvas("BvL_2016_QuadJet_DoubleTag_16_ref", "BvL_2016_QuadJet_DoubleTag_16_ref",0,0,600,600);
   BvL_2016_QuadJet_DoubleTag_16_ref->SetHighLightColor(2);
   BvL_2016_QuadJet_DoubleTag_16_ref->Range(-0.2,3.919237,1.133333,6.731815);
   BvL_2016_QuadJet_DoubleTag_16_ref->SetFillColor(0);
   BvL_2016_QuadJet_DoubleTag_16_ref->SetBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16_ref->SetBorderSize(2);
   BvL_2016_QuadJet_DoubleTag_16_ref->SetLogy();
   BvL_2016_QuadJet_DoubleTag_16_ref->SetLeftMargin(0.15);
   BvL_2016_QuadJet_DoubleTag_16_ref->SetFrameBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_BvL_ref__150 = new TH1D("_QuadJet_DoubleTag_BvL_ref__150","",10,0,1);
   _QuadJet_DoubleTag_BvL_ref__150->SetBinContent(1,1489391);
   _QuadJet_DoubleTag_BvL_ref__150->SetBinContent(2,108612);
   _QuadJet_DoubleTag_BvL_ref__150->SetBinContent(3,55763);
   _QuadJet_DoubleTag_BvL_ref__150->SetBinContent(4,40449);
   _QuadJet_DoubleTag_BvL_ref__150->SetBinContent(5,33606);
   _QuadJet_DoubleTag_BvL_ref__150->SetBinContent(6,32168);
   _QuadJet_DoubleTag_BvL_ref__150->SetBinContent(7,31734);
   _QuadJet_DoubleTag_BvL_ref__150->SetBinContent(8,36699);
   _QuadJet_DoubleTag_BvL_ref__150->SetBinContent(9,48052);
   _QuadJet_DoubleTag_BvL_ref__150->SetBinContent(10,290290);
   _QuadJet_DoubleTag_BvL_ref__150->SetEntries(2166764);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2166764");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2214");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3536");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_BvL_ref__150->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_BvL_ref__150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_BvL_ref__150->SetLineColor(ci);
   _QuadJet_DoubleTag_BvL_ref__150->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_DoubleTag_BvL_ref__150->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_BvL_ref__150->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_BvL_ref__150->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_BvL_ref__150->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_BvL_ref__150->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_BvL_ref__150->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_BvL_ref__150->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_BvL_ref__150->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_BvL_ref__150->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_BvL_ref__150->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_BvL_ref__150->Draw("HIST");
   BvL_2016_QuadJet_DoubleTag_16_ref->Modified();
   BvL_2016_QuadJet_DoubleTag_16_ref->cd();
   BvL_2016_QuadJet_DoubleTag_16_ref->SetSelected(BvL_2016_QuadJet_DoubleTag_16_ref);
}
