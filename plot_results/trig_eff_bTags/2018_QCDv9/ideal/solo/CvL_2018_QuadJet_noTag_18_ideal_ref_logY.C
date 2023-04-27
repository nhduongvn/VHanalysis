#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTag_18_ideal_ref/CvL_2018_QuadJet_noTag_18_ideal_ref
//=========  (Thu Apr 27 10:20:02 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTag_18_ideal_ref = new TCanvas("CvL_2018_QuadJet_noTag_18_ideal_ref", "CvL_2018_QuadJet_noTag_18_ideal_ref",0,0,600,600);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetHighLightColor(2);
   CvL_2018_QuadJet_noTag_18_ideal_ref->Range(-0.2,2.029854,1.133333,3.81304);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetFillColor(0);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetBorderMode(0);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetBorderSize(2);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetLogy();
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetLeftMargin(0.15);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvL_ref__156 = new TH1D("_QuadJet_noTag_ideal_CvL_ref__156","",10,0,1);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(1,953);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(2,424);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(3,323);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(4,349);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(5,385);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(6,410);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(7,502);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(8,626);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(9,1024);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(10,2276);
   _QuadJet_noTag_ideal_CvL_ref__156->SetEntries(7272);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7272   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6295");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3348");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_CvL_ref__156->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_CvL_ref__156);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_CvL_ref__156->SetLineColor(ci);
   _QuadJet_noTag_ideal_CvL_ref__156->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_ideal_CvL_ref__156->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_ideal_CvL_ref__156->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL_ref__156->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_CvL_ref__156->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL_ref__156->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->Draw("HIST");
   CvL_2018_QuadJet_noTag_18_ideal_ref->Modified();
   CvL_2018_QuadJet_noTag_18_ideal_ref->cd();
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetSelected(CvL_2018_QuadJet_noTag_18_ideal_ref);
}
