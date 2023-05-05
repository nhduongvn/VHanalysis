#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18_ideal_ref/CvL_2018_QuadJet_TripleTag_18_ideal_ref
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18_ideal_ref = new TCanvas("CvL_2018_QuadJet_TripleTag_18_ideal_ref", "CvL_2018_QuadJet_TripleTag_18_ideal_ref",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->Range(-0.2,2.068062,1.133333,3.842567);
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetLogy();
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetLeftMargin(0.15);
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvL_ref__24 = new TH1D("_QuadJet_TripleTag_ideal_CvL_ref__24","",10,0,1);
   _QuadJet_TripleTag_ideal_CvL_ref__24->SetBinContent(1,1022);
   _QuadJet_TripleTag_ideal_CvL_ref__24->SetBinContent(2,458);
   _QuadJet_TripleTag_ideal_CvL_ref__24->SetBinContent(3,352);
   _QuadJet_TripleTag_ideal_CvL_ref__24->SetBinContent(4,375);
   _QuadJet_TripleTag_ideal_CvL_ref__24->SetBinContent(5,420);
   _QuadJet_TripleTag_ideal_CvL_ref__24->SetBinContent(6,435);
   _QuadJet_TripleTag_ideal_CvL_ref__24->SetBinContent(7,536);
   _QuadJet_TripleTag_ideal_CvL_ref__24->SetBinContent(8,662);
   _QuadJet_TripleTag_ideal_CvL_ref__24->SetBinContent(9,1071);
   _QuadJet_TripleTag_ideal_CvL_ref__24->SetBinContent(10,2441);
   _QuadJet_TripleTag_ideal_CvL_ref__24->SetEntries(7772);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7772   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.628");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3355");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvL_ref__24->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvL_ref__24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvL_ref__24->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvL_ref__24->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_ideal_CvL_ref__24->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvL_ref__24->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__24->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL_ref__24->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__24->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvL_ref__24->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__24->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__24->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__24->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL_ref__24->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__24->Draw("HIST");
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->Modified();
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->cd();
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetSelected(CvL_2018_QuadJet_TripleTag_18_ideal_ref);
}
