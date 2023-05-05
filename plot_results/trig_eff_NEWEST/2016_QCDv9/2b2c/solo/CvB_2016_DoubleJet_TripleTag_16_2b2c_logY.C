#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_2b2c_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_2b2c/CvB_2016_DoubleJet_TripleTag_16_2b2c
//=========  (Wed May  3 17:53:45 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_2b2c = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_2b2c", "CvB_2016_DoubleJet_TripleTag_16_2b2c",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->Range(-0.2,2.673484,1.133333,4.42669);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_2b2c_CvB__161 = new TH1D("_DoubleJet_TripleTag_2b2c_CvB__161","",10,0,1);
   _DoubleJet_TripleTag_2b2c_CvB__161->SetBinContent(1,9415);
   _DoubleJet_TripleTag_2b2c_CvB__161->SetBinContent(2,1737);
   _DoubleJet_TripleTag_2b2c_CvB__161->SetBinContent(3,1412);
   _DoubleJet_TripleTag_2b2c_CvB__161->SetBinContent(4,1787);
   _DoubleJet_TripleTag_2b2c_CvB__161->SetBinContent(5,2032);
   _DoubleJet_TripleTag_2b2c_CvB__161->SetBinContent(6,2479);
   _DoubleJet_TripleTag_2b2c_CvB__161->SetBinContent(7,3278);
   _DoubleJet_TripleTag_2b2c_CvB__161->SetBinContent(8,4657);
   _DoubleJet_TripleTag_2b2c_CvB__161->SetBinContent(9,6312);
   _DoubleJet_TripleTag_2b2c_CvB__161->SetBinContent(10,3495);
   _DoubleJet_TripleTag_2b2c_CvB__161->SetEntries(36604);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_2b2c_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 36604  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4912");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.345");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_2b2c_CvB__161->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_2b2c_CvB__161);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_2b2c_CvB__161->SetLineColor(ci);
   _DoubleJet_TripleTag_2b2c_CvB__161->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_2b2c_CvB__161->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_2b2c_CvB__161->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_CvB__161->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_CvB__161->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_CvB__161->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_2b2c_CvB__161->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_CvB__161->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_CvB__161->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_CvB__161->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_CvB__161->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_CvB__161->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16_2b2c->Modified();
   CvB_2016_DoubleJet_TripleTag_16_2b2c->cd();
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetSelected(CvB_2016_DoubleJet_TripleTag_16_2b2c);
}
