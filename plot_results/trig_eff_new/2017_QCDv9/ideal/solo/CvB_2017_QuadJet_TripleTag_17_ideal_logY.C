#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_TripleTag_17_ideal_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_TripleTag_17_ideal/CvB_2017_QuadJet_TripleTag_17_ideal
//=========  (Wed Apr 26 16:41:51 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_TripleTag_17_ideal = new TCanvas("CvB_2017_QuadJet_TripleTag_17_ideal", "CvB_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   CvB_2017_QuadJet_TripleTag_17_ideal->Range(-0.2,2.232292,1.133333,4.182614);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetLogy();
   CvB_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvB__158 = new TH1D("_QuadJet_TripleTag_ideal_CvB__158","",10,0,1);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(1,5129);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(2,763);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(3,535);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(4,799);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(5,997);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(6,1146);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(7,1623);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(8,2080);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(9,3076);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(10,1816);
   _QuadJet_TripleTag_ideal_CvB__158->SetEntries(17964);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 17964  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4803");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3535");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvB__158->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvB__158);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvB__158->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvB__158->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_ideal_CvB__158->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvB__158->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__158->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__158->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__158->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvB__158->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__158->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__158->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__158->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__158->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__158->Draw("HIST");
   CvB_2017_QuadJet_TripleTag_17_ideal->Modified();
   CvB_2017_QuadJet_TripleTag_17_ideal->cd();
   CvB_2017_QuadJet_TripleTag_17_ideal->SetSelected(CvB_2017_QuadJet_TripleTag_17_ideal);
}
