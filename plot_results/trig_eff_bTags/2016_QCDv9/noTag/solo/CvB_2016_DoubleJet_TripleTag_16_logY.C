#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16/CvB_2016_DoubleJet_TripleTag_16
//=========  (Thu Apr 27 10:19:45 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16 = new TCanvas("CvB_2016_DoubleJet_TripleTag_16", "CvB_2016_DoubleJet_TripleTag_16",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16->Range(-0.2,3.342461,1.133333,5.176719);
   CvB_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_CvB__104 = new TH1D("_DoubleJet_TripleTag_CvB__104","",10,0,1);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(1,46660);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(2,8264);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(3,7257);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(4,6713);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(5,7958);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(6,10081);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(7,15352);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(8,27547);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(9,51969);
   _DoubleJet_TripleTag_CvB__104->SetBinContent(10,23415);
   _DoubleJet_TripleTag_CvB__104->SetEntries(205216);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 205216 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5475");
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
