#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2017_QuadJet_noTag_17_tagged_logY()
{
//=========Macro generated from canvas: HTmod_2017_QuadJet_noTag_17_tagged/HTmod_2017_QuadJet_noTag_17_tagged
//=========  (Thu Apr 27 10:18:24 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2017_QuadJet_noTag_17_tagged = new TCanvas("HTmod_2017_QuadJet_noTag_17_tagged", "HTmod_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   HTmod_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   HTmod_2017_QuadJet_noTag_17_tagged->Range(-400,-0.4706213,2266.667,1.225291);
   HTmod_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   HTmod_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   HTmod_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   HTmod_2017_QuadJet_noTag_17_tagged->SetLogy();
   HTmod_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15);
   HTmod_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   HTmod_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_HTmod__89 = new TH1D("_QuadJet_noTag_tagged_HTmod__89","",200,0,2000);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(39,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(40,3);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(41,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(42,2);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(43,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(44,3);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(45,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(46,3);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(47,4);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(48,4);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(50,5);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(51,3);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(52,4);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(53,4);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(54,6);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(55,6);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(56,3);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(57,4);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(58,4);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(59,6);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(60,3);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(61,4);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(62,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(63,3);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(64,3);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(65,5);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(66,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(68,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(69,2);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(70,2);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(71,2);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(72,2);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(73,5);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(75,3);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(76,2);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(78,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(80,2);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(82,2);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(83,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(84,2);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(85,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(86,2);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(87,3);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(89,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(90,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(91,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(92,5);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(95,3);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(97,3);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(99,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(106,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(110,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(129,1);
   _QuadJet_noTag_tagged_HTmod__89->SetEntries(139);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 139    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  644.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  173.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_HTmod__89->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_HTmod__89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_HTmod__89->SetLineColor(ci);
   _QuadJet_noTag_tagged_HTmod__89->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_tagged_HTmod__89->GetXaxis()->SetRange(1,200);
   _QuadJet_noTag_tagged_HTmod__89->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HTmod__89->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_HTmod__89->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HTmod__89->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_HTmod__89->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HTmod__89->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HTmod__89->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HTmod__89->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_HTmod__89->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HTmod__89->Draw("HIST");
   HTmod_2017_QuadJet_noTag_17_tagged->Modified();
   HTmod_2017_QuadJet_noTag_17_tagged->cd();
   HTmod_2017_QuadJet_noTag_17_tagged->SetSelected(HTmod_2017_QuadJet_noTag_17_tagged);
}
