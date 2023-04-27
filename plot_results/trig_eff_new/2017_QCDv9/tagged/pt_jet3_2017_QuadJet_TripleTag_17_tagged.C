#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_TripleTag_17_tagged()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_TripleTag_17_tagged/pt_jet3_2017_QuadJet_TripleTag_17_tagged
//=========  (Wed Apr 26 16:41:50 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_TripleTag_17_tagged = new TCanvas("pt_jet3_2017_QuadJet_TripleTag_17_tagged", "pt_jet3_2017_QuadJet_TripleTag_17_tagged",0,0,600,600);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->Range(-109.1764,-0.1076923,585.8166,0.7897436);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFillColor(0);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFillStyle(4000);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetBorderSize(2);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetLeftMargin(0.15709);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetRightMargin(0.1234783);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetBottomMargin(0.12);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet3__73 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet3__73","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(5,0.06720827);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(6,0.1297483);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(7,0.1831307);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(8,0.2194043);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(9,0.2205177);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(10,0.2431611);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(11,0.2565865);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(12,0.2292419);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(13,0.2792023);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(14,0.254902);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(15,0.2883436);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(16,0.3142857);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(17,0.1594203);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(18,0.2105263);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(19,0.1724138);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(20,0.3333333);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(21,0.2105263);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(22,0.07142857);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(23,0.4444444);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(24,0.6666667);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(28,0.25);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(29,0.5);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetEntries(5.704492);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 6      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  171.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  68.55");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet3__73);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->Draw("HIST");
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->Modified();
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->cd();
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetSelected(pt_jet3_2017_QuadJet_TripleTag_17_tagged);
}
