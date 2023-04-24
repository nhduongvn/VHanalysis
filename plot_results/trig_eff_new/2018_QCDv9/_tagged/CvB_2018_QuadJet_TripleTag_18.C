#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18/CvB_2018_QuadJet_TripleTag_18
//=========  (Mon Apr 24 10:45:57 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18 = new TCanvas("CvB_2018_QuadJet_TripleTag_18", "CvB_2018_QuadJet_TripleTag_18",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18->Range(-0.2183529,0.1943083,1.171633,0.2639533);
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
   
   TH1D *_QuadJet_TripleTag_tagged_CvB__103 = new TH1D("_QuadJet_TripleTag_tagged_CvB__103","",10,0,1);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(1,0.2317414);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(2,0.2197926);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(3,0.2167875);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(4,0.2394202);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(5,0.2544019);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(6,0.250322);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(7,0.2403088);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(8,0.2400207);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(9,0.244457);
   _QuadJet_TripleTag_tagged_CvB__103->SetBinContent(10,0.2051293);
   _QuadJet_TripleTag_tagged_CvB__103->SetEntries(2.342382);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.501");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2817");
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
   CvB_2018_QuadJet_TripleTag_18->Modified();
   CvB_2018_QuadJet_TripleTag_18->cd();
   CvB_2018_QuadJet_TripleTag_18->SetSelected(CvB_2018_QuadJet_TripleTag_18);
}
