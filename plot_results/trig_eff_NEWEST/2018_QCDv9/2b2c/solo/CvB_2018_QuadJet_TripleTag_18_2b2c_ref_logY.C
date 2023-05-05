#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18_2b2c_ref_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18_2b2c_ref/CvB_2018_QuadJet_TripleTag_18_2b2c_ref
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18_2b2c_ref = new TCanvas("CvB_2018_QuadJet_TripleTag_18_2b2c_ref", "CvB_2018_QuadJet_TripleTag_18_2b2c_ref",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18_2b2c_ref->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18_2b2c_ref->Range(-0.2,3.329471,1.133333,5.134844);
   CvB_2018_QuadJet_TripleTag_18_2b2c_ref->SetFillColor(0);
   CvB_2018_QuadJet_TripleTag_18_2b2c_ref->SetBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_2b2c_ref->SetBorderSize(2);
   CvB_2018_QuadJet_TripleTag_18_2b2c_ref->SetLogy();
   CvB_2018_QuadJet_TripleTag_18_2b2c_ref->SetLeftMargin(0.15);
   CvB_2018_QuadJet_TripleTag_18_2b2c_ref->SetFrameBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_2b2c_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_CvB_ref__81 = new TH1D("_QuadJet_TripleTag_2b2c_CvB_ref__81","",10,0,1);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->SetBinContent(1,47507);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->SetBinContent(2,7744);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->SetBinContent(3,6472);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->SetBinContent(4,7549);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->SetBinContent(5,9153);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->SetBinContent(6,10526);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->SetBinContent(7,15337);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->SetBinContent(8,21293);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->SetBinContent(9,31273);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->SetBinContent(10,19922);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->SetEntries(176776);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_2b2c_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 176776 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4947");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3533");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_CvB_ref__81->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_CvB_ref__81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_CvB_ref__81->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_2b2c_CvB_ref__81->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_CvB_ref__81->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB_ref__81->Draw("HIST");
   CvB_2018_QuadJet_TripleTag_18_2b2c_ref->Modified();
   CvB_2018_QuadJet_TripleTag_18_2b2c_ref->cd();
   CvB_2018_QuadJet_TripleTag_18_2b2c_ref->SetSelected(CvB_2018_QuadJet_TripleTag_18_2b2c_ref);
}
