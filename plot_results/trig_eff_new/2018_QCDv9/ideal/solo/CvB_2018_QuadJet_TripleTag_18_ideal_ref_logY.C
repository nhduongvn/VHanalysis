#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18_ideal_ref/CvB_2018_QuadJet_TripleTag_18_ideal_ref
//=========  (Wed Apr 26 16:41:58 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18_ideal_ref = new TCanvas("CvB_2018_QuadJet_TripleTag_18_ideal_ref", "CvB_2018_QuadJet_TripleTag_18_ideal_ref",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->Range(-0.2,3.299683,1.133333,5.104362);
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetFillColor(0);
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderSize(2);
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetLogy();
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetLeftMargin(0.15);
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvB_ref__159 = new TH1D("_QuadJet_TripleTag_ideal_CvB_ref__159","",10,0,1);
   _QuadJet_TripleTag_ideal_CvB_ref__159->SetBinContent(1,44294);
   _QuadJet_TripleTag_ideal_CvB_ref__159->SetBinContent(2,7296);
   _QuadJet_TripleTag_ideal_CvB_ref__159->SetBinContent(3,6042);
   _QuadJet_TripleTag_ideal_CvB_ref__159->SetBinContent(4,7072);
   _QuadJet_TripleTag_ideal_CvB_ref__159->SetBinContent(5,8564);
   _QuadJet_TripleTag_ideal_CvB_ref__159->SetBinContent(6,9905);
   _QuadJet_TripleTag_ideal_CvB_ref__159->SetBinContent(7,14329);
   _QuadJet_TripleTag_ideal_CvB_ref__159->SetBinContent(8,19964);
   _QuadJet_TripleTag_ideal_CvB_ref__159->SetBinContent(9,29217);
   _QuadJet_TripleTag_ideal_CvB_ref__159->SetBinContent(10,18525);
   _QuadJet_TripleTag_ideal_CvB_ref__159->SetEntries(165208);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 165208 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4947");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.353");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvB_ref__159->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvB_ref__159);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvB_ref__159->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvB_ref__159->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_ideal_CvB_ref__159->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvB_ref__159->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__159->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB_ref__159->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__159->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvB_ref__159->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__159->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__159->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__159->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB_ref__159->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__159->Draw("HIST");
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->Modified();
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->cd();
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetSelected(CvB_2018_QuadJet_TripleTag_18_ideal_ref);
}
