#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_TripleTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_TripleTag_18_ideal_ref/BvL_2018_QuadJet_TripleTag_18_ideal_ref
//=========  (Wed May  3 17:28:54 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_TripleTag_18_ideal_ref = new TCanvas("BvL_2018_QuadJet_TripleTag_18_ideal_ref", "BvL_2018_QuadJet_TripleTag_18_ideal_ref",0,0,600,600);
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetHighLightColor(2);
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->Range(-0.2,1.370234,1.133333,4.002582);
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetFillColor(0);
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderSize(2);
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetLogy();
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetLeftMargin(0.15);
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_BvL_ref__21 = new TH1D("_QuadJet_TripleTag_ideal_BvL_ref__21","",10,0,1);
   _QuadJet_TripleTag_ideal_BvL_ref__21->SetBinContent(1,1293);
   _QuadJet_TripleTag_ideal_BvL_ref__21->SetBinContent(2,86);
   _QuadJet_TripleTag_ideal_BvL_ref__21->SetBinContent(3,201);
   _QuadJet_TripleTag_ideal_BvL_ref__21->SetBinContent(4,571);
   _QuadJet_TripleTag_ideal_BvL_ref__21->SetBinContent(5,486);
   _QuadJet_TripleTag_ideal_BvL_ref__21->SetBinContent(6,397);
   _QuadJet_TripleTag_ideal_BvL_ref__21->SetBinContent(7,408);
   _QuadJet_TripleTag_ideal_BvL_ref__21->SetBinContent(8,409);
   _QuadJet_TripleTag_ideal_BvL_ref__21->SetBinContent(9,465);
   _QuadJet_TripleTag_ideal_BvL_ref__21->SetBinContent(10,2896);
   _QuadJet_TripleTag_ideal_BvL_ref__21->SetEntries(7212);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7212   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6294");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3689");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_BvL_ref__21->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_BvL_ref__21);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_BvL_ref__21->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_BvL_ref__21->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_ideal_BvL_ref__21->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_BvL_ref__21->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__21->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL_ref__21->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__21->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_BvL_ref__21->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__21->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__21->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__21->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL_ref__21->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__21->Draw("HIST");
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->Modified();
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->cd();
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetSelected(BvL_2018_QuadJet_TripleTag_18_ideal_ref);
}
