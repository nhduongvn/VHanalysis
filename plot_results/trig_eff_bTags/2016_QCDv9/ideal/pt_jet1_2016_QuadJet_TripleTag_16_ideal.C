#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_QuadJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet1_2016_QuadJet_TripleTag_16_ideal/pt_jet1_2016_QuadJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_QuadJet_TripleTag_16_ideal = new TCanvas("pt_jet1_2016_QuadJet_TripleTag_16_ideal", "pt_jet1_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFillStyle(4000);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1__229 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1__229","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(6,0.4090909);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(7,0.5);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(8,0.6478873);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(9,0.8039216);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(10,0.7333333);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(11,0.7682927);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(12,0.8589744);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(13,0.8243243);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(14,0.877551);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(15,0.9302326);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(16,0.8863636);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(17,0.9583333);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(18,0.8214286);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(19,0.826087);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(20,0.8484848);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(21,0.8888889);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(22,0.8);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(23,0.7222222);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(24,0.8888889);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(25,0.9);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(26,0.8888889);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(27,1);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(28,0.7142857);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(29,0.75);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(30,1);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(31,0.75);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(32,1);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(34,1);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(35,1);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(36,1);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(37,0.5);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(38,1);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(41,1);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(42,1);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(43,0.8);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(45,1);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetBinContent(51,0.5);
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetEntries(31.29748);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 31     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  247.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  108.2");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet1__229->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet1__229);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_pt_jet1__229->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet1__229->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet1__229->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_ideal_pt_jet1__229->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__229->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__229->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__229->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_pt_jet1__229->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__229->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__229->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__229->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__229->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__229->Draw("HIST");
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->Modified();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->cd();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetSelected(pt_jet1_2016_QuadJet_TripleTag_16_ideal);
}
