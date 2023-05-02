#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTagV3_18_ideal_ref_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTagV3_18_ideal_ref/CvL_2018_QuadJet_noTagV3_18_ideal_ref
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTagV3_18_ideal_ref = new TCanvas("CvL_2018_QuadJet_noTagV3_18_ideal_ref", "CvL_2018_QuadJet_noTagV3_18_ideal_ref",0,0,600,600);
   CvL_2018_QuadJet_noTagV3_18_ideal_ref->SetHighLightColor(2);
   CvL_2018_QuadJet_noTagV3_18_ideal_ref->Range(-0.2,1.873992,1.133333,3.626253);
   CvL_2018_QuadJet_noTagV3_18_ideal_ref->SetFillColor(0);
   CvL_2018_QuadJet_noTagV3_18_ideal_ref->SetBorderMode(0);
   CvL_2018_QuadJet_noTagV3_18_ideal_ref->SetBorderSize(2);
   CvL_2018_QuadJet_noTagV3_18_ideal_ref->SetLogy();
   CvL_2018_QuadJet_noTagV3_18_ideal_ref->SetLeftMargin(0.15);
   CvL_2018_QuadJet_noTagV3_18_ideal_ref->SetFrameBorderMode(0);
   CvL_2018_QuadJet_noTagV3_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV3_ideal_CvL_ref__138 = new TH1D("_QuadJet_noTagV3_ideal_CvL_ref__138","",10,0,1);
   _QuadJet_noTagV3_ideal_CvL_ref__138->SetBinContent(1,685);
   _QuadJet_noTagV3_ideal_CvL_ref__138->SetBinContent(2,316);
   _QuadJet_noTagV3_ideal_CvL_ref__138->SetBinContent(3,224);
   _QuadJet_noTagV3_ideal_CvL_ref__138->SetBinContent(4,228);
   _QuadJet_noTagV3_ideal_CvL_ref__138->SetBinContent(5,254);
   _QuadJet_noTagV3_ideal_CvL_ref__138->SetBinContent(6,279);
   _QuadJet_noTagV3_ideal_CvL_ref__138->SetBinContent(7,322);
   _QuadJet_noTagV3_ideal_CvL_ref__138->SetBinContent(8,410);
   _QuadJet_noTagV3_ideal_CvL_ref__138->SetBinContent(9,683);
   _QuadJet_noTagV3_ideal_CvL_ref__138->SetBinContent(10,1491);
   _QuadJet_noTagV3_ideal_CvL_ref__138->SetEntries(4892);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV3_ideal_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4892   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6178");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3396");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV3_ideal_CvL_ref__138->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV3_ideal_CvL_ref__138);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV3_ideal_CvL_ref__138->SetLineColor(ci);
   _QuadJet_noTagV3_ideal_CvL_ref__138->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTagV3_ideal_CvL_ref__138->GetXaxis()->SetRange(1,10);
   _QuadJet_noTagV3_ideal_CvL_ref__138->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_CvL_ref__138->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV3_ideal_CvL_ref__138->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_CvL_ref__138->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV3_ideal_CvL_ref__138->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_CvL_ref__138->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_CvL_ref__138->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_CvL_ref__138->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV3_ideal_CvL_ref__138->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_CvL_ref__138->Draw("HIST");
   CvL_2018_QuadJet_noTagV3_18_ideal_ref->Modified();
   CvL_2018_QuadJet_noTagV3_18_ideal_ref->cd();
   CvL_2018_QuadJet_noTagV3_18_ideal_ref->SetSelected(CvL_2018_QuadJet_noTagV3_18_ideal_ref);
}
