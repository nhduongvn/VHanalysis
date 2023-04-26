#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2017_QuadJet_noTag_17_ideal_logY()
{
//=========Macro generated from canvas: HTmod_2017_QuadJet_noTag_17_ideal/HTmod_2017_QuadJet_noTag_17_ideal
//=========  (Tue Apr 25 23:02:19 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2017_QuadJet_noTag_17_ideal = new TCanvas("HTmod_2017_QuadJet_noTag_17_ideal", "HTmod_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   HTmod_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   HTmod_2017_QuadJet_noTag_17_ideal->Range(-400,-0.4706213,2266.667,1.225291);
   HTmod_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   HTmod_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   HTmod_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   HTmod_2017_QuadJet_noTag_17_ideal->SetLogy();
   HTmod_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15);
   HTmod_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   HTmod_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_HTmod__143 = new TH1D("_QuadJet_noTag_ideal_HTmod__143","",200,0,2000);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(39,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(40,3);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(41,2);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(42,2);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(43,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(44,3);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(45,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(46,2);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(47,4);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(48,4);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(50,6);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(51,3);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(52,4);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(53,5);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(54,6);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(55,6);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(56,3);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(57,4);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(58,4);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(59,6);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(60,3);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(61,5);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(62,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(63,3);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(64,3);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(65,5);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(66,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(68,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(69,2);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(70,2);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(71,3);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(72,2);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(73,4);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(75,3);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(76,2);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(78,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(80,2);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(82,2);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(83,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(84,3);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(85,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(86,2);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(87,3);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(89,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(90,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(91,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(92,5);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(95,3);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(97,3);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(99,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(106,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(110,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(129,1);
   _QuadJet_noTag_ideal_HTmod__143->SetEntries(143);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 143    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  643.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  172.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_HTmod__143->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_HTmod__143);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_HTmod__143->SetLineColor(ci);
   _QuadJet_noTag_ideal_HTmod__143->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_ideal_HTmod__143->GetXaxis()->SetRange(1,200);
   _QuadJet_noTag_ideal_HTmod__143->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__143->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HTmod__143->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__143->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_HTmod__143->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__143->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__143->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__143->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HTmod__143->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__143->Draw("HIST");
   HTmod_2017_QuadJet_noTag_17_ideal->Modified();
   HTmod_2017_QuadJet_noTag_17_ideal->cd();
   HTmod_2017_QuadJet_noTag_17_ideal->SetSelected(HTmod_2017_QuadJet_noTag_17_ideal);
}
