#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_noTag_17_tagged_ref_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_noTag_17_tagged_ref/CvB_2017_QuadJet_noTag_17_tagged_ref
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_noTag_17_tagged_ref = new TCanvas("CvB_2017_QuadJet_noTag_17_tagged_ref", "CvB_2017_QuadJet_noTag_17_tagged_ref",0,0,600,600);
   CvB_2017_QuadJet_noTag_17_tagged_ref->SetHighLightColor(2);
   CvB_2017_QuadJet_noTag_17_tagged_ref->Range(-0.2,1.644965,1.133333,3.828548);
   CvB_2017_QuadJet_noTag_17_tagged_ref->SetFillColor(0);
   CvB_2017_QuadJet_noTag_17_tagged_ref->SetBorderMode(0);
   CvB_2017_QuadJet_noTag_17_tagged_ref->SetBorderSize(2);
   CvB_2017_QuadJet_noTag_17_tagged_ref->SetLogy();
   CvB_2017_QuadJet_noTag_17_tagged_ref->SetLeftMargin(0.15);
   CvB_2017_QuadJet_noTag_17_tagged_ref->SetFrameBorderMode(0);
   CvB_2017_QuadJet_noTag_17_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvB_ref__108 = new TH1D("_QuadJet_noTag_tagged_CvB_ref__108","",10,0,1);
   _QuadJet_noTag_tagged_CvB_ref__108->SetBinContent(1,2151);
   _QuadJet_noTag_tagged_CvB_ref__108->SetBinContent(2,431);
   _QuadJet_noTag_tagged_CvB_ref__108->SetBinContent(3,442);
   _QuadJet_noTag_tagged_CvB_ref__108->SetBinContent(4,374);
   _QuadJet_noTag_tagged_CvB_ref__108->SetBinContent(5,353);
   _QuadJet_noTag_tagged_CvB_ref__108->SetBinContent(6,287);
   _QuadJet_noTag_tagged_CvB_ref__108->SetBinContent(7,241);
   _QuadJet_noTag_tagged_CvB_ref__108->SetBinContent(8,146);
   _QuadJet_noTag_tagged_CvB_ref__108->SetBinContent(9,400);
   _QuadJet_noTag_tagged_CvB_ref__108->SetBinContent(10,203);
   _QuadJet_noTag_tagged_CvB_ref__108->SetEntries(5028);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5028   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2905");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.307");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_CvB_ref__108->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_CvB_ref__108);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_CvB_ref__108->SetLineColor(ci);
   _QuadJet_noTag_tagged_CvB_ref__108->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_tagged_CvB_ref__108->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_tagged_CvB_ref__108->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB_ref__108->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvB_ref__108->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB_ref__108->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_CvB_ref__108->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB_ref__108->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB_ref__108->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB_ref__108->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvB_ref__108->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB_ref__108->Draw("HIST");
   CvB_2017_QuadJet_noTag_17_tagged_ref->Modified();
   CvB_2017_QuadJet_noTag_17_tagged_ref->cd();
   CvB_2017_QuadJet_noTag_17_tagged_ref->SetSelected(CvB_2017_QuadJet_noTag_17_tagged_ref);
}
