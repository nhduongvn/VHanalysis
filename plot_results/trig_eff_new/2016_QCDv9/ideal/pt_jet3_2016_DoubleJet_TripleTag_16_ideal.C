#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_ideal/pt_jet3_2016_DoubleJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:18:39 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_ideal", "pt_jet3_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFillStyle(4000);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet3__259 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet3__259","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(5,0.3446356);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(6,0.3847298);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(7,0.4123875);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(8,0.4588353);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(9,0.48999);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(10,0.5184638);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(11,0.5527192);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(12,0.5721477);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(13,0.5646067);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(14,0.6275304);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(15,0.5032258);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(16,0.51);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(17,0.5);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(18,0.5357143);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(19,0.5454545);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(20,0.6818182);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(21,0.5);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(22,0.4285714);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(23,0.7272727);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(24,0.4);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(25,0.5);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(26,0.5714286);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(27,0.8);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(28,0.5);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(29,0.5);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(30,0.8);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(32,1);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetBinContent(33,1);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetEntries(15.92953);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 16     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  195.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  83.56");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet3__259->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet3__259);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_ideal_pt_jet3__259->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet3__259->GetXaxis()->SetRange(1,500);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_ideal_pt_jet3__259->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__259->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16_ideal);
}
