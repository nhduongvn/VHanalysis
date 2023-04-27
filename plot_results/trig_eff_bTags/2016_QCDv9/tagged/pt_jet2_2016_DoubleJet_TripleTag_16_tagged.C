#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_TripleTag_16_tagged()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_TripleTag_16_tagged/pt_jet2_2016_DoubleJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_TripleTag_16_tagged = new TCanvas("pt_jet2_2016_DoubleJet_TripleTag_16_tagged", "pt_jet2_2016_DoubleJet_TripleTag_16_tagged",0,0,600,600);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetFillColor(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetFillStyle(4000);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetLeftMargin(0.15709);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetRightMargin(0.1234783);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetBottomMargin(0.12);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_pt_jet2__139 = new TH1D("_DoubleJet_TripleTag_tagged_pt_jet2__139","",50,0,500);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(5,0.2352941);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(6,0.1954023);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(7,0.3424658);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(8,0.5066667);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(9,0.6910569);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(10,0.8602151);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(11,0.8977273);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(12,0.8870968);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(13,0.8333333);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(14,0.8235294);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(15,0.9411765);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(16,0.9090909);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(17,0.8235294);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(18,0.9375);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(19,0.8571429);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(20,0.9);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(21,0.875);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(22,0.8333333);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(23,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(24,0.8);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(25,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(26,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(27,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(28,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(29,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(33,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetBinContent(35,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetEntries(22.14956);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 22     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  194.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   77.1");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_pt_jet2__139->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_pt_jet2__139);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_tagged_pt_jet2__139->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_tagged_pt_jet2__139->GetXaxis()->SetRange(1,500);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_tagged_pt_jet2__139->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__139->Draw("HIST");
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->Modified();
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->cd();
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetSelected(pt_jet2_2016_DoubleJet_TripleTag_16_tagged);
}
