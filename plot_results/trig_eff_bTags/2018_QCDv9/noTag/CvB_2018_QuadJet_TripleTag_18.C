#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18/CvB_2018_QuadJet_TripleTag_18
//=========  (Thu Apr 27 10:20:00 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18 = new TCanvas("CvB_2018_QuadJet_TripleTag_18", "CvB_2018_QuadJet_TripleTag_18",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18->Range(-0.2183529,0.02319292,1.171633,0.1151726);
   CvB_2018_QuadJet_TripleTag_18->SetFillColor(0);
   CvB_2018_QuadJet_TripleTag_18->SetFillStyle(4000);
   CvB_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   CvB_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15709);
   CvB_2018_QuadJet_TripleTag_18->SetRightMargin(0.1234783);
   CvB_2018_QuadJet_TripleTag_18->SetBottomMargin(0.12);
   CvB_2018_QuadJet_TripleTag_18->SetFrameFillStyle(1000);
   CvB_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18->SetFrameFillStyle(1000);
   CvB_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvB__49 = new TH1D("_QuadJet_TripleTag_CvB__49","",10,0,1);
   _QuadJet_TripleTag_CvB__49->SetBinContent(1,0.1025582);
   _QuadJet_TripleTag_CvB__49->SetBinContent(2,0.09670975);
   _QuadJet_TripleTag_CvB__49->SetBinContent(3,0.09588053);
   _QuadJet_TripleTag_CvB__49->SetBinContent(4,0.09071609);
   _QuadJet_TripleTag_CvB__49->SetBinContent(5,0.08256702);
   _QuadJet_TripleTag_CvB__49->SetBinContent(6,0.07233009);
   _QuadJet_TripleTag_CvB__49->SetBinContent(7,0.06182219);
   _QuadJet_TripleTag_CvB__49->SetBinContent(8,0.04899392);
   _QuadJet_TripleTag_CvB__49->SetBinContent(9,0.03874037);
   _QuadJet_TripleTag_CvB__49->SetBinContent(10,0.03748418);
   _QuadJet_TripleTag_CvB__49->SetEntries(0.7278024);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4091");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2668");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvB__49->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvB__49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_CvB__49->SetLineColor(ci);
   _QuadJet_TripleTag_CvB__49->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_CvB__49->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_CvB__49->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__49->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__49->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__49->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_CvB__49->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__49->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__49->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__49->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__49->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__49->Draw("HIST");
   CvB_2018_QuadJet_TripleTag_18->Modified();
   CvB_2018_QuadJet_TripleTag_18->cd();
   CvB_2018_QuadJet_TripleTag_18->SetSelected(CvB_2018_QuadJet_TripleTag_18);
}
