#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_DoubleTag_16_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_DoubleTag_16_ref/CvL_2016_QuadJet_DoubleTag_16_ref
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_DoubleTag_16_ref = new TCanvas("CvL_2016_QuadJet_DoubleTag_16_ref", "CvL_2016_QuadJet_DoubleTag_16_ref",0,0,600,600);
   CvL_2016_QuadJet_DoubleTag_16_ref->SetHighLightColor(2);
   CvL_2016_QuadJet_DoubleTag_16_ref->Range(-0.2,4.136876,1.133333,6.563796);
   CvL_2016_QuadJet_DoubleTag_16_ref->SetFillColor(0);
   CvL_2016_QuadJet_DoubleTag_16_ref->SetBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16_ref->SetBorderSize(2);
   CvL_2016_QuadJet_DoubleTag_16_ref->SetLogy();
   CvL_2016_QuadJet_DoubleTag_16_ref->SetLeftMargin(0.15);
   CvL_2016_QuadJet_DoubleTag_16_ref->SetFrameBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_CvL_ref__174 = new TH1D("_QuadJet_DoubleTag_CvL_ref__174","",10,0,1);
   _QuadJet_DoubleTag_CvL_ref__174->SetBinContent(1,1105491);
   _QuadJet_DoubleTag_CvL_ref__174->SetBinContent(2,354215);
   _QuadJet_DoubleTag_CvL_ref__174->SetBinContent(3,108340);
   _QuadJet_DoubleTag_CvL_ref__174->SetBinContent(4,64293);
   _QuadJet_DoubleTag_CvL_ref__174->SetBinContent(5,49560);
   _QuadJet_DoubleTag_CvL_ref__174->SetBinContent(6,47929);
   _QuadJet_DoubleTag_CvL_ref__174->SetBinContent(7,53954);
   _QuadJet_DoubleTag_CvL_ref__174->SetBinContent(8,70896);
   _QuadJet_DoubleTag_CvL_ref__174->SetBinContent(9,107635);
   _QuadJet_DoubleTag_CvL_ref__174->SetBinContent(10,218379);
   _QuadJet_DoubleTag_CvL_ref__174->SetEntries(2180692);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2180692");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2754");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3232");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_CvL_ref__174->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_CvL_ref__174);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_CvL_ref__174->SetLineColor(ci);
   _QuadJet_DoubleTag_CvL_ref__174->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_DoubleTag_CvL_ref__174->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_CvL_ref__174->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvL_ref__174->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_CvL_ref__174->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvL_ref__174->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_CvL_ref__174->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvL_ref__174->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvL_ref__174->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvL_ref__174->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_CvL_ref__174->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvL_ref__174->Draw("HIST");
   CvL_2016_QuadJet_DoubleTag_16_ref->Modified();
   CvL_2016_QuadJet_DoubleTag_16_ref->cd();
   CvL_2016_QuadJet_DoubleTag_16_ref->SetSelected(CvL_2016_QuadJet_DoubleTag_16_ref);
}
