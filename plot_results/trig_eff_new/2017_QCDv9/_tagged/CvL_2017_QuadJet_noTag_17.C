#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_noTag_17()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_noTag_17/CvL_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:21 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_noTag_17 = new TCanvas("CvL_2017_QuadJet_noTag_17", "CvL_2017_QuadJet_noTag_17",0,0,600,600);
   CvL_2017_QuadJet_noTag_17->SetHighLightColor(2);
   CvL_2017_QuadJet_noTag_17->Range(-0.2183529,0.003128502,1.171633,0.006849146);
   CvL_2017_QuadJet_noTag_17->SetFillColor(0);
   CvL_2017_QuadJet_noTag_17->SetFillStyle(4000);
   CvL_2017_QuadJet_noTag_17->SetBorderMode(0);
   CvL_2017_QuadJet_noTag_17->SetBorderSize(2);
   CvL_2017_QuadJet_noTag_17->SetLeftMargin(0.15709);
   CvL_2017_QuadJet_noTag_17->SetRightMargin(0.1234783);
   CvL_2017_QuadJet_noTag_17->SetBottomMargin(0.12);
   CvL_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   CvL_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvL__400 = new TH1D("_QuadJet_noTag_tagged_CvL__400","",10,0,1);
   _QuadJet_noTag_tagged_CvL__400->SetBinContent(1,0.006338887);
   _QuadJet_noTag_tagged_CvL__400->SetBinContent(2,0.004645888);
   _QuadJet_noTag_tagged_CvL__400->SetBinContent(3,0.005958171);
   _QuadJet_noTag_tagged_CvL__400->SetBinContent(4,0.003706594);
   _QuadJet_noTag_tagged_CvL__400->SetBinContent(5,0.004891171);
   _QuadJet_noTag_tagged_CvL__400->SetBinContent(6,0.005141388);
   _QuadJet_noTag_tagged_CvL__400->SetBinContent(7,0.004578564);
   _QuadJet_noTag_tagged_CvL__400->SetBinContent(8,0.005159475);
   _QuadJet_noTag_tagged_CvL__400->SetBinContent(9,0.004705401);
   _QuadJet_noTag_tagged_CvL__400->SetBinContent(10,0.004343294);
   _QuadJet_noTag_tagged_CvL__400->SetEntries(0.04946883);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4811");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2913");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_CvL__400->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_CvL__400);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_CvL__400->SetLineColor(ci);
   _QuadJet_noTag_tagged_CvL__400->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_tagged_CvL__400->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_tagged_CvL__400->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL__400->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvL__400->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL__400->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_CvL__400->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL__400->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL__400->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL__400->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvL__400->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL__400->Draw("HIST");
   CvL_2017_QuadJet_noTag_17->Modified();
   CvL_2017_QuadJet_noTag_17->cd();
   CvL_2017_QuadJet_noTag_17->SetSelected(CvL_2017_QuadJet_noTag_17);
}
