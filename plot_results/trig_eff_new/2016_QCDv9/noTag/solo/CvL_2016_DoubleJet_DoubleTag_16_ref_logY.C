#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_DoubleTag_16_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_DoubleTag_16_ref/CvL_2016_DoubleJet_DoubleTag_16_ref
//=========  (Thu Apr 27 10:18:37 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_DoubleTag_16_ref = new TCanvas("CvL_2016_DoubleJet_DoubleTag_16_ref", "CvL_2016_DoubleJet_DoubleTag_16_ref",0,0,600,600);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetHighLightColor(2);
   CvL_2016_DoubleJet_DoubleTag_16_ref->Range(-0.2,4.133919,1.133333,6.560773);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetFillColor(0);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetBorderSize(2);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetLogy();
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_CvL_ref__96 = new TH1D("_DoubleJet_DoubleTag_CvL_ref__96","",10,0,1);
   _DoubleJet_DoubleTag_CvL_ref__96->SetBinContent(1,1097839);
   _DoubleJet_DoubleTag_CvL_ref__96->SetBinContent(2,352005);
   _DoubleJet_DoubleTag_CvL_ref__96->SetBinContent(3,107652);
   _DoubleJet_DoubleTag_CvL_ref__96->SetBinContent(4,63888);
   _DoubleJet_DoubleTag_CvL_ref__96->SetBinContent(5,49210);
   _DoubleJet_DoubleTag_CvL_ref__96->SetBinContent(6,47603);
   _DoubleJet_DoubleTag_CvL_ref__96->SetBinContent(7,53592);
   _DoubleJet_DoubleTag_CvL_ref__96->SetBinContent(8,70383);
   _DoubleJet_DoubleTag_CvL_ref__96->SetBinContent(9,106932);
   _DoubleJet_DoubleTag_CvL_ref__96->SetBinContent(10,216856);
   _DoubleJet_DoubleTag_CvL_ref__96->SetEntries(2165960);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2165960");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2754");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3232");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_CvL_ref__96->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_CvL_ref__96);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_CvL_ref__96->SetLineColor(ci);
   _DoubleJet_DoubleTag_CvL_ref__96->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_DoubleTag_CvL_ref__96->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_CvL_ref__96->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvL_ref__96->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_CvL_ref__96->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvL_ref__96->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_CvL_ref__96->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvL_ref__96->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvL_ref__96->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvL_ref__96->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_CvL_ref__96->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvL_ref__96->Draw("HIST");
   CvL_2016_DoubleJet_DoubleTag_16_ref->Modified();
   CvL_2016_DoubleJet_DoubleTag_16_ref->cd();
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetSelected(CvL_2016_DoubleJet_DoubleTag_16_ref);
}
