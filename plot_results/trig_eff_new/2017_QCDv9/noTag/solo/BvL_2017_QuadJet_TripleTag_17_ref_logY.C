#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_TripleTag_17_ref_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_TripleTag_17_ref/BvL_2017_QuadJet_TripleTag_17_ref
//=========  (Thu Apr 27 10:18:23 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_TripleTag_17_ref = new TCanvas("BvL_2017_QuadJet_TripleTag_17_ref", "BvL_2017_QuadJet_TripleTag_17_ref",0,0,600,600);
   BvL_2017_QuadJet_TripleTag_17_ref->SetHighLightColor(2);
   BvL_2017_QuadJet_TripleTag_17_ref->Range(-0.2,3.883378,1.133333,6.704116);
   BvL_2017_QuadJet_TripleTag_17_ref->SetFillColor(0);
   BvL_2017_QuadJet_TripleTag_17_ref->SetBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_ref->SetBorderSize(2);
   BvL_2017_QuadJet_TripleTag_17_ref->SetLogy();
   BvL_2017_QuadJet_TripleTag_17_ref->SetLeftMargin(0.15);
   BvL_2017_QuadJet_TripleTag_17_ref->SetFrameBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_BvL_ref__39 = new TH1D("_QuadJet_TripleTag_BvL_ref__39","",10,0,1);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(1,1394739);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(2,97524);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(3,50376);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(4,36684);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(5,30686);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(6,29696);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(7,29274);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(8,33980);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(9,44946);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(10,301843);
   _QuadJet_TripleTag_BvL_ref__39->SetEntries(2049748);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2049748");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2319");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3641");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_BvL_ref__39->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_BvL_ref__39);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_BvL_ref__39->SetLineColor(ci);
   _QuadJet_TripleTag_BvL_ref__39->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_BvL_ref__39->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_BvL_ref__39->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL_ref__39->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL_ref__39->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL_ref__39->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_BvL_ref__39->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL_ref__39->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL_ref__39->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL_ref__39->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL_ref__39->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL_ref__39->Draw("HIST");
   BvL_2017_QuadJet_TripleTag_17_ref->Modified();
   BvL_2017_QuadJet_TripleTag_17_ref->cd();
   BvL_2017_QuadJet_TripleTag_17_ref->SetSelected(BvL_2017_QuadJet_TripleTag_17_ref);
}
