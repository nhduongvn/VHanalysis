#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_ideal()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18_ideal/pt_jet3_2018_QuadJet_TripleTag_18_ideal
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
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
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3__55 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3__55","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(5,0.4693878);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(6,0.5918854);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(7,0.7005348);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(8,0.8);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(9,0.830303);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(10,0.8636364);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(11,0.8953488);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(12,0.8709677);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(13,0.8292683);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(14,0.8275862);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(15,0.7826087);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(16,0.75);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(17,0.9230769);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(18,1);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(19,1);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(20,1);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(21,0.8333333);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(23,0.5);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(24,1);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(25,1);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetEntries(17.46794);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 17     ");
   ptstats_LaTex = ptstats->AddText("Mean  =    155");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  64.77");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet3__55->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet3__55);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_pt_jet3__55->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet3__55->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet3__55->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_ideal_pt_jet3__55->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__55->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__55->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__55->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_pt_jet3__55->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__55->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__55->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__55->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__55->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__55->Draw("HIST");
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->cd();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18_ideal);
}
