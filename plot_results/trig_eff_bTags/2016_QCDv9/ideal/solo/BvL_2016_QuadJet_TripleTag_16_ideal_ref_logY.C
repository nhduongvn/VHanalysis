#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16_ideal_ref/BvL_2016_QuadJet_TripleTag_16_ideal_ref
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16_ideal_ref = new TCanvas("BvL_2016_QuadJet_TripleTag_16_ideal_ref", "BvL_2016_QuadJet_TripleTag_16_ideal_ref",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->Range(-0.2,1.054293,1.133333,3.73356);
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetLogy();
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_BvL_ref__291 = new TH1D("_QuadJet_TripleTag_ideal_BvL_ref__291","",10,0,1);
   _QuadJet_TripleTag_ideal_BvL_ref__291->SetBinContent(1,630);
   _QuadJet_TripleTag_ideal_BvL_ref__291->SetBinContent(2,42);
   _QuadJet_TripleTag_ideal_BvL_ref__291->SetBinContent(3,106);
   _QuadJet_TripleTag_ideal_BvL_ref__291->SetBinContent(4,361);
   _QuadJet_TripleTag_ideal_BvL_ref__291->SetBinContent(5,274);
   _QuadJet_TripleTag_ideal_BvL_ref__291->SetBinContent(6,247);
   _QuadJet_TripleTag_ideal_BvL_ref__291->SetBinContent(7,210);
   _QuadJet_TripleTag_ideal_BvL_ref__291->SetBinContent(8,237);
   _QuadJet_TripleTag_ideal_BvL_ref__291->SetBinContent(9,263);
   _QuadJet_TripleTag_ideal_BvL_ref__291->SetBinContent(10,1542);
   _QuadJet_TripleTag_ideal_BvL_ref__291->SetEntries(3912);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3912   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6343");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3585");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_BvL_ref__291->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_BvL_ref__291);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_BvL_ref__291->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_BvL_ref__291->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_ideal_BvL_ref__291->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_BvL_ref__291->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__291->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL_ref__291->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__291->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_BvL_ref__291->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__291->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__291->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__291->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL_ref__291->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__291->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->Modified();
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->cd();
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetSelected(BvL_2016_QuadJet_TripleTag_16_ideal_ref);
}
