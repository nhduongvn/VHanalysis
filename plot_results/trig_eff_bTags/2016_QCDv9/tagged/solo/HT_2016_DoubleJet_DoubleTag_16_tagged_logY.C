#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2016_DoubleJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: HT_2016_DoubleJet_DoubleTag_16_tagged/HT_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *HT_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("HT_2016_DoubleJet_DoubleTag_16_tagged", "HT_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   HT_2016_DoubleJet_DoubleTag_16_tagged->Range(-400,-0.4329925,2266.667,0.8866327);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetLogy();
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_HT__167 = new TH1D("_DoubleJet_DoubleTag_tagged_HT__167","",200,0,2000);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(35,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(36,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(37,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(38,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(39,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(41,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(43,2);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(44,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(46,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(50,2);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(51,3);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(55,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(56,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(57,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(58,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(63,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(64,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(66,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(68,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(69,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(71,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(72,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(86,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetBinContent(122,1);
   _DoubleJet_DoubleTag_tagged_HT__167->SetEntries(28);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  553.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  179.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_HT__167->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_HT__167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_HT__167->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_HT__167->GetXaxis()->SetTitle("H_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_HT__167->GetXaxis()->SetRange(1,200);
   _DoubleJet_DoubleTag_tagged_HT__167->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_HT__167->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_HT__167->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_HT__167->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_HT__167->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_HT__167->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_HT__167->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_HT__167->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_HT__167->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_HT__167->Draw("HIST");
   HT_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   HT_2016_DoubleJet_DoubleTag_16_tagged->cd();
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(HT_2016_DoubleJet_DoubleTag_16_tagged);
}
