#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_ref_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18_ref/CvL_2018_QuadJet_TripleTag_18_ref
//=========  (Tue Apr 25 23:01:40 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18_ref = new TCanvas("CvL_2018_QuadJet_TripleTag_18_ref", "CvL_2018_QuadJet_TripleTag_18_ref",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18_ref->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18_ref->Range(-0.2,4.34926,1.133333,6.795112);
   CvL_2018_QuadJet_TripleTag_18_ref->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18_ref->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_ref->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18_ref->SetLogy();
   CvL_2018_QuadJet_TripleTag_18_ref->SetLeftMargin(0.15);
   CvL_2018_QuadJet_TripleTag_18_ref->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvL_ref__45 = new TH1D("_QuadJet_TripleTag_CvL_ref__45","",10,0,1);
   _QuadJet_TripleTag_CvL_ref__45->SetBinContent(1,1874898);
   _QuadJet_TripleTag_CvL_ref__45->SetBinContent(2,571559);
   _QuadJet_TripleTag_CvL_ref__45->SetBinContent(3,175556);
   _QuadJet_TripleTag_CvL_ref__45->SetBinContent(4,103396);
   _QuadJet_TripleTag_CvL_ref__45->SetBinContent(5,81333);
   _QuadJet_TripleTag_CvL_ref__45->SetBinContent(6,78501);
   _QuadJet_TripleTag_CvL_ref__45->SetBinContent(7,89551);
   _QuadJet_TripleTag_CvL_ref__45->SetBinContent(8,120179);
   _QuadJet_TripleTag_CvL_ref__45->SetBinContent(9,186427);
   _QuadJet_TripleTag_CvL_ref__45->SetBinContent(10,440148);
   _QuadJet_TripleTag_CvL_ref__45->SetEntries(3721548);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3721548");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2892");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3362");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvL_ref__45->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvL_ref__45);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_CvL_ref__45->SetLineColor(ci);
   _QuadJet_TripleTag_CvL_ref__45->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_CvL_ref__45->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_CvL_ref__45->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL_ref__45->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL_ref__45->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL_ref__45->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_CvL_ref__45->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL_ref__45->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL_ref__45->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL_ref__45->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL_ref__45->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL_ref__45->Draw("HIST");
   CvL_2018_QuadJet_TripleTag_18_ref->Modified();
   CvL_2018_QuadJet_TripleTag_18_ref->cd();
   CvL_2018_QuadJet_TripleTag_18_ref->SetSelected(CvL_2018_QuadJet_TripleTag_18_ref);
}
