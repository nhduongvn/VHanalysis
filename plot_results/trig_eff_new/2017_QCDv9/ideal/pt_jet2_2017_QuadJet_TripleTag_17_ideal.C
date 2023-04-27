#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_TripleTag_17_ideal()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_TripleTag_17_ideal/pt_jet2_2017_QuadJet_TripleTag_17_ideal
//=========  (Wed Apr 26 16:41:50 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_TripleTag_17_ideal = new TCanvas("pt_jet2_2017_QuadJet_TripleTag_17_ideal", "pt_jet2_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->Range(-109.1764,-0.1076923,585.8166,0.7897436);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFillStyle(4000);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15709);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetRightMargin(0.1234783);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetBottomMargin(0.12);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet2__121 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet2__121","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(5,0.05670103);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(6,0.1026265);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(7,0.1466535);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(8,0.1705591);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(9,0.2043691);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(10,0.229682);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(11,0.2003082);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(12,0.2115666);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(13,0.2294776);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(14,0.2256342);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(15,0.2564103);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(16,0.2327586);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(17,0.2558923);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(18,0.2093023);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(19,0.2956989);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(20,0.2608696);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(21,0.2989691);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(22,0.2083333);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(23,0.1290323);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(24,0.1714286);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(25,0.3333333);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(26,0.2608696);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(27,0.2666667);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(28,0.25);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(29,0.125);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(30,0.5);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(31,0.2222222);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(32,0.1666667);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(33,0.6666667);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(35,0.5);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(39,0.5);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetBinContent(44,0.5);
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetEntries(8.387698);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  238.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  103.2");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet2__121->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet2__121);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_pt_jet2__121->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet2__121->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet2__121->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_ideal_pt_jet2__121->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__121->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__121->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__121->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_pt_jet2__121->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__121->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__121->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__121->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__121->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__121->Draw("HIST");
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->Modified();
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->cd();
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetSelected(pt_jet2_2017_QuadJet_TripleTag_17_ideal);
}
