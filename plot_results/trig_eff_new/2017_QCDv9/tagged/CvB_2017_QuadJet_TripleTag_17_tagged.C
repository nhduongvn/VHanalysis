#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_TripleTag_17_tagged()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_TripleTag_17_tagged/CvB_2017_QuadJet_TripleTag_17_tagged
//=========  (Tue Apr 25 23:02:18 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_TripleTag_17_tagged = new TCanvas("CvB_2017_QuadJet_TripleTag_17_tagged", "CvB_2017_QuadJet_TripleTag_17_tagged",0,0,600,600);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetHighLightColor(2);
   CvB_2017_QuadJet_TripleTag_17_tagged->Range(-0.2183529,0.1187586,1.171633,0.1842693);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetFillColor(0);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetFillStyle(4000);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetBorderSize(2);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetLeftMargin(0.15709);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetRightMargin(0.1234783);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetBottomMargin(0.12);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvB__103 = new TH1D("_QuadJet_TripleTag_tagged_CvB__103","",10,0,1);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(1,0.1671455);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(2,0.1488073);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(3,0.1289372);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(4,0.1584992);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(5,0.175285);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(6,0.1686947);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(7,0.1686924);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(8,0.1572196);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(9,0.1651802);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(10,0.1453569);
   _QuadJet_TripleTag_tagged_CvB__103->SetEntries(1.583818);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5026");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2841");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvB__103->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvB__103);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_CvB__103->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvB__103->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_tagged_CvB__103->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_tagged_CvB__103->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__103->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB__103->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__103->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_CvB__103->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__103->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__103->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__103->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB__103->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__103->Draw("HIST");
   CvB_2017_QuadJet_TripleTag_17_tagged->Modified();
   CvB_2017_QuadJet_TripleTag_17_tagged->cd();
   CvB_2017_QuadJet_TripleTag_17_tagged->SetSelected(CvB_2017_QuadJet_TripleTag_17_tagged);
}
