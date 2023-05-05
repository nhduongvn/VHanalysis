#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_3B()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18_3B/pt_jet3_2018_QuadJet_TripleTag_18_3B
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18_3B = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18_3B", "pt_jet3_2018_QuadJet_TripleTag_18_3B",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetFillStyle(4000);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetLeftMargin(0.15709);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetRightMargin(0.1234783);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetBottomMargin(0.12);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_pt_jet3__37 = new TH1D("_QuadJet_TripleTag_3B_pt_jet3__37","",50,0,500);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(5,0.2817494);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(6,0.3950241);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(7,0.4872861);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(8,0.5570595);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(9,0.6076152);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(10,0.6289141);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(11,0.6298507);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(12,0.6235864);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(13,0.647619);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(14,0.5851064);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(15,0.6346154);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(16,0.6083333);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(17,0.625);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(18,0.673913);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(19,0.72);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(20,0.7407407);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(21,0.6428571);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(22,0.7272727);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(23,0.6);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(24,0.7);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(25,0.5);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(26,0.4285714);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(27,0.5);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(28,1);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(29,1);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(31,1);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetBinContent(33,0.6666667);
   _QuadJet_TripleTag_3B_pt_jet3__37->SetEntries(17.21178);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_3B_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 17     ");
   ptstats_LaTex = ptstats->AddText("Mean  =    188");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  78.51");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_pt_jet3__37->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_pt_jet3__37);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_3B_pt_jet3__37->SetLineColor(ci);
   _QuadJet_TripleTag_3B_pt_jet3__37->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_3B_pt_jet3__37->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_3B_pt_jet3__37->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__37->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet3__37->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__37->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_3B_pt_jet3__37->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__37->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__37->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__37->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet3__37->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__37->Draw("HIST");
   
   TLegend *leg = new TLegend(-0.1,0.937775,0.8,1,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","HLT_PTHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pt_jet3_2018_QuadJet_TripleTag_18_3B->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18_3B->cd();
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18_3B);
}
