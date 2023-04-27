#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2016_QuadJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: HTmod_2016_QuadJet_DoubleTag_16_ideal/HTmod_2016_QuadJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("HTmod_2016_QuadJet_DoubleTag_16_ideal", "HTmod_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->Range(-436.7058,-0.1615385,2343.266,1.184615);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetFillStyle(4000);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_HTmod__280 = new TH1D("_QuadJet_DoubleTag_ideal_HTmod__280","",200,0,2000);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(35,0.2);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(42,0.06666667);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(43,0.03703704);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(46,0.03333333);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(47,0.04761905);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(48,0.09090909);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(49,0.04166667);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(51,0.05263158);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(54,0.03846154);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(55,0.04761905);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(56,0.07692308);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(57,0.07142857);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(59,0.1333333);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(61,0.0625);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(62,0.07142857);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(65,0.08333333);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(76,0.07692308);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(82,0.1818182);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(84,0.08333333);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(93,0.07692308);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetBinContent(180,1);
   _QuadJet_DoubleTag_ideal_HTmod__280->SetEntries(2.573889);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  =   1059");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  601.4");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_HTmod__280->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_HTmod__280);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_ideal_HTmod__280->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_HTmod__280->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_DoubleTag_ideal_HTmod__280->GetXaxis()->SetRange(1,2000);
   _QuadJet_DoubleTag_ideal_HTmod__280->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_HTmod__280->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_HTmod__280->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_HTmod__280->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_ideal_HTmod__280->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_HTmod__280->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_HTmod__280->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_HTmod__280->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_HTmod__280->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_HTmod__280->Draw("HIST");
   HTmod_2016_QuadJet_DoubleTag_16_ideal->Modified();
   HTmod_2016_QuadJet_DoubleTag_16_ideal->cd();
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetSelected(HTmod_2016_QuadJet_DoubleTag_16_ideal);
}
