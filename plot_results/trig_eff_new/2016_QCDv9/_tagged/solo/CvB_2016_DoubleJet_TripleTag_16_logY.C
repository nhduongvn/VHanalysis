#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16/CvB_2016_DoubleJet_TripleTag_16
//=========  (Mon Apr 24 10:39:21 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16 = new TCanvas("CvB_2016_DoubleJet_TripleTag_16", "CvB_2016_DoubleJet_TripleTag_16",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16->Range(-0.2,2.661575,1.133333,4.415395);
   CvB_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_CvB__416 = new TH1D("_DoubleJet_TripleTag_tagged_CvB__416","",10,0,1);
   _DoubleJet_TripleTag_tagged_CvB__416->SetBinContent(1,9172);
   _DoubleJet_TripleTag_tagged_CvB__416->SetBinContent(2,1661);
   _DoubleJet_TripleTag_tagged_CvB__416->SetBinContent(3,1374);
   _DoubleJet_TripleTag_tagged_CvB__416->SetBinContent(4,1710);
   _DoubleJet_TripleTag_tagged_CvB__416->SetBinContent(5,1983);
   _DoubleJet_TripleTag_tagged_CvB__416->SetBinContent(6,2444);
   _DoubleJet_TripleTag_tagged_CvB__416->SetBinContent(7,3180);
   _DoubleJet_TripleTag_tagged_CvB__416->SetBinContent(8,4510);
   _DoubleJet_TripleTag_tagged_CvB__416->SetBinContent(9,6084);
   _DoubleJet_TripleTag_tagged_CvB__416->SetBinContent(10,3382);
   _DoubleJet_TripleTag_tagged_CvB__416->SetEntries(35500);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 35500  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4904");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.345");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_CvB__416->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_CvB__416);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_CvB__416->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_CvB__416->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_tagged_CvB__416->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_tagged_CvB__416->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvB__416->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvB__416->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvB__416->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_CvB__416->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvB__416->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvB__416->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvB__416->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvB__416->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvB__416->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16->Modified();
   CvB_2016_DoubleJet_TripleTag_16->cd();
   CvB_2016_DoubleJet_TripleTag_16->SetSelected(CvB_2016_DoubleJet_TripleTag_16);
}
