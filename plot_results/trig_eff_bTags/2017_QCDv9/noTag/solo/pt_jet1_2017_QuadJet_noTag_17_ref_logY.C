#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_noTag_17_ref/pt_jet1_2017_QuadJet_noTag_17_ref
//=========  (Thu Apr 27 10:19:52 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_noTag_17_ref = new TCanvas("pt_jet1_2017_QuadJet_noTag_17_ref", "pt_jet1_2017_QuadJet_noTag_17_ref",0,0,600,600);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_noTag_17_ref->Range(-100,1.434289,566.6667,5.511248);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetLogy();
   pt_jet1_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet1_ref__12 = new TH1D("_QuadJet_noTag_pt_jet1_ref__12","",50,0,500);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(5,1987);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(6,30532);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(7,59323);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(8,66989);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(9,63454);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(10,54886);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(11,46124);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(12,38113);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(13,30415);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(14,24738);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(15,20157);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(16,16283);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(17,13372);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(18,10854);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(19,8906);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(20,7293);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(21,5989);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(22,5047);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(23,4109);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(24,3421);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(25,2914);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(26,2425);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(27,2158);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(28,1897);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(29,1552);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(30,1263);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(31,1188);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(32,1024);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(33,901);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(34,789);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(35,682);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(36,596);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(37,504);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(38,467);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(39,397);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(40,347);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(41,322);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(42,288);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(43,272);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(44,228);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(45,213);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(46,213);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(47,170);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(48,156);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(49,139);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(50,141);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(51,1464);
   _QuadJet_noTag_pt_jet1_ref__12->SetEntries(534702);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 534702 ");
   ptstats_LaTex = ptstats->AddText("Mean  =    114");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  57.01");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet1_ref__12->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet1_ref__12);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet1_ref__12->SetLineColor(ci);
   _QuadJet_noTag_pt_jet1_ref__12->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet1_ref__12->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet1_ref__12->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet1_ref__12->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet1_ref__12->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet1_ref__12->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->Draw("HIST");
   pt_jet1_2017_QuadJet_noTag_17_ref->Modified();
   pt_jet1_2017_QuadJet_noTag_17_ref->cd();
   pt_jet1_2017_QuadJet_noTag_17_ref->SetSelected(pt_jet1_2017_QuadJet_noTag_17_ref);
}
