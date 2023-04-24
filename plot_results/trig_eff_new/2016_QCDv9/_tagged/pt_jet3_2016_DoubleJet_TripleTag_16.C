#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16/pt_jet3_2016_DoubleJet_TripleTag_16
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16 = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16", "pt_jet3_2016_DoubleJet_TripleTag_16",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFillStyle(4000);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15709);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetRightMargin(0.1234783);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetBottomMargin(0.12);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_pt_jet3__295 = new TH1D("_DoubleJet_TripleTag_tagged_pt_jet3__295","",50,0,500);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(5,0.1449925);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(6,0.209964);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(7,0.3066283);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(8,0.4125815);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(9,0.4844961);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(10,0.516129);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(11,0.5528634);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(12,0.5719064);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(13,0.5630252);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(14,0.6275304);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(15,0.503268);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(16,0.5148515);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(17,0.5);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(18,0.5357143);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(19,0.5454545);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(20,0.6818182);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(21,0.5);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(22,0.4285714);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(23,0.7272727);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(24,0.4);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(25,0.5);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(26,0.5714286);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(27,0.8);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(28,0.5);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(29,0.5);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(30,0.8);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(32,1);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetBinContent(33,1);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetEntries(15.3985);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 15     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  200.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   80.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_pt_jet3__295->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_pt_jet3__295);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_tagged_pt_jet3__295->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_tagged_pt_jet3__295->GetXaxis()->SetRange(1,500);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_tagged_pt_jet3__295->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__295->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16);
}
