#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_tagged()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_tagged/pt_jet3_2016_DoubleJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:18:38 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_tagged = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_tagged", "pt_jet3_2016_DoubleJet_TripleTag_16_tagged",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetFillStyle(4000);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetLeftMargin(0.15709);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetRightMargin(0.1234783);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetBottomMargin(0.12);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_pt_jet3__151 = new TH1D("_DoubleJet_TripleTag_tagged_pt_jet3__151","",50,0,500);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(5,0.1448703);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(6,0.2094709);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(7,0.3070652);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(8,0.4125356);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(9,0.4853372);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(10,0.5184638);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(11,0.5527192);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(12,0.5721477);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(13,0.5646067);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(14,0.6275304);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(15,0.5032258);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(16,0.51);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(17,0.5);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(18,0.5357143);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(19,0.5454545);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(20,0.6818182);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(21,0.5);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(22,0.4285714);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(23,0.7272727);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(24,0.4);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(25,0.5);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(26,0.5714286);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(27,0.8);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(28,0.5);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(29,0.5);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(30,0.8);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(32,1);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetBinContent(33,1);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetEntries(15.39823);
   
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
   ptstats_LaTex = ptstats->AddText("Std Dev   =  80.71");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_pt_jet3__151->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_pt_jet3__151);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_tagged_pt_jet3__151->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_tagged_pt_jet3__151->GetXaxis()->SetRange(1,500);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_tagged_pt_jet3__151->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__151->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16_tagged);
}
