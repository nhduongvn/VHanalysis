#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16_2b2c_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16_2b2c/CvL_2016_DoubleJet_TripleTag_16_2b2c
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16_2b2c = new TCanvas("CvL_2016_DoubleJet_TripleTag_16_2b2c", "CvL_2016_DoubleJet_TripleTag_16_2b2c",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16_2b2c->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16_2b2c->Range(-0.2,2.704998,1.133333,4.388227);
   CvL_2016_DoubleJet_TripleTag_16_2b2c->SetFillColor(0);
   CvL_2016_DoubleJet_TripleTag_16_2b2c->SetBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_2b2c->SetBorderSize(2);
   CvL_2016_DoubleJet_TripleTag_16_2b2c->SetLogy();
   CvL_2016_DoubleJet_TripleTag_16_2b2c->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_2b2c_CvL__155 = new TH1D("_DoubleJet_TripleTag_2b2c_CvL__155","",10,0,1);
   _DoubleJet_TripleTag_2b2c_CvL__155->SetBinContent(1,5369);
   _DoubleJet_TripleTag_2b2c_CvL__155->SetBinContent(2,8757);
   _DoubleJet_TripleTag_2b2c_CvL__155->SetBinContent(3,2802);
   _DoubleJet_TripleTag_2b2c_CvL__155->SetBinContent(4,1888);
   _DoubleJet_TripleTag_2b2c_CvL__155->SetBinContent(5,1494);
   _DoubleJet_TripleTag_2b2c_CvL__155->SetBinContent(6,1515);
   _DoubleJet_TripleTag_2b2c_CvL__155->SetBinContent(7,1703);
   _DoubleJet_TripleTag_2b2c_CvL__155->SetBinContent(8,2305);
   _DoubleJet_TripleTag_2b2c_CvL__155->SetBinContent(9,3459);
   _DoubleJet_TripleTag_2b2c_CvL__155->SetBinContent(10,7312);
   _DoubleJet_TripleTag_2b2c_CvL__155->SetEntries(36604);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_2b2c_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 36604  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4701");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3541");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_2b2c_CvL__155->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_2b2c_CvL__155);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_2b2c_CvL__155->SetLineColor(ci);
   _DoubleJet_TripleTag_2b2c_CvL__155->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_2b2c_CvL__155->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_2b2c_CvL__155->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_CvL__155->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_CvL__155->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_CvL__155->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_2b2c_CvL__155->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_CvL__155->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_CvL__155->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_CvL__155->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_CvL__155->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_CvL__155->Draw("HIST");
   CvL_2016_DoubleJet_TripleTag_16_2b2c->Modified();
   CvL_2016_DoubleJet_TripleTag_16_2b2c->cd();
   CvL_2016_DoubleJet_TripleTag_16_2b2c->SetSelected(CvL_2016_DoubleJet_TripleTag_16_2b2c);
}
