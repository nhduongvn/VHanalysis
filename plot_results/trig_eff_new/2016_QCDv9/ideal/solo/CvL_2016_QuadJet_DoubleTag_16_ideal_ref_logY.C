#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_DoubleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_DoubleTag_16_ideal_ref/CvL_2016_QuadJet_DoubleTag_16_ideal_ref
//=========  (Tue Apr 25 23:03:10 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_DoubleTag_16_ideal_ref = new TCanvas("CvL_2016_QuadJet_DoubleTag_16_ideal_ref", "CvL_2016_QuadJet_DoubleTag_16_ideal_ref",0,0,600,600);
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetHighLightColor(2);
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->Range(-0.2,3.207811,1.133333,4.947168);
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetFillColor(0);
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetBorderSize(2);
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetLogy();
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetLeftMargin(0.15);
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_CvL_ref__306 = new TH1D("_QuadJet_DoubleTag_ideal_CvL_ref__306","",10,0,1);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(1,13381);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(2,31310);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(3,9454);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(4,6217);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(5,4823);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(6,4817);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(7,5538);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(8,7140);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(9,10814);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetBinContent(10,21622);
   _QuadJet_DoubleTag_ideal_CvL_ref__306->SetEntries(115116);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 115116 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4635");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.348");
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
