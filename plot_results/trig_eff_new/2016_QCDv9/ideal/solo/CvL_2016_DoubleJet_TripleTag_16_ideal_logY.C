#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16_ideal/CvL_2016_DoubleJet_TripleTag_16_ideal
//=========  (Wed Apr 26 16:41:44 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("CvL_2016_DoubleJet_TripleTag_16_ideal", "CvL_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16_ideal->Range(-0.2,2.656714,1.133333,4.350326);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_CvL__308 = new TH1D("_DoubleJet_TripleTag_ideal_CvL__308","",10,0,1);
   _DoubleJet_TripleTag_ideal_CvL__308->SetBinContent(1,4879);
   _DoubleJet_TripleTag_ideal_CvL__308->SetBinContent(2,8006);
   _DoubleJet_TripleTag_ideal_CvL__308->SetBinContent(3,2559);
   _DoubleJet_TripleTag_ideal_CvL__308->SetBinContent(4,1714);
   _DoubleJet_TripleTag_ideal_CvL__308->SetBinContent(5,1340);
   _DoubleJet_TripleTag_ideal_CvL__308->SetBinContent(6,1372);
   _DoubleJet_TripleTag_ideal_CvL__308->SetBinContent(7,1521);
   _DoubleJet_TripleTag_ideal_CvL__308->SetBinContent(8,2098);
   _DoubleJet_TripleTag_ideal_CvL__308->SetBinContent(9,3157);
   _DoubleJet_TripleTag_ideal_CvL__308->SetBinContent(10,6638);
   _DoubleJet_TripleTag_ideal_CvL__308->SetEntries(33284);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 33284  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4695");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3543");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_CvL__308->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_CvL__308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_CvL__308->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_CvL__308->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_ideal_CvL__308->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_ideal_CvL__308->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvL__308->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvL__308->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvL__308->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_CvL__308->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvL__308->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvL__308->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvL__308->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvL__308->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvL__308->Draw("HIST");
   CvL_2016_DoubleJet_TripleTag_16_ideal->Modified();
   CvL_2016_DoubleJet_TripleTag_16_ideal->cd();
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetSelected(CvL_2016_DoubleJet_TripleTag_16_ideal);
}
