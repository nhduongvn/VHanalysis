#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2016_DoubleJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: HT_2016_DoubleJet_DoubleTag_16_ideal/HT_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *HT_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("HT_2016_DoubleJet_DoubleTag_16_ideal", "HT_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   HT_2016_DoubleJet_DoubleTag_16_ideal->Range(-436.7058,-0.1615385,2343.266,1.184615);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetFillStyle(4000);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_HT__274 = new TH1D("_DoubleJet_DoubleTag_ideal_HT__274","",200,0,2000);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(35,0.08333333);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(36,0.0625);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(37,0.04761905);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(38,0.0625);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(39,0.05555556);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(41,0.05263158);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(43,0.1052632);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(44,0.04166667);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(46,0.05263158);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(50,0.1052632);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(51,0.1666667);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(55,0.0625);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(56,0.07692308);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(57,0.0625);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(58,0.08333333);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(63,0.09090909);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(64,0.1111111);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(66,0.09090909);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(68,0.1428571);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(69,0.09090909);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(71,0.07142857);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(72,0.09090909);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(86,0.25);
   _DoubleJet_DoubleTag_ideal_HT__274->SetBinContent(122,1);
   _DoubleJet_DoubleTag_ideal_HT__274->SetEntries(3.05992);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  786.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  323.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_HT__274->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_HT__274);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_ideal_HT__274->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_HT__274->GetXaxis()->SetTitle("H_{T} [GeV]");
   _DoubleJet_DoubleTag_ideal_HT__274->GetXaxis()->SetRange(1,2000);
   _DoubleJet_DoubleTag_ideal_HT__274->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_HT__274->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_HT__274->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_HT__274->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_ideal_HT__274->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_HT__274->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_HT__274->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_HT__274->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_HT__274->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_HT__274->Draw("HIST");
   HT_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   HT_2016_DoubleJet_DoubleTag_16_ideal->cd();
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(HT_2016_DoubleJet_DoubleTag_16_ideal);
}
