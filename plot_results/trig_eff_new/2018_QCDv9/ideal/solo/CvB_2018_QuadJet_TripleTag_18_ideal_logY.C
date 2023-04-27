#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18_ideal_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18_ideal/CvB_2018_QuadJet_TripleTag_18_ideal
//=========  (Wed Apr 26 16:41:58 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18_ideal = new TCanvas("CvB_2018_QuadJet_TripleTag_18_ideal", "CvB_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18_ideal->Range(-0.2,2.751929,1.133333,4.587713);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetLogy();
   CvB_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvB__158 = new TH1D("_QuadJet_TripleTag_ideal_CvB__158","",10,0,1);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(1,13384);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(2,2093);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(3,1724);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(4,2216);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(5,2884);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(6,3246);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(7,4442);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(8,5953);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(9,8529);
   _QuadJet_TripleTag_ideal_CvB__158->SetBinContent(10,4725);
   _QuadJet_TripleTag_ideal_CvB__158->SetEntries(49196);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 49196  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4853");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3488");
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
   CvB_2018_QuadJet_TripleTag_18_ideal->Modified();
   CvB_2018_QuadJet_TripleTag_18_ideal->cd();
   CvB_2018_QuadJet_TripleTag_18_ideal->SetSelected(CvB_2018_QuadJet_TripleTag_18_ideal);
}
