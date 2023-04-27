#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18/CvL_2018_QuadJet_TripleTag_18
//=========  (Thu Apr 27 10:20:00 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18 = new TCanvas("CvL_2018_QuadJet_TripleTag_18", "CvL_2018_QuadJet_TripleTag_18",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18->Range(-0.2183529,0.02068688,1.171633,0.1179752);
   CvL_2018_QuadJet_TripleTag_18->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18->SetFillStyle(4000);
   CvL_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15709);
   CvL_2018_QuadJet_TripleTag_18->SetRightMargin(0.1234783);
   CvL_2018_QuadJet_TripleTag_18->SetBottomMargin(0.12);
   CvL_2018_QuadJet_TripleTag_18->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvL__43 = new TH1D("_QuadJet_TripleTag_CvL__43","",10,0,1);
   _QuadJet_TripleTag_CvL__43->SetBinContent(1,0.03580297);
   _QuadJet_TripleTag_CvL__43->SetBinContent(2,0.05222468);
   _QuadJet_TripleTag_CvL__43->SetBinContent(3,0.06444506);
   _QuadJet_TripleTag_CvL__43->SetBinContent(4,0.07289743);
   _QuadJet_TripleTag_CvL__43->SetBinContent(5,0.08206119);
   _QuadJet_TripleTag_CvL__43->SetBinContent(6,0.08777553);
   _QuadJet_TripleTag_CvL__43->SetBinContent(7,0.09360941);
   _QuadJet_TripleTag_CvL__43->SetBinContent(8,0.09772496);
   _QuadJet_TripleTag_CvL__43->SetBinContent(9,0.1005897);
   _QuadJet_TripleTag_CvL__43->SetBinContent(10,0.1046328);
   _QuadJet_TripleTag_CvL__43->SetEntries(0.7917637);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5753");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2683");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvL__43->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvL__43);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_CvL__43->SetLineColor(ci);
   _QuadJet_TripleTag_CvL__43->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_CvL__43->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_CvL__43->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__43->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL__43->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__43->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_CvL__43->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__43->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__43->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__43->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL__43->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__43->Draw("HIST");
   CvL_2018_QuadJet_TripleTag_18->Modified();
   CvL_2018_QuadJet_TripleTag_18->cd();
   CvL_2018_QuadJet_TripleTag_18->SetSelected(CvL_2018_QuadJet_TripleTag_18);
}
