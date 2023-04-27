#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_noTag_18_tagged()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_noTag_18_tagged/CvB_2018_QuadJet_noTag_18_tagged
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_noTag_18_tagged = new TCanvas("CvB_2018_QuadJet_noTag_18_tagged", "CvB_2018_QuadJet_noTag_18_tagged",0,0,600,600);
   CvB_2018_QuadJet_noTag_18_tagged->SetHighLightColor(2);
   CvB_2018_QuadJet_noTag_18_tagged->Range(-0.2183529,-0.001189532,1.171633,0.008723236);
   CvB_2018_QuadJet_noTag_18_tagged->SetFillColor(0);
   CvB_2018_QuadJet_noTag_18_tagged->SetFillStyle(4000);
   CvB_2018_QuadJet_noTag_18_tagged->SetBorderMode(0);
   CvB_2018_QuadJet_noTag_18_tagged->SetBorderSize(2);
   CvB_2018_QuadJet_noTag_18_tagged->SetLeftMargin(0.15709);
   CvB_2018_QuadJet_noTag_18_tagged->SetRightMargin(0.1234783);
   CvB_2018_QuadJet_noTag_18_tagged->SetBottomMargin(0.12);
   CvB_2018_QuadJet_noTag_18_tagged->SetFrameFillStyle(1000);
   CvB_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   CvB_2018_QuadJet_noTag_18_tagged->SetFrameFillStyle(1000);
   CvB_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvB__106 = new TH1D("_QuadJet_noTag_tagged_CvB__106","",10,0,1);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(1,0.003024471);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(2,0.005479452);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(3,0.001340483);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(4,0.00295858);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(5,0.006932409);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(6,0.004291845);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(7,0.005141388);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(8,0.003389831);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(9,0.00736377);
   _QuadJet_noTag_tagged_CvB__106->SetEntries(0.03992223);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5002");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2597");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_CvB__106->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_CvB__106);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_CvB__106->SetLineColor(ci);
   _QuadJet_noTag_tagged_CvB__106->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_tagged_CvB__106->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_tagged_CvB__106->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__106->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvB__106->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__106->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_CvB__106->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__106->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__106->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__106->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvB__106->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__106->Draw("HIST");
   CvB_2018_QuadJet_noTag_18_tagged->Modified();
   CvB_2018_QuadJet_noTag_18_tagged->cd();
   CvB_2018_QuadJet_noTag_18_tagged->SetSelected(CvB_2018_QuadJet_noTag_18_tagged);
}
