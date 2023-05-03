#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2018_QuadJet_noTag_18_ideal()
{
//=========Macro generated from canvas: HT_2018_QuadJet_noTag_18_ideal/HT_2018_QuadJet_noTag_18_ideal
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *HT_2018_QuadJet_noTag_18_ideal = new TCanvas("HT_2018_QuadJet_noTag_18_ideal", "HT_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   HT_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   HT_2018_QuadJet_noTag_18_ideal->Range(-436.7058,-0.08076923,2343.266,0.5923077);
   HT_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   HT_2018_QuadJet_noTag_18_ideal->SetFillStyle(4000);
   HT_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   HT_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   HT_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15709);
   HT_2018_QuadJet_noTag_18_ideal->SetRightMargin(0.1234783);
   HT_2018_QuadJet_noTag_18_ideal->SetBottomMargin(0.12);
   HT_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   HT_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   HT_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   HT_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_HT__76 = new TH1D("_QuadJet_noTag_ideal_HT__76","",200,0,2000);
   _QuadJet_noTag_ideal_HT__76->SetBinContent(33,0.03225806);
   _QuadJet_noTag_ideal_HT__76->SetBinContent(42,0.01694915);
   _QuadJet_noTag_ideal_HT__76->SetBinContent(51,0.02857143);
   _QuadJet_noTag_ideal_HT__76->SetBinContent(54,0.02857143);
   _QuadJet_noTag_ideal_HT__76->SetBinContent(58,0.03571429);
   _QuadJet_noTag_ideal_HT__76->SetBinContent(67,0.05);
   _QuadJet_noTag_ideal_HT__76->SetBinContent(77,0.07142857);
   _QuadJet_noTag_ideal_HT__76->SetBinContent(92,0.5);
   _QuadJet_noTag_ideal_HT__76->SetEntries(0.7634929);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  803.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  176.2");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_HT__76->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_HT__76);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_HT__76->SetLineColor(ci);
   _QuadJet_noTag_ideal_HT__76->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_ideal_HT__76->GetXaxis()->SetRange(1,2000);
   _QuadJet_noTag_ideal_HT__76->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HT__76->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HT__76->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HT__76->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_HT__76->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HT__76->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HT__76->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HT__76->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HT__76->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HT__76->Draw("HIST");
   HT_2018_QuadJet_noTag_18_ideal->Modified();
   HT_2018_QuadJet_noTag_18_ideal->cd();
   HT_2018_QuadJet_noTag_18_ideal->SetSelected(HT_2018_QuadJet_noTag_18_ideal);
}
