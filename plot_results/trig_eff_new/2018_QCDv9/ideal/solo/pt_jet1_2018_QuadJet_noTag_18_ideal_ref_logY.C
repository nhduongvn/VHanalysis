#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_noTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_noTag_18_ideal_ref/pt_jet1_2018_QuadJet_noTag_18_ideal_ref
//=========  (Thu Apr 27 10:18:11 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_noTag_18_ideal_ref = new TCanvas("pt_jet1_2018_QuadJet_noTag_18_ideal_ref", "pt_jet1_2018_QuadJet_noTag_18_ideal_ref",0,0,600,600);
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->Range(-100,0.2405952,566.6667,4.366768);
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetFillColor(0);
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetBorderSize(2);
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetLogy();
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet1_ref__120 = new TH1D("_QuadJet_noTag_ideal_pt_jet1_ref__120","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(7,934);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(8,2630);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(9,4101);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(10,4749);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(11,4648);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(12,4125);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(13,3283);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(14,2835);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(15,2288);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(16,1942);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(17,1587);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(18,1372);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(19,1079);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(20,873);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(21,771);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(22,603);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(23,529);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(24,418);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(25,327);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(26,294);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(27,282);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(28,228);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(29,189);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(30,144);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(31,128);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(32,101);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(33,95);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(34,77);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(35,78);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(36,69);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(37,47);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(38,57);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(39,42);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(40,35);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(41,41);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(42,26);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(43,25);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(44,22);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(45,25);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(46,26);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(47,18);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(48,9);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(49,13);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(50,15);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(51,122);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetEntries(41302);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 41302  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  134.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   58.6");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet1_ref__120);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->Draw("HIST");
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->Modified();
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->cd();
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetSelected(pt_jet1_2018_QuadJet_noTag_18_ideal_ref);
}
