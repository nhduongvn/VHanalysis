#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_noTag_18_tagged()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_noTag_18_tagged/pt_jet1_2018_QuadJet_noTag_18_tagged
//=========  (Tue Apr 25 23:01:41 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_noTag_18_tagged = new TCanvas("pt_jet1_2018_QuadJet_noTag_18_tagged", "pt_jet1_2018_QuadJet_noTag_18_tagged",0,0,600,600);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_noTag_18_tagged->Range(-109.1764,-0.004751131,585.8166,0.03484163);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetFillColor(0);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetFillStyle(4000);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetBorderSize(2);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetLeftMargin(0.15709);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetRightMargin(0.1234783);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetBottomMargin(0.12);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetFrameFillStyle(1000);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetFrameFillStyle(1000);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet1__64 = new TH1D("_QuadJet_noTag_tagged_pt_jet1__64","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(7,0.0004190237);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(8,0.002845188);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(9,0.003178852);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(10,0.004992604);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(11,0.006311803);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(12,0.004371054);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(13,0.005792683);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(14,0.006713781);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(15,0.006170119);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(16,0.00880829);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(17,0.006953224);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(18,0.005113221);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(19,0.003727866);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(20,0.002285714);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(21,0.006544503);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(22,0.01337793);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(23,0.01500938);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(24,0.002409639);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(25,0.003095975);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(26,0.006872852);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(27,0.01805054);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(28,0.004405286);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(29,0.01604278);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(30,0.01388889);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(31,0.008);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(32,0.02);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(34,0.02631579);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(35,0.01282051);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(38,0.01754386);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(40,0.02941176);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(51,0.008264463);
   _QuadJet_noTag_tagged_pt_jet1__64->SetEntries(0.2814731);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  265.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  90.05");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet1__64->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet1__64);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_pt_jet1__64->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet1__64->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet1__64->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_tagged_pt_jet1__64->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1__64->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet1__64->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1__64->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_pt_jet1__64->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1__64->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1__64->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1__64->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet1__64->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1__64->Draw("HIST");
   pt_jet1_2018_QuadJet_noTag_18_tagged->Modified();
   pt_jet1_2018_QuadJet_noTag_18_tagged->cd();
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetSelected(pt_jet1_2018_QuadJet_noTag_18_tagged);
}
