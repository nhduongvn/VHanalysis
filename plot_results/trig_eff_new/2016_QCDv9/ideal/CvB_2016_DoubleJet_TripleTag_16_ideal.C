#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_ideal/CvB_2016_DoubleJet_TripleTag_16_ideal
//=========  (Wed Apr 26 16:41:45 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_ideal", "CvB_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_ideal->Range(-0.2183529,0.3969221,1.171633,0.4811174);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFillStyle(4000);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_CvB__319 = new TH1D("_DoubleJet_TripleTag_ideal_CvB__319","",10,0,1);
   _DoubleJet_TripleTag_ideal_CvB__319->SetBinContent(1,0.4472514);
   _DoubleJet_TripleTag_ideal_CvB__319->SetBinContent(2,0.4362827);
   _DoubleJet_TripleTag_ideal_CvB__319->SetBinContent(3,0.4177298);
   _DoubleJet_TripleTag_ideal_CvB__319->SetBinContent(4,0.4495259);
   _DoubleJet_TripleTag_ideal_CvB__319->SetBinContent(5,0.4552165);
   _DoubleJet_TripleTag_ideal_CvB__319->SetBinContent(6,0.4695707);
   _DoubleJet_TripleTag_ideal_CvB__319->SetBinContent(7,0.4537969);
   _DoubleJet_TripleTag_ideal_CvB__319->SetBinContent(8,0.4509535);
   _DoubleJet_TripleTag_ideal_CvB__319->SetBinContent(9,0.4398318);
   _DoubleJet_TripleTag_ideal_CvB__319->SetBinContent(10,0.4100039);
   _DoubleJet_TripleTag_ideal_CvB__319->SetEntries(4.430163);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4987");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2842");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_CvB__319->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_CvB__319);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_ideal_CvB__319->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_CvB__319->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_ideal_CvB__319->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_ideal_CvB__319->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB__319->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvB__319->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB__319->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_ideal_CvB__319->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB__319->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB__319->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB__319->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvB__319->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB__319->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16_ideal->Modified();
   CvB_2016_DoubleJet_TripleTag_16_ideal->cd();
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetSelected(CvB_2016_DoubleJet_TripleTag_16_ideal);
}
