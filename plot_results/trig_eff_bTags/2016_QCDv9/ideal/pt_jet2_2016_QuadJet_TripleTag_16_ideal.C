#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_TripleTag_16_ideal/pt_jet2_2016_QuadJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_TripleTag_16_ideal = new TCanvas("pt_jet2_2016_QuadJet_TripleTag_16_ideal", "pt_jet2_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFillStyle(4000);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet2__241 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet2__241","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(5,0.2941176);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(6,0.4712644);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(7,0.7191781);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(8,0.82);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(9,0.7886179);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(10,0.9130435);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(11,0.8863636);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(12,0.8666667);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(13,0.7966102);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(14,0.8235294);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(15,0.9411765);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(16,0.9090909);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(17,0.8235294);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(18,0.875);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(19,0.7142857);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(20,0.8888889);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(21,0.875);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(22,0.8333333);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(23,1);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(24,0.8);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(25,1);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(26,1);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(27,1);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(28,1);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetBinContent(35,1);
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetEntries(23.0397);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 23     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  188.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  80.58");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet2__241->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet2__241);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_pt_jet2__241->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet2__241->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet2__241->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_ideal_pt_jet2__241->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__241->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__241->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__241->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_pt_jet2__241->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__241->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__241->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__241->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__241->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__241->Draw("HIST");
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->Modified();
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->cd();
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetSelected(pt_jet2_2016_QuadJet_TripleTag_16_ideal);
}
