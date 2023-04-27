#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_TripleTag_17_ideal()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_TripleTag_17_ideal/pt_jet1_2017_QuadJet_TripleTag_17_ideal
//=========  (Thu Apr 27 10:19:54 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_TripleTag_17_ideal = new TCanvas("pt_jet1_2017_QuadJet_TripleTag_17_ideal", "pt_jet1_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetFillStyle(4000);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15709);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetRightMargin(0.1234783);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetBottomMargin(0.12);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1__115 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1__115","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(7,0.3409091);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(8,0.4025974);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(9,0.5918367);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(10,0.5826087);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(11,0.6486486);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(12,0.6111111);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(13,0.6548673);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(14,0.6615385);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(15,0.6271186);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(16,0.6333333);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(17,0.65);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(18,0.6904762);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(19,0.3478261);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(20,0.6296296);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(21,0.64);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(22,0.8235294);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(23,0.4166667);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(24,0.5333333);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(25,0.7272727);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(26,0.7777778);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(27,0.5714286);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(28,0.625);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(29,0.3333333);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(30,0.5);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(31,0.6);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(32,0.75);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(34,1);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(35,1);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(38,1);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(40,0.75);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(43,1);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(46,1);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(47,1);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(49,1);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetBinContent(51,0.75);
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetEntries(24.12084);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 24     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  268.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  120.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet1__115->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet1__115);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_pt_jet1__115->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet1__115->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet1__115->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_ideal_pt_jet1__115->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__115->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__115->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__115->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_pt_jet1__115->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__115->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__115->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__115->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__115->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__115->Draw("HIST");
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->Modified();
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->cd();
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetSelected(pt_jet1_2017_QuadJet_TripleTag_17_ideal);
}
