#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_TripleTag_17_ideal()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_TripleTag_17_ideal/pt_jet3_2017_QuadJet_TripleTag_17_ideal
//=========  (Tue Apr 25 23:02:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_TripleTag_17_ideal = new TCanvas("pt_jet3_2017_QuadJet_TripleTag_17_ideal", "pt_jet3_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->Range(-109.1764,-0.1076923,585.8166,0.7897436);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetFillStyle(4000);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15709);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetRightMargin(0.1234783);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetBottomMargin(0.12);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3__127 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3__127","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(5,0.0826484);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(6,0.1440412);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(7,0.1828952);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(8,0.2176504);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(9,0.2199724);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(10,0.2396755);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(11,0.2547065);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(12,0.2253521);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(13,0.2818428);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(14,0.25);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(15,0.2941176);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(16,0.3113208);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(17,0.1594203);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(18,0.2333333);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(19,0.15625);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(20,0.3125);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(21,0.1578947);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(22,0.07142857);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(23,0.4);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(24,0.6666667);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(28,0.25);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetBinContent(29,0.5);
   _QuadJet_TripleTag_ideal_pt_jet3__127->SetEntries(5.611717);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 6      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  170.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  69.33");
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
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->Modified();
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->cd();
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetSelected(pt_jet3_2017_QuadJet_TripleTag_17_ideal);
}
