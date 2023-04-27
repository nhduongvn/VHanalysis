#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2016_DoubleJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: HTmod_2016_DoubleJet_DoubleTag_16_ideal/HTmod_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("HTmod_2016_DoubleJet_DoubleTag_16_ideal", "HTmod_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->Range(-436.7058,-0.1615385,2343.266,1.184615);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetFillStyle(4000);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_HTmod__286 = new TH1D("_DoubleJet_DoubleTag_ideal_HTmod__286","",200,0,2000);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(48,0.07142857);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(50,0.09090909);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(52,0.1111111);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(53,0.07142857);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(55,0.0625);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(57,0.08333333);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(60,0.04545455);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(63,0.1333333);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(64,0.0625);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(65,0.125);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(69,0.2222222);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(71,0.05555556);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(72,0.07692308);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(74,0.05555556);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(76,0.07692308);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(78,0.09090909);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(80,0.1111111);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(81,0.07692308);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(83,0.07692308);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(84,0.08333333);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(89,0.2);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(98,0.5);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(112,0.3333333);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetBinContent(144,1);
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetEntries(3.816711);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  957.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  328.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_HTmod__286->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_HTmod__286);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_ideal_HTmod__286->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_HTmod__286->GetXaxis()->SetTitle("H_{T} [GeV]");
   _DoubleJet_DoubleTag_ideal_HTmod__286->GetXaxis()->SetRange(1,2000);
   _DoubleJet_DoubleTag_ideal_HTmod__286->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_HTmod__286->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_HTmod__286->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_HTmod__286->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_ideal_HTmod__286->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_HTmod__286->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_HTmod__286->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_HTmod__286->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_HTmod__286->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_HTmod__286->Draw("HIST");
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->cd();
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(HTmod_2016_DoubleJet_DoubleTag_16_ideal);
}
