#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_TripleTag_17_tagged_ref_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_TripleTag_17_tagged_ref/BvL_2017_QuadJet_TripleTag_17_tagged_ref
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_TripleTag_17_tagged_ref = new TCanvas("BvL_2017_QuadJet_TripleTag_17_tagged_ref", "BvL_2017_QuadJet_TripleTag_17_tagged_ref",0,0,600,600);
   BvL_2017_QuadJet_TripleTag_17_tagged_ref->SetHighLightColor(2);
   BvL_2017_QuadJet_TripleTag_17_tagged_ref->Range(-0.2,1.180002,1.133333,3.851558);
   BvL_2017_QuadJet_TripleTag_17_tagged_ref->SetFillColor(0);
   BvL_2017_QuadJet_TripleTag_17_tagged_ref->SetBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_tagged_ref->SetBorderSize(2);
   BvL_2017_QuadJet_TripleTag_17_tagged_ref->SetLogy();
   BvL_2017_QuadJet_TripleTag_17_tagged_ref->SetLeftMargin(0.15);
   BvL_2017_QuadJet_TripleTag_17_tagged_ref->SetFrameBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_BvL_ref__93 = new TH1D("_QuadJet_TripleTag_tagged_BvL_ref__93","",10,0,1);
   _QuadJet_TripleTag_tagged_BvL_ref__93->SetBinContent(1,780);
   _QuadJet_TripleTag_tagged_BvL_ref__93->SetBinContent(2,56);
   _QuadJet_TripleTag_tagged_BvL_ref__93->SetBinContent(3,139);
   _QuadJet_TripleTag_tagged_BvL_ref__93->SetBinContent(4,480);
   _QuadJet_TripleTag_tagged_BvL_ref__93->SetBinContent(5,330);
   _QuadJet_TripleTag_tagged_BvL_ref__93->SetBinContent(6,299);
   _QuadJet_TripleTag_tagged_BvL_ref__93->SetBinContent(7,247);
   _QuadJet_TripleTag_tagged_BvL_ref__93->SetBinContent(8,301);
   _QuadJet_TripleTag_tagged_BvL_ref__93->SetBinContent(9,369);
   _QuadJet_TripleTag_tagged_BvL_ref__93->SetBinContent(10,2027);
   _QuadJet_TripleTag_tagged_BvL_ref__93->SetEntries(5028);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5028   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6427");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3593");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_BvL_ref__93->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_BvL_ref__93);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_BvL_ref__93->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_BvL_ref__93->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_tagged_BvL_ref__93->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_BvL_ref__93->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL_ref__93->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL_ref__93->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL_ref__93->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_BvL_ref__93->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL_ref__93->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL_ref__93->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL_ref__93->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL_ref__93->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL_ref__93->Draw("HIST");
   BvL_2017_QuadJet_TripleTag_17_tagged_ref->Modified();
   BvL_2017_QuadJet_TripleTag_17_tagged_ref->cd();
   BvL_2017_QuadJet_TripleTag_17_tagged_ref->SetSelected(BvL_2017_QuadJet_TripleTag_17_tagged_ref);
}
