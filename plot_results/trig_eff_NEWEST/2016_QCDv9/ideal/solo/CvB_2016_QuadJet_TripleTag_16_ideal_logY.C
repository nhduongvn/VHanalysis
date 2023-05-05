#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_ideal/CvB_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_ideal = new TCanvas("CvB_2016_QuadJet_TripleTag_16_ideal", "CvB_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_ideal->Range(-0.2,1.610455,1.133333,3.63504);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetLogy();
   CvB_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvB__50 = new TH1D("_QuadJet_TripleTag_ideal_CvB__50","",10,0,1);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(1,1429);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(2,303);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(3,278);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(4,262);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(5,233);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(6,173);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(7,130);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(8,153);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(9,274);
   _QuadJet_TripleTag_ideal_CvB__50->SetBinContent(10,133);
   _QuadJet_TripleTag_ideal_CvB__50->SetEntries(3368);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3368   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2947");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3089");
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
   CvB_2016_QuadJet_TripleTag_16_ideal->Modified();
   CvB_2016_QuadJet_TripleTag_16_ideal->cd();
   CvB_2016_QuadJet_TripleTag_16_ideal->SetSelected(CvB_2016_QuadJet_TripleTag_16_ideal);
}
