#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16/CvB_2016_DoubleJet_TripleTag_16
//=========  (Wed Apr 26 16:41:42 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16 = new TCanvas("CvB_2016_DoubleJet_TripleTag_16", "CvB_2016_DoubleJet_TripleTag_16",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16->Range(-0.2,3.338677,1.133333,5.173083);
   CvB_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_CvB__104 = new TH1D("_DoubleJet_TripleTag_CvB__104","",10,0,1);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(1,46244);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(2,8196);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(3,7179);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(4,6655);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(5,7903);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(6,10010);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(7,15229);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(8,27304);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(9,51534);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(10,23202);
   _DoubleJet_TripleTag_CvB__104->SetEntries(203456);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 203456 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5476");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3496");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_CvB__104->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_CvB__104);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_CvB__104->SetLineColor(ci);
   _DoubleJet_TripleTag_CvB__104->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_CvB__104->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_CvB__104->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvB__104->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_CvB__104->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvB__104->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_CvB__104->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvB__104->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvB__104->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvB__104->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_CvB__104->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvB__104->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16->Modified();
   CvB_2016_DoubleJet_TripleTag_16->cd();
   CvB_2016_DoubleJet_TripleTag_16->SetSelected(CvB_2016_DoubleJet_TripleTag_16);
}
