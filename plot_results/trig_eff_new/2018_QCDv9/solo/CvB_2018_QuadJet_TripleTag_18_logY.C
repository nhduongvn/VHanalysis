#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18/CvB_2018_QuadJet_TripleTag_18
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18 = new TCanvas("CvB_2018_QuadJet_TripleTag_18", "CvB_2018_QuadJet_TripleTag_18",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18->Range(-0.2,-2.748352,1.133333,1.724871);
   CvB_2018_QuadJet_TripleTag_18->SetFillColor(0);
   CvB_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   CvB_2018_QuadJet_TripleTag_18->SetLogy();
   CvB_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15);
   CvB_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvB__212 = new TH1D("_QuadJet_TripleTag_CvB__212","",10,0,1);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      0");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvB__212->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvB__212);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_CvB__212->SetLineColor(ci);
   _QuadJet_TripleTag_CvB__212->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_CvB__212->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_CvB__212->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__212->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__212->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__212->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_CvB__212->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__212->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__212->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__212->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__212->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__212->Draw("HIST");
   CvB_2018_QuadJet_TripleTag_18->Modified();
   CvB_2018_QuadJet_TripleTag_18->cd();
   CvB_2018_QuadJet_TripleTag_18->SetSelected(CvB_2018_QuadJet_TripleTag_18);
}
