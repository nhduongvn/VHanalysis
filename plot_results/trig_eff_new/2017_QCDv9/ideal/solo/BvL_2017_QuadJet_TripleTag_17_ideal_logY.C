#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_TripleTag_17_ideal_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_TripleTag_17_ideal/BvL_2017_QuadJet_TripleTag_17_ideal
//=========  (Tue Apr 25 23:02:19 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_TripleTag_17_ideal = new TCanvas("BvL_2017_QuadJet_TripleTag_17_ideal", "BvL_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   BvL_2017_QuadJet_TripleTag_17_ideal->Range(-0.2,2.165865,1.133333,4.3722);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetLogy();
   BvL_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_BvL__146 = new TH1D("_QuadJet_TripleTag_ideal_BvL__146","",10,0,1);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(1,7482);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(2,1508);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(3,841);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(4,829);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(5,661);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(6,601);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(7,487);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(8,517);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(9,719);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(10,5251);
   _QuadJet_TripleTag_ideal_BvL__146->SetEntries(18896);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 18896  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.427");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4104");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_BvL__146->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_BvL__146);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_BvL__146->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_BvL__146->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_ideal_BvL__146->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_BvL__146->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__146->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__146->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__146->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_BvL__146->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__146->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__146->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__146->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__146->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__146->Draw("HIST");
   BvL_2017_QuadJet_TripleTag_17_ideal->Modified();
   BvL_2017_QuadJet_TripleTag_17_ideal->cd();
   BvL_2017_QuadJet_TripleTag_17_ideal->SetSelected(BvL_2017_QuadJet_TripleTag_17_ideal);
}
