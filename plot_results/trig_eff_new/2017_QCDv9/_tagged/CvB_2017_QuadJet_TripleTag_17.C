#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_TripleTag_17()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_TripleTag_17/CvB_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:21 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_TripleTag_17 = new TCanvas("CvB_2017_QuadJet_TripleTag_17", "CvB_2017_QuadJet_TripleTag_17",0,0,600,600);
   CvB_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   CvB_2017_QuadJet_TripleTag_17->Range(-0.2183529,0.1181171,1.171633,0.1841371);
   CvB_2017_QuadJet_TripleTag_17->SetFillColor(0);
   CvB_2017_QuadJet_TripleTag_17->SetFillStyle(4000);
   CvB_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   CvB_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15709);
   CvB_2017_QuadJet_TripleTag_17->SetRightMargin(0.1234783);
   CvB_2017_QuadJet_TripleTag_17->SetBottomMargin(0.12);
   CvB_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvB__421 = new TH1D("_QuadJet_TripleTag_tagged_CvB__421","",10,0,1);
   _QuadJet_TripleTag_tagged_CvB__421->SetBinContent(1,0.1675794);
   _QuadJet_TripleTag_tagged_CvB__421->SetBinContent(2,0.1482088);
   _QuadJet_TripleTag_tagged_CvB__421->SetBinContent(3,0.1283749);
   _QuadJet_TripleTag_tagged_CvB__421->SetBinContent(4,0.1598474);
   _QuadJet_TripleTag_tagged_CvB__421->SetBinContent(5,0.1750829);
   _QuadJet_TripleTag_tagged_CvB__421->SetBinContent(6,0.1693187);
   _QuadJet_TripleTag_tagged_CvB__421->SetBinContent(7,0.168319);
   _QuadJet_TripleTag_tagged_CvB__421->SetBinContent(8,0.157899);
   _QuadJet_TripleTag_tagged_CvB__421->SetBinContent(9,0.1672466);
   _QuadJet_TripleTag_tagged_CvB__421->SetBinContent(10,0.1480334);
   _QuadJet_TripleTag_tagged_CvB__421->SetEntries(1.58991);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5039");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2845");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvB__421->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvB__421);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_CvB__421->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvB__421->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_tagged_CvB__421->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_tagged_CvB__421->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__421->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB__421->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__421->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_CvB__421->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__421->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__421->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__421->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB__421->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__421->Draw("HIST");
   CvB_2017_QuadJet_TripleTag_17->Modified();
   CvB_2017_QuadJet_TripleTag_17->cd();
   CvB_2017_QuadJet_TripleTag_17->SetSelected(CvB_2017_QuadJet_TripleTag_17);
}
