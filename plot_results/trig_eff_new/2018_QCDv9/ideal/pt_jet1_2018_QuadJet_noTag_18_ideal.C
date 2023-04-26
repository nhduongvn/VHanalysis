#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_noTag_18_ideal()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_noTag_18_ideal/pt_jet1_2018_QuadJet_noTag_18_ideal
//=========  (Wed Apr 26 16:41:58 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_noTag_18_ideal = new TCanvas("pt_jet1_2018_QuadJet_noTag_18_ideal", "pt_jet1_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   pt_jet1_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_noTag_18_ideal->Range(-109.1764,-0.004615385,585.8166,0.03384615);
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
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(7,0.001070664);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(8,0.004942966);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(9,0.00414533);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(10,0.005474837);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(11,0.006454389);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(12,0.004363636);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(13,0.006091989);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(14,0.00670194);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(15,0.006118881);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(16,0.009268795);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(17,0.006931317);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(18,0.005102041);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(19,0.003707136);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(20,0.002290951);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(21,0.006485084);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(22,0.013267);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(23,0.01512287);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(24,0.004784689);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(25,0.003058104);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(26,0.006802721);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(27,0.0177305);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(28,0.004385965);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(29,0.01587302);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(30,0.01388889);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(31,0.0078125);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(32,0.01980198);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(34,0.02597403);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(35,0.01282051);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(38,0.01754386);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(40,0.02857143);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(51,0.008196721);
   _QuadJet_noTag_ideal_pt_jet1__118->SetEntries(0.286588);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  261.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  91.99");
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
