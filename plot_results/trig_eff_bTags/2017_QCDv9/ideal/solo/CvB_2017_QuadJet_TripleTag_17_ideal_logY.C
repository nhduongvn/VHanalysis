#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_TripleTag_17_ideal_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_TripleTag_17_ideal/CvB_2017_QuadJet_TripleTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_TripleTag_17_ideal = new TCanvas("CvB_2017_QuadJet_TripleTag_17_ideal", "CvB_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   CvB_2017_QuadJet_TripleTag_17_ideal->Range(-0.2,0.6421381,1.133333,2.97137);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetLogy();
   CvB_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvB__50 = new TH1D("_QuadJet_TripleTag_ideal_CvB__50","",10,0,1);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(1,289);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(2,55);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(3,50);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(4,39);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(5,53);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(6,43);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(7,42);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(8,15);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(9,56);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(10,26);
   _QuadJet_TripleTag_ideal_CvB__50->SetEntries(668);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 668    ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2954");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   0.31");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvB__50->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvB__50);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvB__50->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvB__50->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_ideal_CvB__50->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvB__50->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__50->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__50->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__50->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvB__50->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__50->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__50->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__50->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__50->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__50->Draw("HIST");
   CvB_2017_QuadJet_TripleTag_17_ideal->Modified();
   CvB_2017_QuadJet_TripleTag_17_ideal->cd();
   CvB_2017_QuadJet_TripleTag_17_ideal->SetSelected(CvB_2017_QuadJet_TripleTag_17_ideal);
}
