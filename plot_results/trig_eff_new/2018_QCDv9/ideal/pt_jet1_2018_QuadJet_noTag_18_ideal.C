#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_noTag_18_ideal()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_noTag_18_ideal/pt_jet1_2018_QuadJet_noTag_18_ideal
//=========  (Tue Apr 25 23:01:41 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_noTag_18_ideal = new TCanvas("pt_jet1_2018_QuadJet_noTag_18_ideal", "pt_jet1_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   pt_jet1_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_noTag_18_ideal->Range(-109.1764,-0.004751131,585.8166,0.03484163);
   pt_jet1_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   pt_jet1_2018_QuadJet_noTag_18_ideal->SetFillStyle(4000);
   pt_jet1_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   pt_jet1_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15709);
   pt_jet1_2018_QuadJet_noTag_18_ideal->SetRightMargin(0.1234783);
   pt_jet1_2018_QuadJet_noTag_18_ideal->SetBottomMargin(0.12);
   pt_jet1_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   pt_jet1_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   pt_jet1_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet1__118 = new TH1D("_QuadJet_noTag_ideal_pt_jet1__118","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(7,0.0005567929);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(8,0.002943723);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(9,0.003178852);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(10,0.004992604);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(11,0.006311803);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(12,0.004371054);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(13,0.005792683);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(14,0.006713781);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(15,0.006170119);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(16,0.00880829);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(17,0.006953224);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(18,0.005113221);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(19,0.003727866);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(20,0.002285714);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(21,0.006544503);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(22,0.01337793);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(23,0.01500938);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(24,0.002409639);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(25,0.003095975);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(26,0.006872852);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(27,0.01805054);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(28,0.004405286);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(29,0.01604278);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(30,0.01388889);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(31,0.008);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(32,0.02);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(34,0.02631579);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(35,0.01282051);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(38,0.01754386);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(40,0.02941176);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(51,0.008264463);
   _QuadJet_noTag_ideal_pt_jet1__118->SetEntries(0.2817094);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  265.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   90.2");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet1__118->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet1__118);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_pt_jet1__118->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet1__118->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet1__118->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_ideal_pt_jet1__118->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet1__118->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_pt_jet1__118->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet1__118->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->Draw("HIST");
   pt_jet1_2018_QuadJet_noTag_18_ideal->Modified();
   pt_jet1_2018_QuadJet_noTag_18_ideal->cd();
   pt_jet1_2018_QuadJet_noTag_18_ideal->SetSelected(pt_jet1_2018_QuadJet_noTag_18_ideal);
}
