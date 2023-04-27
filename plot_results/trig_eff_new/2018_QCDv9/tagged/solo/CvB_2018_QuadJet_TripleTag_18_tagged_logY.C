#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18_tagged_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18_tagged/CvB_2018_QuadJet_TripleTag_18_tagged
//=========  (Thu Apr 27 10:18:10 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18_tagged = new TCanvas("CvB_2018_QuadJet_TripleTag_18_tagged", "CvB_2018_QuadJet_TripleTag_18_tagged",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18_tagged->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18_tagged->Range(-0.2,2.763054,1.133333,4.597033);
   CvB_2018_QuadJet_TripleTag_18_tagged->SetFillColor(0);
   CvB_2018_QuadJet_TripleTag_18_tagged->SetBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_tagged->SetBorderSize(2);
   CvB_2018_QuadJet_TripleTag_18_tagged->SetLogy();
   CvB_2018_QuadJet_TripleTag_18_tagged->SetLeftMargin(0.15);
   CvB_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvB__104 = new TH1D("_QuadJet_TripleTag_tagged_CvB__104","",10,0,1);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(1,13680);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(2,2154);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(3,1768);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(4,2280);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(5,2962);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(6,3326);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(7,4531);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(8,6064);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(9,8647);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(10,4784);
   _QuadJet_TripleTag_tagged_CvB__104->SetEntries(50196);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 50196  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4841");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3486");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvB__104->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvB__104);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_CvB__104->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvB__104->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_tagged_CvB__104->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_CvB__104->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__104->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB__104->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__104->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_CvB__104->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__104->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__104->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__104->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB__104->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__104->Draw("HIST");
   CvB_2018_QuadJet_TripleTag_18_tagged->Modified();
   CvB_2018_QuadJet_TripleTag_18_tagged->cd();
   CvB_2018_QuadJet_TripleTag_18_tagged->SetSelected(CvB_2018_QuadJet_TripleTag_18_tagged);
}
