#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_noTag_17_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_noTag_17_ideal_ref/pt_jet1_2017_QuadJet_noTag_17_ideal_ref
//=========  (Wed Apr 26 16:41:50 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_noTag_17_ideal_ref = new TCanvas("pt_jet1_2017_QuadJet_noTag_17_ideal_ref", "pt_jet1_2017_QuadJet_noTag_17_ideal_ref",0,0,600,600);
   pt_jet1_2017_QuadJet_noTag_17_ideal_ref->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_noTag_17_ideal_ref->Range(-100,-0.127316,566.6667,4.156144);
   pt_jet1_2017_QuadJet_noTag_17_ideal_ref->SetFillColor(0);
   pt_jet1_2017_QuadJet_noTag_17_ideal_ref->SetBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ideal_ref->SetBorderSize(2);
   pt_jet1_2017_QuadJet_noTag_17_ideal_ref->SetLogy();
   pt_jet1_2017_QuadJet_noTag_17_ideal_ref->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_noTag_17_ideal_ref->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet1_ref__120 = new TH1D("_QuadJet_noTag_ideal_pt_jet1_ref__120","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(7,898);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(8,2060);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(9,2820);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(10,2753);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(11,2592);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(12,2153);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(13,1787);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(14,1465);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(15,1273);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(16,1055);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(17,881);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(18,664);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(19,518);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(20,463);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(21,398);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(22,337);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(23,275);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(24,237);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(25,180);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(26,131);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(27,132);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(28,124);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(29,121);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(30,91);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(31,90);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(32,57);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(33,49);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(34,35);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(35,38);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(36,30);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(37,40);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(38,26);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(39,28);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(40,16);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(41,21);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(42,15);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(43,13);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(44,8);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(45,15);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(46,11);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(47,6);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(48,4);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(49,6);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(50,8);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(51,65);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetEntries(23989);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 23989  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  130.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  58.16");
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
   pt_jet1_2017_QuadJet_noTag_17_ideal_ref->Modified();
   pt_jet1_2017_QuadJet_noTag_17_ideal_ref->cd();
   pt_jet1_2017_QuadJet_noTag_17_ideal_ref->SetSelected(pt_jet1_2017_QuadJet_noTag_17_ideal_ref);
}
