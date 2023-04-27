#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16_ideal_ref/BvL_2016_DoubleJet_TripleTag_16_ideal_ref
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16_ideal_ref = new TCanvas("BvL_2016_DoubleJet_TripleTag_16_ideal_ref", "BvL_2016_DoubleJet_TripleTag_16_ideal_ref",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->Range(-0.2,0.9816587,1.133333,3.595452);
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetLogy();
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_BvL_ref__297 = new TH1D("_DoubleJet_TripleTag_ideal_BvL_ref__297","",10,0,1);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->SetBinContent(1,516);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->SetBinContent(2,35);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->SetBinContent(3,78);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->SetBinContent(4,260);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->SetBinContent(5,193);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->SetBinContent(6,176);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->SetBinContent(7,145);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->SetBinContent(8,175);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->SetBinContent(9,195);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->SetBinContent(10,1139);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->SetEntries(2912);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2912   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6244");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3657");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_BvL_ref__297->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_BvL_ref__297);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_BvL_ref__297->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_ideal_BvL_ref__297->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_BvL_ref__297->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL_ref__297->Draw("HIST");
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->Modified();
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->cd();
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetSelected(BvL_2016_DoubleJet_TripleTag_16_ideal_ref);
}
