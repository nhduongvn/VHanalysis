#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2017_QuadJet_noTag_17_ideal_logY()
{
//=========Macro generated from canvas: HT_2017_QuadJet_noTag_17_ideal/HT_2017_QuadJet_noTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *HT_2017_QuadJet_noTag_17_ideal = new TCanvas("HT_2017_QuadJet_noTag_17_ideal", "HT_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   HT_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   HT_2017_QuadJet_noTag_17_ideal->Range(-400,-3.447322,2266.667,1.025901);
   HT_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   HT_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   HT_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   HT_2017_QuadJet_noTag_17_ideal->SetLogy();
   HT_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15);
   HT_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   HT_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_HT__29 = new TH1D("_QuadJet_noTag_ideal_HT__29","",200,0,2000);
   _QuadJet_noTag_ideal_HT__29->SetBinContent(37,2);
   _QuadJet_noTag_ideal_HT__29->SetEntries(2);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  364.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  2.562");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_HT__29->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_HT__29);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_HT__29->SetLineColor(ci);
   _QuadJet_noTag_ideal_HT__29->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_ideal_HT__29->GetXaxis()->SetRange(1,200);
   _QuadJet_noTag_ideal_HT__29->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HT__29->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HT__29->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HT__29->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_HT__29->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HT__29->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HT__29->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HT__29->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HT__29->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HT__29->Draw("HIST");
   HT_2017_QuadJet_noTag_17_ideal->Modified();
   HT_2017_QuadJet_noTag_17_ideal->cd();
   HT_2017_QuadJet_noTag_17_ideal->SetSelected(HT_2017_QuadJet_noTag_17_ideal);
}
