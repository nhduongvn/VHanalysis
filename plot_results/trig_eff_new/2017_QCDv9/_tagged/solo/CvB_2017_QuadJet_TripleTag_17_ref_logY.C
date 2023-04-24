#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_TripleTag_17_ref_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_TripleTag_17_ref/CvB_2017_QuadJet_TripleTag_17_ref
//=========  (Mon Apr 24 10:39:21 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_TripleTag_17_ref = new TCanvas("CvB_2017_QuadJet_TripleTag_17_ref", "CvB_2017_QuadJet_TripleTag_17_ref",0,0,600,600);
   CvB_2017_QuadJet_TripleTag_17_ref->SetHighLightColor(2);
   CvB_2017_QuadJet_TripleTag_17_ref->Range(-0.2,3.111639,1.133333,4.924451);
   CvB_2017_QuadJet_TripleTag_17_ref->SetFillColor(0);
   CvB_2017_QuadJet_TripleTag_17_ref->SetBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17_ref->SetBorderSize(2);
   CvB_2017_QuadJet_TripleTag_17_ref->SetLogy();
   CvB_2017_QuadJet_TripleTag_17_ref->SetLeftMargin(0.15);
   CvB_2017_QuadJet_TripleTag_17_ref->SetFrameBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvB_ref__423 = new TH1D("_QuadJet_TripleTag_tagged_CvB_ref__423","",10,0,1);
   _QuadJet_TripleTag_tagged_CvB_ref__423->SetBinContent(1,29216);
   _QuadJet_TripleTag_tagged_CvB_ref__423->SetBinContent(2,4885);
   _QuadJet_TripleTag_tagged_CvB_ref__423->SetBinContent(3,3926);
   _QuadJet_TripleTag_tagged_CvB_ref__423->SetBinContent(4,4717);
   _QuadJet_TripleTag_tagged_CvB_ref__423->SetBinContent(5,5426);
   _QuadJet_TripleTag_tagged_CvB_ref__423->SetBinContent(6,6473);
   _QuadJet_TripleTag_tagged_CvB_ref__423->SetBinContent(7,9078);
   _QuadJet_TripleTag_tagged_CvB_ref__423->SetBinContent(8,12489);
   _QuadJet_TripleTag_tagged_CvB_ref__423->SetBinContent(9,17531);
   _QuadJet_TripleTag_tagged_CvB_ref__423->SetBinContent(10,11619);
   _QuadJet_TripleTag_tagged_CvB_ref__423->SetEntries(105360);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 105360 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.484");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3536");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvB_ref__423->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvB_ref__423);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_CvB_ref__423->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvB_ref__423->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_tagged_CvB_ref__423->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_CvB_ref__423->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__423->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB_ref__423->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__423->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_CvB_ref__423->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__423->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__423->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__423->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB_ref__423->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__423->Draw("HIST");
   CvB_2017_QuadJet_TripleTag_17_ref->Modified();
   CvB_2017_QuadJet_TripleTag_17_ref->cd();
   CvB_2017_QuadJet_TripleTag_17_ref->SetSelected(CvB_2017_QuadJet_TripleTag_17_ref);
}
