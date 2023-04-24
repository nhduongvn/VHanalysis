#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_noTag_17_ref/CvL_2017_QuadJet_noTag_17_ref
//=========  (Mon Apr 24 10:39:21 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_noTag_17_ref = new TCanvas("CvL_2017_QuadJet_noTag_17_ref", "CvL_2017_QuadJet_noTag_17_ref",0,0,600,600);
   CvL_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   CvL_2017_QuadJet_noTag_17_ref->Range(-0.2,3.135125,1.133333,4.889746);
   CvL_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   CvL_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   CvL_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   CvL_2017_QuadJet_noTag_17_ref->SetLogy();
   CvL_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   CvL_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   CvL_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvL_ref__402 = new TH1D("_QuadJet_noTag_tagged_CvL_ref__402","",10,0,1);
   _QuadJet_noTag_tagged_CvL_ref__402->SetBinContent(1,12305);
   _QuadJet_noTag_tagged_CvL_ref__402->SetBinContent(2,27336);
   _QuadJet_noTag_tagged_CvL_ref__402->SetBinContent(3,8224);
   _QuadJet_noTag_tagged_CvL_ref__402->SetBinContent(4,5126);
   _QuadJet_noTag_tagged_CvL_ref__402->SetBinContent(5,4089);
   _QuadJet_noTag_tagged_CvL_ref__402->SetBinContent(6,4279);
   _QuadJet_noTag_tagged_CvL_ref__402->SetBinContent(7,4805);
   _QuadJet_noTag_tagged_CvL_ref__402->SetBinContent(8,6396);
   _QuadJet_noTag_tagged_CvL_ref__402->SetBinContent(9,9776);
   _QuadJet_noTag_tagged_CvL_ref__402->SetBinContent(10,23024);
   _QuadJet_noTag_tagged_CvL_ref__402->SetEntries(105360);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 105360 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4833");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3564");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_CvL_ref__402->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_CvL_ref__402);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_CvL_ref__402->SetLineColor(ci);
   _QuadJet_noTag_tagged_CvL_ref__402->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_tagged_CvL_ref__402->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_tagged_CvL_ref__402->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL_ref__402->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvL_ref__402->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL_ref__402->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_CvL_ref__402->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL_ref__402->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL_ref__402->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL_ref__402->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvL_ref__402->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL_ref__402->Draw("HIST");
   CvL_2017_QuadJet_noTag_17_ref->Modified();
   CvL_2017_QuadJet_noTag_17_ref->cd();
   CvL_2017_QuadJet_noTag_17_ref->SetSelected(CvL_2017_QuadJet_noTag_17_ref);
}
