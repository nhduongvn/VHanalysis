#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_ideal()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18_ideal/pt_jet3_2018_QuadJet_TripleTag_18_ideal
//=========  (Tue Apr 25 23:01:42 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18_ideal = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18_ideal", "pt_jet3_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFillStyle(4000);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15709);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetRightMargin(0.1234783);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetBottomMargin(0.12);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3__127 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3__127","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(5,0.1087701);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(6,0.1763734);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(7,0.2663132);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(8,0.3382306);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(9,0.3603466);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(10,0.3857724);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(11,0.3985056);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(12,0.3936696);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(13,0.4155653);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(14,0.4276316);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(15,0.3942652);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(16,0.4419643);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(17,0.3846154);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(18,0.3888889);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(19,0.3870968);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(20,0.4716981);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(21,0.46);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(22,0.2666667);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(23,0.2380952);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(24,0.5555556);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(25,0.5);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(26,0.2727273);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(27,0.3333333);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(28,0.6666667);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(29,0.3333333);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(32,1);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(34,1);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(35,1);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetEntries(13.36609);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 13     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  221.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  91.28");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet3__127->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet3__127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet3__127->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet3__127->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_ideal_pt_jet3__127->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__127->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__127->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__127->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_pt_jet3__127->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__127->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__127->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__127->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__127->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__127->Draw("HIST");
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->cd();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18_ideal);
}
