#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_TripleTag_17_ref_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_TripleTag_17_ref/BvL_2017_QuadJet_TripleTag_17_ref
//=========  (Tue Apr 18 16:14:01 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_TripleTag_17_ref = new TCanvas("BvL_2017_QuadJet_TripleTag_17_ref", "BvL_2017_QuadJet_TripleTag_17_ref",0,0,600,600);
   BvL_2017_QuadJet_TripleTag_17_ref->SetHighLightColor(2);
   BvL_2017_QuadJet_TripleTag_17_ref->Range(-0.2,3.891046,1.133333,6.71245);
   BvL_2017_QuadJet_TripleTag_17_ref->SetFillColor(0);
   BvL_2017_QuadJet_TripleTag_17_ref->SetBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_ref->SetBorderSize(2);
   BvL_2017_QuadJet_TripleTag_17_ref->SetLogy();
   BvL_2017_QuadJet_TripleTag_17_ref->SetLeftMargin(0.15);
   BvL_2017_QuadJet_TripleTag_17_ref->SetFrameBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_BvL_ref__159 = new TH1D("_QuadJet_TripleTag_BvL_ref__159","",10,0,1);
   _QuadJet_TripleTag_BvL_ref__159->SetBinContent(1,1421544);
   _QuadJet_TripleTag_BvL_ref__159->SetBinContent(2,99475);
   _QuadJet_TripleTag_BvL_ref__159->SetBinContent(3,51452);
   _QuadJet_TripleTag_BvL_ref__159->SetBinContent(4,37443);
   _QuadJet_TripleTag_BvL_ref__159->SetBinContent(5,31317);
   _QuadJet_TripleTag_BvL_ref__159->SetBinContent(6,30287);
   _QuadJet_TripleTag_BvL_ref__159->SetBinContent(7,29800);
   _QuadJet_TripleTag_BvL_ref__159->SetBinContent(8,34538);
   _QuadJet_TripleTag_BvL_ref__159->SetBinContent(9,45863);
   _QuadJet_TripleTag_BvL_ref__159->SetBinContent(10,307881);
   _QuadJet_TripleTag_BvL_ref__159->SetEntries(2089600);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2089600");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2319");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3642");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_BvL_ref__159->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_BvL_ref__159);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_BvL_ref__159->SetLineColor(ci);
   _QuadJet_TripleTag_BvL_ref__159->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_BvL_ref__159->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_BvL_ref__159->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL_ref__159->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL_ref__159->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL_ref__159->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_BvL_ref__159->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL_ref__159->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL_ref__159->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL_ref__159->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL_ref__159->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL_ref__159->Draw("HIST");
   BvL_2017_QuadJet_TripleTag_17_ref->Modified();
   BvL_2017_QuadJet_TripleTag_17_ref->cd();
   BvL_2017_QuadJet_TripleTag_17_ref->SetSelected(BvL_2017_QuadJet_TripleTag_17_ref);
}
