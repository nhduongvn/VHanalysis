#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref/pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref = new TCanvas("pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref", "pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref",0,0,600,600);
   pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref->Range(-100,-0.270505,566.6667,2.434545);
   pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref->SetLogy();
   pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV3_ideal_pt_jet0_ref__12 = new TH1D("_QuadJet_noTagV3_ideal_pt_jet0_ref__12","",50,0,500);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(11,12);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(12,64);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(13,58);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(14,73);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(15,77);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(16,57);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(17,67);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(18,68);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(19,61);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(20,55);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(21,55);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(22,55);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(23,43);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(24,46);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(25,37);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(26,28);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(27,43);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(28,32);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(29,24);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(30,17);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(31,24);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(32,26);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(33,14);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(34,19);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(35,13);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(36,13);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(37,7);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(38,5);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(39,14);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(40,12);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(41,11);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(42,11);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(43,6);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(44,11);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(45,7);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(46,4);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(47,3);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(48,4);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(49,3);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(50,2);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetBinContent(51,42);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetEntries(1223);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV3_ideal_pt_jet0_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1223   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  219.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  85.81");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV3_ideal_pt_jet0_ref__12);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->SetLineColor(ci);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->GetXaxis()->SetRange(1,50);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_pt_jet0_ref__12->Draw("HIST");
   pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref->Modified();
   pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref->cd();
   pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref->SetSelected(pt_jet0_2018_QuadJet_noTagV3_18_ideal_ref);
}
