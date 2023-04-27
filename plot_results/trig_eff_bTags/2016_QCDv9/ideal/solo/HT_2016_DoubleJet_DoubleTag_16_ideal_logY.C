#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2016_DoubleJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: HT_2016_DoubleJet_DoubleTag_16_ideal/HT_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *HT_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("HT_2016_DoubleJet_DoubleTag_16_ideal", "HT_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   HT_2016_DoubleJet_DoubleTag_16_ideal->Range(-400,-0.4329925,2266.667,0.8866327);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetLogy();
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_HT__275 = new TH1D("_DoubleJet_DoubleTag_ideal_HT__275","",200,0,2000);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(35,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(36,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(37,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(38,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(39,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(41,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(43,2);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(44,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(46,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(50,2);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(51,3);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(55,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(56,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(57,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(58,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(63,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(64,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(66,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(68,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(69,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(71,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(72,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(86,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetBinContent(122,1);
   _DoubleJet_DoubleTag_ideal_HT__275->SetEntries(28);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  553.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  179.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_HT__275->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_HT__275);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_ideal_HT__275->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_HT__275->GetXaxis()->SetTitle("H_{T} [GeV]");
   _DoubleJet_DoubleTag_ideal_HT__275->GetXaxis()->SetRange(1,200);
   _DoubleJet_DoubleTag_ideal_HT__275->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_HT__275->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_HT__275->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_HT__275->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_ideal_HT__275->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_HT__275->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_HT__275->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_HT__275->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_HT__275->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_HT__275->Draw("HIST");
   HT_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   HT_2016_DoubleJet_DoubleTag_16_ideal->cd();
   HT_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(HT_2016_DoubleJet_DoubleTag_16_ideal);
}
