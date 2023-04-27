#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_DoubleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_DoubleTag_16_ideal_ref/CvL_2016_QuadJet_DoubleTag_16_ideal_ref
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_DoubleTag_16_ideal_ref = new TCanvas("CvL_2016_QuadJet_DoubleTag_16_ideal_ref", "CvL_2016_QuadJet_DoubleTag_16_ideal_ref",0,0,600,600);
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetHighLightColor(2);
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->Range(-0.2,1.818838,1.133333,3.498177);
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetFillColor(0);
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetBorderSize(2);
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetLogy();
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetLeftMargin(0.15);
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_CvL_ref__306 = new TH1D("_QuadJet_DoubleTag_ideal_CvL_ref__306","",10,0,1);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(1,468);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(2,241);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(3,194);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(4,227);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(5,214);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(6,246);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(7,262);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(8,375);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(9,556);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(10,1129);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetEntries(3912);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3912   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6218");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3282");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_CvL_ref__306->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_CvL_ref__306);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_DoubleTag_ideal_CvL_ref__306->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_ideal_CvL_ref__306->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->Draw("HIST");
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->Modified();
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->cd();
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetSelected(CvL_2016_QuadJet_DoubleTag_16_ideal_ref);
}
