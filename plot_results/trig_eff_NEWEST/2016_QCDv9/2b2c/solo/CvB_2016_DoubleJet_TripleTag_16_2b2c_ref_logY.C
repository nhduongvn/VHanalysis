#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_2b2c_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_2b2c_ref/CvB_2016_DoubleJet_TripleTag_16_2b2c_ref
//=========  (Wed May  3 17:53:45 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_2b2c_ref = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_2b2c_ref", "CvB_2016_DoubleJet_TripleTag_16_2b2c_ref",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_2b2c_ref->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_2b2c_ref->Range(-0.2,3.054901,1.133333,4.774467);
   CvB_2016_DoubleJet_TripleTag_16_2b2c_ref->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_2b2c_ref->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_2b2c_ref->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_2b2c_ref->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16_2b2c_ref->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16_2b2c_ref->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_2b2c_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_2b2c_CvB_ref__162 = new TH1D("_DoubleJet_TripleTag_2b2c_CvB_ref__162","",10,0,1);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->SetBinContent(1,21133);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->SetBinContent(2,3981);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->SetBinContent(3,3372);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->SetBinContent(4,3955);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->SetBinContent(5,4462);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->SetBinContent(6,5310);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->SetBinContent(7,7229);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->SetBinContent(8,10360);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->SetBinContent(9,14384);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->SetBinContent(10,8578);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->SetEntries(82764);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_2b2c_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 82764  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4946");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3468");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_2b2c_CvB_ref__162);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->SetLineColor(ci);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_CvB_ref__162->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16_2b2c_ref->Modified();
   CvB_2016_DoubleJet_TripleTag_16_2b2c_ref->cd();
   CvB_2016_DoubleJet_TripleTag_16_2b2c_ref->SetSelected(CvB_2016_DoubleJet_TripleTag_16_2b2c_ref);
}
