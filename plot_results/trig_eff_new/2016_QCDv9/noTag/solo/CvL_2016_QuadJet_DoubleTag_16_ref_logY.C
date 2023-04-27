#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_DoubleTag_16_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_DoubleTag_16_ref/CvL_2016_QuadJet_DoubleTag_16_ref
//=========  (Wed Apr 26 16:41:41 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_DoubleTag_16_ref = new TCanvas("CvL_2016_QuadJet_DoubleTag_16_ref", "CvL_2016_QuadJet_DoubleTag_16_ref",0,0,600,600);
   CvL_2016_QuadJet_DoubleTag_16_ref->SetHighLightColor(2);
   CvL_2016_QuadJet_DoubleTag_16_ref->Range(-0.2,4.133919,1.133333,6.560773);
   CvL_2016_QuadJet_DoubleTag_16_ref->SetFillColor(0);
   CvL_2016_QuadJet_DoubleTag_16_ref->SetBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16_ref->SetBorderSize(2);
   CvL_2016_QuadJet_DoubleTag_16_ref->SetLogy();
   CvL_2016_QuadJet_DoubleTag_16_ref->SetLeftMargin(0.15);
   CvL_2016_QuadJet_DoubleTag_16_ref->SetFrameBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_CvL_ref__90 = new TH1D("_QuadJet_DoubleTag_CvL_ref__90","",10,0,1);
   _QuadJet_DoubleTag_CvL_ref__90->SetBinContent(1,1097839);
   _QuadJet_DoubleTag_CvL_ref__90->SetBinContent(2,352005);
   _QuadJet_DoubleTag_CvL_ref__90->SetBinContent(3,107652);
   _QuadJet_DoubleTag_CvL_ref__90->SetBinContent(4,63888);
   _QuadJet_DoubleTag_CvL_ref__90->SetBinContent(5,49210);
   _QuadJet_DoubleTag_CvL_ref__90->SetBinContent(6,47603);
   _QuadJet_DoubleTag_CvL_ref__90->SetBinContent(7,53592);
   _QuadJet_DoubleTag_CvL_ref__90->SetBinContent(8,70383);
   _QuadJet_DoubleTag_CvL_ref__90->SetBinContent(9,106932);
   _QuadJet_DoubleTag_CvL_ref__90->SetBinContent(10,216856);
   _QuadJet_DoubleTag_CvL_ref__90->SetEntries(2165960);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2165960");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2754");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3232");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_CvL_ref__90->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_CvL_ref__90);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_CvL_ref__90->SetLineColor(ci);
   _QuadJet_DoubleTag_CvL_ref__90->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_DoubleTag_CvL_ref__90->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_CvL_ref__90->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvL_ref__90->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_CvL_ref__90->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvL_ref__90->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_CvL_ref__90->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvL_ref__90->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvL_ref__90->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvL_ref__90->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_CvL_ref__90->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvL_ref__90->Draw("HIST");
   CvL_2016_QuadJet_DoubleTag_16_ref->Modified();
   CvL_2016_QuadJet_DoubleTag_16_ref->cd();
   CvL_2016_QuadJet_DoubleTag_16_ref->SetSelected(CvL_2016_QuadJet_DoubleTag_16_ref);
}
