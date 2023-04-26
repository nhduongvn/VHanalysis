#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_noTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_noTag_18_ideal_ref/pt_jet2_2018_QuadJet_noTag_18_ideal_ref
//=========  (Wed Apr 26 16:41:58 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_noTag_18_ideal_ref = new TCanvas("pt_jet2_2018_QuadJet_noTag_18_ideal_ref", "pt_jet2_2018_QuadJet_noTag_18_ideal_ref",0,0,600,600);
   pt_jet2_2018_QuadJet_noTag_18_ideal_ref->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_noTag_18_ideal_ref->Range(-100,-0.8553604,566.6667,4.687943);
   pt_jet2_2018_QuadJet_noTag_18_ideal_ref->SetFillColor(0);
   pt_jet2_2018_QuadJet_noTag_18_ideal_ref->SetBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18_ideal_ref->SetBorderSize(2);
   pt_jet2_2018_QuadJet_noTag_18_ideal_ref->SetLogy();
   pt_jet2_2018_QuadJet_noTag_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet2_ref__126 = new TH1D("_QuadJet_noTag_ideal_pt_jet2_ref__126","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(5,249);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(6,2649);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(7,6000);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(8,7179);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(9,6312);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(10,4877);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(11,3715);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(12,2642);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(13,1949);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(14,1410);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(15,1022);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(16,763);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(17,634);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(18,442);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(19,323);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(20,232);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(21,204);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(22,168);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(23,107);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(24,78);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(25,67);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(26,57);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(27,37);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(28,41);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(29,23);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(30,22);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(31,22);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(32,14);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(33,8);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(34,12);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(35,8);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(36,6);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(37,4);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(38,4);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(39,3);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(40,4);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(41,1);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(43,4);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(44,1);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(45,3);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(46,1);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(49,1);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(50,1);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetBinContent(51,3);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetEntries(41302);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 41302  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  96.48");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  37.01");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet2_ref__126->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet2_ref__126);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_pt_jet2_ref__126->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet2_ref__126->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_pt_jet2_ref__126->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2_ref__126->Draw("HIST");
   pt_jet2_2018_QuadJet_noTag_18_ideal_ref->Modified();
   pt_jet2_2018_QuadJet_noTag_18_ideal_ref->cd();
   pt_jet2_2018_QuadJet_noTag_18_ideal_ref->SetSelected(pt_jet2_2018_QuadJet_noTag_18_ideal_ref);
}
